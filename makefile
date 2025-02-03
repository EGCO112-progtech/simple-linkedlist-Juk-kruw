T = khung

compile: main.c 
	 gcc main.c -o $T

run: $T
	 ./$T

clean: $T
	 rm $T
