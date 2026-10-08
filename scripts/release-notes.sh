#!/bin/bash
# Печатает заметки к релизу: ревизии компилятора и фреймворка, из которых собраны архивы, и сами архивы.
# Использование: scripts/release-notes.sh [<коммит>]
# Ревизии берутся из подмодулей, закреплённых в данном коммите этого репозитория (по умолчанию HEAD), даты - из истории подмодулей.
# Рабочий процесс релиза вызывает скрипт без аргументов, а с коммитом он перегенерирует заметки уже опубликованного релиза.
set -euo pipefail

COMMIT="${1:-HEAD}"

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR/.."

# Ревизия подмодуля $1 как ссылка на коммит в репозитории $2 на GitHub, с датой коммита.
revision() {
  local HASH
  HASH=$(git rev-parse "$COMMIT:$1")
  echo "ревизия [$(git -C "$1" rev-parse --short "$HASH")](https://github.com/$2/commit/$HASH) от $(git -C "$1" log -1 --format=%cs "$HASH")"
}

cat <<NOTES
Компилятор [Рефал-05](https://github.com/Mazdaywik/Refal-05): $(revision refal-05 Mazdaywik/Refal-05).
[Рефал-5-фреймворк](https://github.com/Mazdaywik/refal-5-framework) в \`lib\`: $(revision refal-5-framework Mazdaywik/refal-5-framework).

| архив | платформа |
|---|---|
| \`refal05c-linux-x86_64.tar.gz\` | Linux x86-64, статическая сборка, зависимостей от glibc нет |
| \`refal05c-windows-x64.zip\` | Windows x64, статический CRT, Visual C++ Redistributable не нужен |

Как подключить компилятор к проекту - в [README](https://github.com/butvinm/Refal-05-Standalone#использование).
NOTES
