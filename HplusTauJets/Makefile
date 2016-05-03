ROOTCFLAGS   := $(shell root-config --cflags)
ROOTLIBS     := $(shell root-config --libs) -lMinuit -lEG 
# -lCintex is mandatory within athena environment. Comment out when running standalone root on your local machine.
ROOTGLIBS	= $(shell root-config --glibs)

#CC		=g++
CXX		= g++
CXXFLAGS	=-I$(ROOTSYS)/include -O -Wall -fPIC 
LD		= clang++
LDFLAGS		= -g
SOFLAGS		= -shared

CXXFLAGS	+= $(ROOTCFLAGS)
LIBS		= $(ROOTLIBS)
GLIBS		= $(ROOTGLIBS)
#  $(warning LIBS is $(LIBS))		#for debugging
#  $(warning GLIBS is $(GLIBS))		#for debugging

OBJS            = TauJetsSelection.o


TauJetsSelection: $(OBJS)

	$(CXX) -o $@ $(OBJS) $(CXXFLAGS) $(LIBS)

# suffix rule
.cc.o:
	$(CXX) -c $(CXXFLAGS) $(GDBFLAGS) $<

# clean
clean:
	rm -f *~ *.o *.o~ core TauJetsSelection

