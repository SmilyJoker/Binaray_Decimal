#include <iostream>
#include <cmath>

using namespace std;

void BinaryToDecimal();
void DecimalToBinary();

int main()
{
    int choice;
    cout << "You want to make Binary to Decimal? Choose 1 : " << endl;
    cout << "You want to make Decimal to Binary? Choose 2 : " << endl;
    cin >> choice;
    if(choice == 1){
    BinaryToDecimal();
    }
    if(choice == 2){
        DecimalToBinary();
    }

    return 0;
}

void BinaryToDecimal(){

    int binary;
    int binaryCopy;
    int numberOfBinary=0;

    LOOP:cout << " Insert the Binary number! :";
    cin >> binary;
    cout << endl;

    binaryCopy = binary;

    do{
        binary = binary / 10;
        numberOfBinary++;

    }while(binary >= 1);

    int sumBinary = 0;
    int numberBinary;

    int choiceBinary;
    bool finishBinary = true;

    while(finishBinary != false){
    for(int i = 0; i < numberOfBinary; i++){

        if(binaryCopy % 10 == 1 && i < numberOfBinary - 1){
            numberBinary = pow(2,i);
            cout << 2 << "^" << i << " + ";
            sumBinary += numberBinary;
            binaryCopy /= 10;
        }
        else if(binaryCopy % 10 == 1 && i == numberOfBinary -1 ){
            numberBinary = pow(2,i);
            cout << 2 << "^" << i << " = ";
            sumBinary += numberBinary;
            binaryCopy /= 10;
        }
        else if(binaryCopy % 10 == 0){
            binaryCopy /= 10;
        }
        else{
            cout << "You have inserted a non Binary Number ! " << endl;
            cout << "You want to insert again ? Choose 1 " << endl;
            cout << "You want to leave ? Choose 2 " << endl;
            cin >> choiceBinary;
            cout << endl;
            if(choiceBinary == 1){
                finishBinary = true;
                goto LOOP;
            }
            else if (choiceBinary == 2){
                finishBinary = false;
            }
        }
    }
    cout << sumBinary << endl;
    finishBinary = false;
    }
}

void DecimalToBinary(){

    int decimal;
    int decimalCopy;
    int numberOfDecimal = 0;

    cout << " Insert the Decimal number! :";
    cin >> decimal;
    cout << endl;

    decimalCopy = decimal;

    do{
        decimal /= 2;
        numberOfDecimal++;

    }while(decimal >=1);

    int binaryArray[numberOfDecimal];
    int i = numberOfDecimal;


    while(decimalCopy >= 1){

        if(decimalCopy % 2 == 0){
            binaryArray[i-1] = 0;
        }
        else{
            binaryArray[i-1] = 1;
        }
        i--;
        decimalCopy /= 2;
    }
        for(int i = 0; i <= numberOfDecimal-1;i++){

        cout << binaryArray[i] << "  ";
        }

    }



