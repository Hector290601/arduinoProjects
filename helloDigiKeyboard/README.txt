To install digispark dependencies on arduino IDE:

- Open the Aduino IDE.
- Go to: "File->Preferences" (Ctrl + Comma).
- Go to "Additional Boards Manager URLs" box and add:
http://digistump.com/package_digistump_index.json
	optionaly, if you have more boards, separe it by commas.
- Click "Ok".
- Go to "Tools->Board->Boards Manager".
- Search "Digistum AVR Boards" (if ypu type Digi, this can be visible).
- Select the "Digistump AVR Boards" and click install.

To thins install tutorial, see:

http://digistump.com/wiki/digispark/tutorials/connecting

To compile and upload code:

- Open the .ino file.
- Go to "Tools->Board->Digistump AVR Boards" and select your board, this code is writed in the first option (Digispark (Default - 16.5MHz)).
- Click on send button.
- On the compiler output print you have 60 seconds to connect the board.
- Connect the board.
- The program will compile and run.
