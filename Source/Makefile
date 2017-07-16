# this is  comment
#all target is default



#####	Navigation Variables #####

HEADERSDIR = ../Headers
SOURCEDIR = ../Source
RESOURCEDIR = ../Resource

.DEFAULT_GOAL : execute
.PHONY : clean # to prevent from being confused with a file 'clean'
##################################

objects = main.o

execute: $(objects) 
	g++ -o output $(objects)
	./output

#main.o: main.cpp
#	g++ -c main.cpp

clean: 
	-rm output $(objects)

#whatever is after the colon is a dependency
