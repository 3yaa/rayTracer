CC     = g++
FLAGS  = -g -c -Wall
LFLAGS = -lm -lsfml-graphics -lsfml-window -lsfml-system
OBJS   = main.o render.o vector3d.o ray.o
OUT    = rayTracer
#SOURCE = main.cpp render.cpp vector3d.cpp
#HEADER = render.h ray.h vector3d.h

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp 

render.o: render.cpp
	$(CC) $(FLAGS) render.cpp

vector3d.o: vector3d.cpp
	$(CC) $(FLAGS) vector3d.cpp

ray.o: ray.cpp
	$(CC) $(FLAGS) ray.cpp

clean:
	rm -f $(OBJS) $(OUT)