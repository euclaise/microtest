TESTFLAGS := $(CFLAGS) $(shell cat test/compile_flags.txt | tr '\n' ' ')
CFLAGS := $(CFLAGS) $(shell cat src/compile_flags.txt | tr '\n' ' ')
CFLAGS := $(CFLAGS) -g
FILES := $(wildcard src/*.c)
TESTFILES := $(wildcard test/*.c)

.PHONY: main test clean

main:
	$(CC) $(FILES) $(CFLAGS)

test:
	$(CC) $(FILES) $(TESTFILES) $(TESTFLAGS)
	./a.out
	@make clean

clean:
	@test -e a.out && rm a.out || true
	@test -e a.out.dSYM && rm -r a.out.dSYM || true
