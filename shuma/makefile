[PY] = ~/4115/stc/stcflash.py
burn:
	sudo python $(PY) shuma.bin
compile: shuma.c
	sdcc shuma.c
	packihx shuma.ihx > shuma.hex
	objcopy -I ihex -O binary shuma.hex shuma.bin

60: 60.c
	sdcc 60.c
	packihx 60.ihx > 60.hex
	objcopy -I ihex -O binary 60.hex 60.bin

time: time.c
	sdcc time.c
	packihx time.ihx > time.hex
	objcopy -I ihex -O binary time.hex time.bin
