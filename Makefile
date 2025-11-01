c-plus-plus.conf.sh:
	@test -f c-plus-plus.conf.sh || cp src/c-plus-plus.conf.sh.template c-plus-plus.conf.sh

bin/refal05: c-plus-plus.conf.sh
	mkdir -p bin
	src/bootstrap.sh

.PHONY: clear
clear:
	rm -f ./*.c
