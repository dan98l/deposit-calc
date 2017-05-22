TITLE = deposit-calc
TITLETEST = deposit-calc-test

MAIN = main
DPST = deposit
MAINTEST = maintest
DPSTTEST = deposit_test

FLAGS = -Wall -Werror
BUILDPATH = build/
BINPATH = bin/
TESTPATH = test/
SRCPATH = src/
HEADERS = -I thirdparty -I src
CC = gcc

all: build test

$(BUILDPATH)$(MAIN).o: $(SRCPATH)$(MAIN).c
	$(CC) $(FLAGS) -c $(SRCPATH)$(MAIN).c -o $(BUILDPATH)$(MAIN).o

$(BUILDPATH)$(DPST).o: $(SRCPATH)$(DPST).c
	$(CC) $(FLAGS) -c $(SRCPATH)$(DPST).c -o $(BUILDPATH)$(DPST).o

build: $(BUILDPATH)$(MAIN).o $(BUILDPATH)$(DPST).o
	$(CC) $(BUILDPATH)$(MAIN).o $(BUILDPATH)$(DPST).o -o $(BINPATH)$(TITLE)

$(BUILDPATH)$(MAINTEST).o: $(TESTPATH)main.c
	$(CC) $(HEADERS) -c $(TESTPATH)main.c -o $(BUILDPATH)$(MAINTEST).o

$(BUILDPATH)$(DPSTTEST).o: $(TESTPATH)$(DPSTTEST).c
	$(CC) $(HEADERS) -c $(TESTPATH)$(DPSTTEST).c -o $(BUILDPATH)$(DPSTTEST).o

test: $(BUILDPATH)$(DPSTTEST).o $(BUILDPATH)$(MAINTEST).o $(BUILDPATH)$(DPST).o
	$(CC) $(BUILDPATH)$(MAINTEST).o $(BUILDPATH)$(DPSTTEST).o $(BUILDPATH)$(DPST).o -o $(BINPATH)$(TITLETEST)

clean:
	rm -rf $(BUILDPATH)*.o
