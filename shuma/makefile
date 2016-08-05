ROOT=..

include $(ROOT)/make.defines
PY = python ../stcflash.py

all: shuma.bin 60.bin timer.bin
%.bin: %.c
	$(SDCC)   $<  $(CFLAGS) $(LIBPATH)
	packihx $*.ihx > $*.hex
	objcopy -I ihex -O binary $*.hex  $*.bin

clean:
	rm -f $(TEMPFILES)
