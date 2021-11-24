final:main.o function.o
	$(CC) $^ -o $@
%.o:%.c
	$(CC) -c $<
clean:
	rm -f *.o final
