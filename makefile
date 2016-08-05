lin:
	sdcc *c
	packihx led.ihx > led.hex
	objcopy -I ihex -O binary led.hex led.bin
