# calculate_crc32
"This function takes a string data and returns its CRC32 code based on decimal."
you can calculate crc32 of string data with below function but this function return decimal integer so you for disable this to value to hex 
you can use of std::cout << std::hex <<1233442; code;
for example :
   int a=153463;
   std::cout << "Checksum: " << std::hex << a << std::endl;
return 25777 in hex =>153463(in decimal)=0x25777;
   
