CLFAGS=-Wall -g

exercises= {1}

all:
	make ex$(exercises)
clean:
	rm -f ex$(exercises)
