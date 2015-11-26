#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
    std::fstream hexFile(argv[1], std::ios::in);

    if(hexFile.is_open() == true)
    {
        
    }
    else
    {
        std::cout << "ERROR OPENING HEX FILE!" << std::endl;
    }

    return 0;
}
