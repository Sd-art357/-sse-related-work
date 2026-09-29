#include <stdio.h>//functions are used to repeat a certain set of code at certain places after some interval of time 
void greet()// not everything can be done with loops over functions as we also need to make sure that the code is readable
{// bcoz loop bhi repetiton krdega just like functions pr wo sirf ek jagah ek sath repetition krega while functions ko mai khi bhi aur kbhi call krke use kr skta hu

    printf("good morning\n");//note sbse pehle main function hi chlta hai 
    printf("how are you ?\n");
    return;// means khatam tata bye bye
}
int main()
{
    greet();//function call, greet basically function ka name hai jaise main ek function ka name hai
    greet();
    return 0;// idhr hmne 3 baar function call kri hai and mai function ke andr loop ko bhi chla skta hu for calling function
}// main function ek baar hi aayega 
// note sir ne jo wo india australia aur england wala ques kraya tha usme bola tha ki main ke upr likhna hota hai yeh sb and main ke andr india ko call kra tha fir india ke andr say australia ko call kra toh australiia india ke upr hona chahiye tbhi code chlega so sqe and positioning matters is cheeze ko solve krne ke liye we use function prototype
