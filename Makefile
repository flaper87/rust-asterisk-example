all: res_helloworld.so

helloworld.bc: helloworld.rs
	rustc --emit=bc helloworld.rs

helloworld.o: helloworld.bc
	clang -c -fPIC helloworld.bc

res_helloworld.so: res_helloworld.c helloworld.o
	clang -fPIC -Wall -O3 --shared -o res_helloworld.so res_helloworld.c helloworld.o

clean:
	rm *.bc
	rm *.o
	rm res_helloworld.so
