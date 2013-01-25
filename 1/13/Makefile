compiler	= clang
progname	= 1.13
progcode	= $(progname).c

test:
	$(compiler) -o $(progname) $(progcode)
	cat $(progcode) | ./$(progname)

clean:
	-rm -rf $(progname)
