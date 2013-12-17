msp-ledbar
==========
msp-ledbar - Libraries for grove led bar by seeed studio. Ported from the libraries for Arduino provided by seeed studio.
https://github.com/Seeed-Studio/Grove_LED_Bar

ported by Mahesh M
http:// blogofmahe.wordpress.com
maheshmohan93@gmail.com


This is a try to port the seeed studio's Grove led bar libraries(originally made for arduino) to msp430 devices. The code is edited with seeed studio's library as reference. Don't know if it works. There's some problem with the header file but code will compile correctly if it is not used as a header file. Uncomment the lines in the trial program and comment the #include"msp_ledbar.h" and compile. The code will be compiled if the selected IC has enough flash memory. I couldn't test the compiled code as i have msp430g2553 (16kb flash). Code compiled correctly when i used msp430f5529 as the IC in msp430-gcc.


