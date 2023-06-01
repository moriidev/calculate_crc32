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
