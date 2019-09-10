prog: hw3.o flightLog.o flight.o crewMember.o crew.o plane.o planes.o pilot.o coPilot.o cabin.o
	g++ -o prog hw3.o flightLog.o flight.o crewMember.o crew.o plane.o planes.o pilot.o coPilot.o cabin.o

hw3.o: flightLog.h hw3.cpp
	g++ -c hw3.cpp
	
flightLog.o: flight.h flightLog.cpp
	g++ -c flightLog.cpp

flight.o: crew.h planes.h flight.cpp
	g++ -c flight.cpp
	
crew.o: crew.cpp crewMember.h
	g++ -c crew.cpp

crewMember.o: crewMember.cpp
	g++ -c crewMember.cpp

planes.o: planes.cpp plane.h
	g++ -c planes.cpp

plane.o: plane.cpp
	g++ -c plane.cpp
	
pilot.o: pilot.cpp crewMember.h
	g++ -c pilot.cpp

coPilot.o: coPilot.cpp crewMember.h
	g++ -c coPilot.cpp
	
cabin.o: cabin.cpp crewMember.h
	g++ -c cabin.cpp
	
clean:
	rm prog hw3.o flightLog.o flight.o crewMember.o crew.o plane.o planes.o pilot.o coPilot.o cabin.o
run:
	./prog
