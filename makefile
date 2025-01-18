worksheetW2: w2Main.o readGrads.o oneMoreDone.o
	gcc w2Main.o readGrads.o oneMoreDone.o -o worksheetW2

w2Main.o: w2Main.c
	gcc -Wall -std=c99 -c w2Main.c

readGrads.o: readGrads.c
	gcc -Wall -std=c99 -c readGrads.c

oneMoreDone.o: oneMoreDone.c 
	gcc -Wall -std=c99 -c oneMoreDone.c 

clean:
	rm *.o worksheetW2

