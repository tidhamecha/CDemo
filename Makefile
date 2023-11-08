default: build	
build:
	gcc -o sample sample.c

run: build	
	./sample

test:
	gcc -o tests tests.c
	./tests