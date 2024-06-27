# variable for app name
APP_NAME = game.bin

# variable for flags
FLAGS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

build:./main.cpp
	g++ -c ./main.cpp
	g++ main.o -o $(APP_NAME) $(FLAGS)

run:
	./$(APP_NAME)

build-run: build run

clean:
	rm -f *.o $(APP_NAME)