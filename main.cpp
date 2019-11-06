#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void messageFromBinaryCode(string code)
{
    vector <string> ciagi_znakow;
    string tmp = "";
    string result = "";
    //char znak;


    for(int i=0; i<code.size(); i++)
    {
        if (i%8==0)
        {
            tmp = "";
            for(int j=i; j<i+8; j++)
            {
                tmp+=code[j];
            }
            ciagi_znakow.push_back(tmp);
        }
    }

  for(int j=0; j<ciagi_znakow.size(); j++)
  {
        int value = 0;
        int indexCounter = 0;
      for(int i=ciagi_znakow[j].length()-1;i>=0;i--)
        {
            if(ciagi_znakow[j][i]=='1')
            {
            value += pow(2, indexCounter);
            }
        indexCounter++;
        }
        char znak = (int) value;
        result+=znak;
  }

    cout <<result<<endl;
}


int main()
{
    //string code = "010010000110010101101100011011000110111100100001";
    messageFromBinaryCode("010010000110010101101100011011000110111100100001");
        messageFromBinaryCode("01001101011000010111100100100000011101000110100001100101001000000100011001101111011100100110001101100101001000000110001001100101001000000111011101101001011101000110100000100000011110010110111101110101");
            messageFromBinaryCode("010110010110111101110101001000000110100001100001011001000010000001101101011001010010000001100001011101000010000001100000011010000110010101101100011011000110111100101110");
                messageFromBinaryCode("010001010110110001100101011011010110010101101110011101000110000101110010011110010010110000100000011011010111100100100000011001000110010101100001011100100010000001010111011000010111010001110011011011110110111000100001");

    return 0;
}
