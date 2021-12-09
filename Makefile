##
# AdventOfCode
#
# @file
# @version 0.1

.PHONY: build run clean

FIRST := 2021
LAST := 2021

build:
	for i in $$(seq ${FIRST} ${LAST}); do \
		make -C $$i build; \
	done

run:
	for i in $$(seq ${FIRST} ${LAST}); do \
		make -C $$i run; \
	done

clean:
	for i in $$(seq ${FIRST} ${LAST}); do \
		make -C $$i clean; \
	done

# end
