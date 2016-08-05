ROOT=..

include $(ROOT)/make.defines

all: led.bin led2.bin
%.bin: %.c
	$(SDCC)   $<  $(CFLAGS) $(LIBPATH)
	packihx $*.ihx > $*.hex
	objcopy -I ihex -O binary $*.hex  $*.bin

clean:
	rm -f $(TEMPFILES)
