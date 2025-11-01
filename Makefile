c-plus-plus.conf.sh:
	@test -f c-plus-plus.conf.sh || cp src/c-plus-plus.conf.sh.template c-plus-plus.conf.sh

c-plus-plus.conf.bat:
	@test -f c-plus-plus.conf.bat || cp src/c-plus-plus.conf.bat.template c-plus-plus.conf.bat

bin/refal05: c-plus-plus.conf.sh
	mkdir -p bin
	src/bootstrap.sh

bin/refal05.exe: c-plus-plus.conf.bat
	if not exist bin mkdir bin
	src\bootstrap.bat

.PHONY: clear
clear:
	rm -f ./*.c
