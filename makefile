Main: Main.o Usuario.o db_administrador.o db_manager.o db_intern.o db_supervisor.o
	g++ Main.o Usuario.o db_administrador.o db_manager.o db_intern.o db_supervisor.o -o Main
Main.o: Main.cpp Usuario.h db_administrador.h db_manager.h db_intern.h db_supervisor.h
	g++ -c Main.cpp
Usuario.o: Usuario.h Usuario.cpp
	g++ -c Usuario.cpp
db_administrador.o: Usuario.h db_administrador.h db_administrador.cpp
	g++ -c db_administrador.cpp
db_manager.o: Usuario.h db_manager.h db_manager.cpp
	g++ -c db_manager.cpp
db_intern.o: Usuario.h db_intern.h db_intern.cpp
	g++ -c db_intern.cpp
db_supervisor.o: Usuario.h db_supervisor.h db_supervisor.cpp
	g++ -c db_supervisor.cpp
Clean:
	rm -f *.o temp
