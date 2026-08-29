c-plus-plus.conf.sh:
	@test -f c-plus-plus.conf.sh || cp refal-05/lib/c-plus-plus.conf.sh.template c-plus-plus.conf.sh

c-plus-plus.conf.cmd:
	@test -f c-plus-plus.conf.cmd || cp refal-05/lib/c-plus-plus.conf.cmd.template c-plus-plus.conf.cmd

bin/refal05c: c-plus-plus.conf.sh
	mkdir -p bin
	scripts/bootstrap.sh

bin/refal05c.exe: c-plus-plus.conf.cmd
	if not exist bin mkdir bin
	scripts\bootstrap.cmd

.PHONY: clear
clear:
	rm -rf bin
	rm -f ./*.c
