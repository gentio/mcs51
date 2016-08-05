ROOT=..

include $(ROOT)/make.defines

LIB=libint.lib
REL = _time.rel _circlemove.rel

all: $(LIB)

$(LIB): $(REL)

%.rel: %.c
	$(SDCCLIB) $<
	$(AR) $(LIB) $*.rel

clean:
	rm -f $(TEMPFILES)
