#!/bin/bash
# Собирает дистрибутив компилятора: bin/ с исполняемым файлом и lib/ с рантаймом и фреймворком.
# Использование: scripts/dist.sh <тег> <платформа> <исполняемый файл>
# Результат: dist/<платформа>/refal05c/
# Каталог внутри архива называется refal05c без тега и платформы, чтобы пути после распаковки не зависели от версии.
# Тег записывается в файл VERSION.
set -euo pipefail

if [ $# -ne 3 ]; then
  echo "Usage: scripts/dist.sh <tag> <platform> <binary>" >&2
  exit 2
fi

TAG="$1"
PLATFORM="$2"
BINARY="$3"

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
RUNTIME_DIR="$PROJECT_ROOT/refal-05/lib"
FRAMEWORK_DIR="$PROJECT_ROOT/refal-5-framework/lib"
DIST="$PROJECT_ROOT/dist/$PLATFORM/refal05c"

if [ ! -f "$BINARY" ]; then
  echo "Binary not found: $BINARY" >&2
  exit 1
fi

if [ ! -f "$RUNTIME_DIR/refal05rts.h" ] || [ ! -f "$FRAMEWORK_DIR/LibraryEx.ref" ]; then
  echo "Submodules are missing. Run: git submodule update --init --recursive" >&2
  exit 1
fi

rm -rf "$DIST"
mkdir -p "$DIST/bin" "$DIST/lib"

cp "$BINARY" "$DIST/bin/"

# Рантайм: заголовок, рантайм, встроенные функции и обёртка точки входа Go.
cp "$RUNTIME_DIR/refal05rts.h" "$RUNTIME_DIR/refal05rts.c" "$RUNTIME_DIR/refal05bif.c" "$RUNTIME_DIR/Go.c" "$DIST/lib/"

# Фреймворк одним плоским каталогом, чтобы в R05PATH хватало одного пути.
# Platform.ref берётся из posix на обеих платформах, как и при раскрутке.
cp "$FRAMEWORK_DIR"/*.ref "$FRAMEWORK_DIR/posix/Platform.ref" "$DIST/lib/"

cp "$RUNTIME_DIR/LICENSE" "$DIST/LICENSE.refal-05"
cp "$PROJECT_ROOT/refal-5-framework/LICENSE" "$DIST/LICENSE.refal-5-framework"

echo "$TAG" > "$DIST/VERSION"

echo "$DIST"
