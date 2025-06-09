a.out : createcontact.o deletecontact.o editcontact.o findcontact.o menu.o print.o save.o sync1.o
	cc createcontact.o deletecontact.o editcontact.o findcontact.o menu.o print.o save.o sync1.o

createcontact.o : createcontact.c header.h
	cc -c createcontact.c

deletecontact.o : deletecontact.c header.h
	cc -c deletecontact.c

editcontact.o : editcontact.c header.h
	cc -c editcontact.c

findcontact.o : findcontact.c header.h
	cc -c findcontact.c

menu.o : menu.c header.h
	cc -c menu.c

print.o : print.c header.h
	cc -c print.c

save.o : save.c header.h
	cc -c save.c

sync1.o : sync1.c header.h
	cc -c sync1.c
