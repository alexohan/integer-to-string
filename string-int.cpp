int string_to_int(string numb)
{
    int size = numb.length();
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        if((numb[i]>= 48) && (numb[i]<= 57))
        {
            
            sum += (numb[i] - 48)*pow(10, size - i-1);
            
        }
    }
    return sum;
}

string int_to_string(int numb)
{
    int temp = numb;
    int digit = 1;
    while(temp > 9){
        temp /= 10;
        digit++;
    }
    
    string yeet = "";
    char a;
    while(digit != 0){
        a = numb/pow(10, digit - 1) + 48;
        yeet += a;
        
        int powvar = 1;
        for(int i = 1; i < digit; i++){
            powvar *= 10;
        }
        
        digit--;
        
        numb = numb % powvar;
    }
    
    return yeet;
}