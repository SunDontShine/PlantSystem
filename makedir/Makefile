#####	Navigation Variables #####

HEADERSDIR = ../headers/
SOURCEDIR = ../source/
RESOURCEDIR = ../resource/

.DEFAULT_GOAL : execute
.PHONY : clean # to prevent from being confused with a file 'clean'
##################################

objects = main

execute: $(objects) 
	./main

#compile all with wiring pi
compile: $(HEADERSDIR)DHT22.h $(HEADERSDIR)Sensor.h $(HEADERSDIR)TemperatureSensor.h $(HEADERSDIR) $(SOURCEDIR)DHT22.cpp $(SOURCEDIR)Sensor.cpp $(SOURCEDIR)TemperatureSensor.cpp $(SOURCEDIR)main.cpp
	g++ -Wall -o main ../source/main.cpp ../source/TemperatureSensor.cpp ../source/Sensor.cpp ../source/DHT22.cpp ../headers/TemperatureSensor.h ../headers/Sensor.h ../headers/DHT22.h -lwiringPi

#cleanup directories and object files
clean: 
	-rm main $(objects)

#whatever is after the colon is a dependency
