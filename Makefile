c-plus-plus.conf.sh:
	@test -f lib/c-plus-plus.conf.sh || cp lib/c-plus-plus.conf.sh.template c-plus-plus.conf.sh

bin/refal05: c-plus-plus.conf.sh
	mkdir -p bin
	src/bootstrap.sh
