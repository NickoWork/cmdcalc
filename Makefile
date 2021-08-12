all:main



main:build/src/main.o build/src/computing.o
	gcc -Wall build/src/main.o build/src/computing.o -o bin/cmdcalc.exe -lm
	gcc -Wall build/src/main.o build/src/computing.o -o bin/cmdcalc -lm
build/src/computing.o:src/computing.c
	gcc -Wall -c src/computing.c -o build/src/computing.o
build/src/main.o:src/main.c
	gcc -Wall -c src/main.c -o build/src/main.o


test:
	@echo Example 1 ::
	@echo ====================================
	bin/./cmdcalc "(1.1-2)+3*(2.5*2)+10"
	@echo
	@echo Example 2 ::	
	@echo =========================================
	bin/./cmdcalc "600/(295-60-5-60+50-20)*5"
	@echo 
	@echo Example 3 ::
	@echo ====================================
	bin/./cmdcalc "-10-(56+44)/50*(2*3)"


clean:
	rm -rf build/test/*.o
	rm -rf build/src/*.o 
	rm -rf bin/cmdcalc
