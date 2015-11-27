#include <iostream>
#include <fstream>
#include <math.h>

int main(int argc, char* argv[])
{
    std::fstream hexFile(argv[1], std::ios::in);

    std::string sHex;
    unsigned int dec;
    unsigned int index = 0;
    unsigned int value;

    if(hexFile.is_open() == true)
    {
        while(getline(hexFile,sHex))
        {
            //std::cout << "hex value: " << sHex;
            
            while(index < sHex.length())
            {
                if(sHex[index] == 'a')
                {
                    value = 10;
                }
                else if(sHex[index] == 'b')
                {
                    value = 11;
                }
                else if(sHex[index] == 'c')
                {
                    value = 12;
                }
                else if(sHex[index] == 'd')
                {
                    value = 13;
                }
                else if(sHex[index] == 'e')
                {
                    value = 14;
                }
                else if(sHex[index] == 'f')
                {
                    value = 15;
                }
                else
                {
                    value = sHex[index] - '0';
                }
            
                //std::cout << "    length: " << sHex.length() << ", value: " << value << ", index: " << sHex.length()-index-1 << std::endl; 

                dec = dec + value*pow(16,sHex.length()-index-1);

                ++index;
            }

            std::cout << dec << std::endl;

            // prepare to read the next value
            index = 0;
            dec = 0;
        }
    }
    else
    {
        std::cout << "ERROR OPENING HEX FILE!" << std::endl;
    }

    return 0;
}
