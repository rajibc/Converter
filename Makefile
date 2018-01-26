CC = g++
LOCALINCLUDES = -I/home/rajibc/LIB_PROJ/CONVERTER/inc
EXEC = ConverterAPP
OBJECTS = ConverterAppClient.o \
	  BaseConverter.o \
	  BinaryConverter.o \
	  ConverterFactory.o \
	  TrinaryConverter.o \
	  QuadrinaryConverter.o

all:	$(EXEC)

$(EXEC): $(OBJECTS) 
	 $(CC) -o $@ $^
		
%.o: src/%.cc
	$(CC) $(LOCALINCLUDES) -c $<

clean: 
	/bin/rm -f ConverterAPP *.o

