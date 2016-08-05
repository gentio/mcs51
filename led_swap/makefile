[PY] = ~/4115/stc/stcflash.py
burn:
	sudo python $(PY) led.bin
compile: led.c
	sdcc led.c
	packihx led.ihx > led.hex
	objcopy -I ihex -O binary led.hex led.bin
