CC = g++

CFLAGS = -Wshadow -Winit-self 									\
	-Wredundant-decls -Wcast-align -Wundef -Wfloat-equal 		\
	-Winline -Wunreachable-code -Wmissing-declarations 			\
	-Wmissing-include-dirs -Wswitch-enum -Wswitch-default 		\
	-Weffc++ -Wmain -Wextra -Wall -g -pipe -fexceptions 		\
	-Wconversion -Wctor-dtor-privacy -Wempty-body 				\
	-Wformat-security -Wformat=2 -Wignored-qualifiers 			\
	-Wlogical-op -Wno-missing-field-initializers 				\
	-Wnon-virtual-dtor -Woverloaded-virtual -Wpointer-arith 	\
	-Wsign-promo -Wstack-usage=8192 -Wstrict-aliasing 			\
	-Wstrict-null-sentinel -Wtype-limits -Wwrite-strings 		\
	-Werror=vla -D_DEBUG -D_EJUDGE_CLIENT_SIDE

SOURCES = bAtoi.cpp bFgets.cpp bGetline.cpp bMain.cpp bPuts.cpp bStrcat.cpp bStrchr.cpp bStrdup.cpp bStrlen.cpp bStrncat.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = start

all: $(SOURCES) $(EXECUTABLE)
	@echo "Compilation complete"

$(EXECUTABLE): $(OBJECTS)
	@$(CC) $(CFLAGS) $(OBJECTS) -o $@

.cpp.o:
	@$(CC) $(CFLAGS) -c $< -o $@
