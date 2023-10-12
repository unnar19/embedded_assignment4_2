obj-m+=mydev.o

all:
	make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) modules
	g++ -o main main.cpp -lpthread
	
clean:
	make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) clean