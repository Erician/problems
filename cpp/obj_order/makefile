.PHONY: clean
OBJDIR = ../obj

default: $(OBJDIR)/main

$(OBJDIR)/main: $(OBJDIR)/main.o $(OBJDIR)/B.o  $(OBJDIR)/A.o 
	g++ -o $@ $^

$(OBJDIR)/main.o: main.cc
	g++ -c -o $@ $<

$(OBJDIR)/A.o: A.cc
	g++ -c -o $@ $<

$(OBJDIR)/B.o: B.cc
	g++ -c -o $@ $<

clean: 
	rm -fr *.o $(OBJDIR)/*.o $(OBJDIR)/*main 