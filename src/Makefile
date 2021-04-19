program.out:main.o coffee.o coffeeShop.o worker.o softDrink.o cake.o product.o receipt.o menu.o
	g++ -o program.out main.o coffee.o coffeeShop.o worker.o softDrink.o cake.o product.o receipt.o menu.o

main.o: main.cpp coffee.h coffeeShop.h worker.h softDrink.h cake.h product.h receipt.o menu.h
	g++ -c -o main.o main.cpp

coffee.o: coffee.cpp coffee.h product.h
	g++ -c -o coffee.o coffee.cpp

coffeeShop.o: coffeeShop.cpp coffeeShop.h
	g++ -c -o coffeeShop.o coffeeShop.cpp

worker.o: worker.cpp worker.h
	g++ -c -o worker.o worker.cpp

softDrink.o: softDrink.cpp softDrink.h product.h
	g++ -c -o softDrink.o softDrink.cpp

cake.o: cake.cpp cake.h product.h
	g++ -c -o cake.o cake.cpp

product.o: product.cpp product.h
	g++ -c -o product.o product.cpp

receipt.o: receipt.cpp receipt.h
	g++ -c -o receipt.o receipt.cpp

menu.p: menu.cpp menu.h
	g++ -c -o menu.o menu.cpp
