CC=cl65
PROGRAM=MAIN

make:
	$(CC) -O -o $(PROGRAM).PRG -t cx16 main.c

run:
	@x16emu -prg $(PROGRAM).PRG -run
