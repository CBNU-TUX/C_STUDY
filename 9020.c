//#include <stdio.h>
//
//int main()
//{
//    while(1)
//    {
//        int number,i,j,count;
//        scanf("%d", &number);
//        if(number==0) break;
//        int primes[2*number+1];
//        //populating array with naturals numbers
//        for(i = 2; i<=2*number; i++)
//            primes[i] = i;
//
//        i = 2;
//        count=0;
//        while ((i*i) <= 2*number)
//        {
//            if (primes[i] != 0)
//            {
//                for(j=2; j<2*number; j++)
//                {
//                    if (primes[i]*j > 2*number)
//                        break;
//                    else
//                        // Instead of deleteing , making elemnets 0
//                        primes[primes[i]*j]=0;
//                }
//            }
//            i++;
//        }
//        for(i = number+1; i<=2*number; i++)
//        {
//            //If number is not 0 then it is prime
//            if (primes[i]!=0)
//                count++;
//        }
//        printf("%d\n", count);
//    }
//    return 0;
//}
