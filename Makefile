test: clean main.o
	bash test.sh "15 36 18 44 222 0 -1 -33 44 120 31 -12 -2" "222 -33"
	bash test.sh "15 36 18 44 -15 0 -38 -33 44 120 31 -12 -2" "120 -38"
	bash test.sh "15 36 18 44 15 9 38 33 44 140 31 12 2" "140 2"
	bash test.sh "-15 -36 -18 -4 -5 -9 -8 -3 -4 -140 -31 -2 -2" "-2 -140"

main.o:
	gcc main.c -o main.o

clean:
	rm -rf *.o *~ main
	
