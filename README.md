# calculate_crc32
In some codes, crc32 is calculated directly with the solved table. In this code, crc32 is calculated directly.
"This function takes a string data and returns its CRC32 code based on decimal."
you can calculate crc32 of string data with below function but this function return decimal integer so you for disable this to value to hex 
you can use of std::cout << std::hex <<1233442; code;
for example :
   int a=153463;
   std::cout << "Checksum: " << std::hex << a << std::endl;
return 25777 in hex =>153463(in decimal)=0x25777;
////////////////////////////////////////////////////////////////
#include <iostream>
uint32_t crc32(std::string data)
{

    const uint32_t polynomial = 0xEDB88320;

    uint32_t crc = 0xFFFFFFFF;

    for (size_t i = 0; i < data.size(); ++i) {
        crc ^= data[i];
        for (int j = 0; j < 8; ++j) {
            if (crc & 1) {
                crc = (crc >> 1) ^ polynomial;
            } else {
                crc >>= 1;
            }
        }
    }

    return ~crc;
}

int main()
{
    std::string str="The desired sentence";
    std::cout << "Checksum: " << std::hex << crc32(str) << std::endl;
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////
