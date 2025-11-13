    /*
     * C program for Tower of Hanoi using Recursion
     */
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    void towers(int, char, char, char);

    int main()
    {
        int num;
        printf("Enter the number of disks : ");
        scanf("%d",&num);
        printf("The sequence of moves involved in the Tower of Hanoi are :\n");
        towers(num, 'A', 'C', 'B');
        return 0;
    }

    void towers(int num, char frompeg, char topeg, char auxpeg)
    {
        printf("\n num : %d ",num);
        printf("\n *******************************************");
        printf("\n frompeg = %c,\t topeg = %c,\t auxpeg = %c",frompeg, topeg,auxpeg);
        printf("\n *******************************************");
        if (num == 1)
        {
            printf("\n Inside if");
            printf("\n Move disk 1 from peg %c to peg %c", frompeg, topeg);
            return;
        }
        towers(num - 1, frompeg, auxpeg, topeg);

        printf("\n outside if");
        printf("\n Move disk %d from peg %c to peg %c", num, frompeg, topeg);

        towers(num - 1, auxpeg, topeg, frompeg);
    }
