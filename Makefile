#variables
COMPILE = g++
FLAGS = -W -Wall -Werror
DEBUG = -g -W -Wall -Werror
OBJS = Manager.o Task.o
CFLAGS = -Wall -g

#Targets

all: main.cpp $(OBJS)
	$(COMPILE) $(FLAGS) -o a.out main.cpp $(OBJS)

Manager.o: Manager.cpp Manager.h
	$(COMPILE) $(FLAGS) -c Manager.cpp

Task.o: Task.cpp Task.h
	$(COMPILE) $(FLAGS) -c Task.cpp

clean:
	rm -rf *~ *.o a.out *.gch

debug: main.cpp $(OBJS)
	$(COMPILE) $(DEBUG) -o a.out main.cpp $(OBJS)