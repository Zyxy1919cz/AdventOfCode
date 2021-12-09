##
# AdventOfCode
#
# @file
# @version 0.1

.PHONY: build run clean

N := 3

build:
	for i in $$(seq -f "%02g" 1 ${N}); do \
		make -C $$i build; \
	done

run:
	for i in $$(seq -f "%02g" 1 ${N}); do \
		make -C $$i run; \
	done

clean:
	for i in $$(seq -f "%02g" 1 ${N}); do \
		make -C $$i clean; \
	done

© 2021 GitHub, Inc.
Terms


# end
