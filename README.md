# Автономная сборка компилятора Рефала-05

Этот репозиторий собирает компилятор [Рефал-05](https://github.com/Mazdaywik/Refal-05) без стороннего компилятора Рефала-5. Для сборки достаточно компилятора C89.

## Использование

Архив для своей платформы можно скачать на странице [релизов](https://github.com/butvinm/Refal-05-Standalone/releases).

Архив содержит каталог `refal05c` со следующим содержимым:

- `refal05c/bin/refal05c` или `refal05c/bin/refal05c.exe`: компилятор, собранный под вашу платформу
- `refal05c/lib`: рантайм Рефала-05 и Рефал-5-фреймворк

Пример использования:

```shell
curl -L https://github.com/butvinm/Refal-05-Standalone/releases/latest/download/refal05c-linux-x86_64.tar.gz | tar -xz

export R05PATH="refal05c/lib"
export R05CCOMP="gcc -O2 -o main"
refal05c/bin/refal05c main LibraryEx Platform refal05rts refal05bif Go
```

> В Windows компилятор разделяет `R05PATH` по двоеточиям, поэтому путь к `lib` не должен содержать букву диска: подходит `lib` или `\refal05c\lib`, но не `C:\refal05c\lib`.

Компилятор удобно подключить в проект как подмодуль и собирать из исходников вместе с проектом.
Это делает любой ваш проект на Рефале-05 самодостаточным.

```shell
git submodule add https://github.com/butvinm/Refal-05-Standalone
git submodule update --init --recursive
make -C Refal-05-Standalone bin/refal05c

export R05PATH="Refal-05-Standalone/refal-05/lib:Refal-05-Standalone/refal-5-framework/lib:Refal-05-Standalone/refal-5-framework/lib/posix"
export R05CCOMP="gcc -O2 -o main"
Refal-05-Standalone/bin/refal05c main LibraryEx Platform refal05rts refal05bif Go
```

Пример проекта с таким подмодулем - [lame-refal](https://github.com/butvinm/lame-refal).

## Устройство проекта

- `refal-05`, `refal-5-framework` - подмодули с исходниками [компилятора](https://github.com/Mazdaywik/Refal-05) и [Рефал-5-фреймворка](https://github.com/Mazdaywik/refal-5-framework). Файлы подмодулей включаются как есть и не модифицируются.
- `bootstrap` - C-код, порождённый предыдущей сборкой, и её рантайм.
- `scripts` - скрипты раскрутки и запуска тестов.

Раскрутка проходит в три шага:

1. Из каталога `bootstrap` собирается старый компилятор.
2. Старый компилятор компилирует новые исходники. Из полученного C-кода собирается промежуточный компилятор с новым генератором.
3. Промежуточный компилятор порождает новый `bootstrap`. Из нового `bootstrap` собирается новый компилятор.

Промежуточный шаг нужен, чтобы после изменения генератора или заголовка рантайма хватало одного запуска раскрутки.
Раскрутка завершается запуском автотестов из репозитория Рефала-05.

## Автоматическое обновление

Раз в неделю рабочий процесс GitHub Actions обновляет каждый подмодуль до последней ревизии, запускает раскрутку и автотесты, коммитит новый `bootstrap` и открывает запрос на слияние.

Проверки запроса на слияние повторяют раскрутку и убеждаются, что раскрутка воспроизводит закоммиченный `bootstrap`. Если проверки проходят, GitHub сливает запрос автоматически.

После каждого слияния в `master` рабочий процесс проверяет, есть ли релиз для ревизии подмодуля `refal-05`.
Если релиза нет, рабочий процесс собирает компилятор для Linux и Windows, запускает автотесты и публикует архивы.

Тег релиза совпадает с ревизией подмодуля `refal-05`.
