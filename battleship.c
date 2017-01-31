#include <stdio.h>
#define rows 11
#define cols 11
void main (void)
{
	//defining variables, arrays and pre defined 2d array
	int i, j, xc, k, l, y, x, p, q, s, ycord1, enter, ctr, at2, at1int, rep = 0, flag, bxc, byc, w, bxc2, byc2, g;
	char b, c, bogus, bogus1, select, align, yc, at1, ipt, ba, ycd, xcd, ba2, arr2[11][11], arr3[11][11], arr4[11][11], arr5[11][11];
	char arr[11][11] = {{95, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57},
			    {'a', 95, 95, 95, 95, 95, 95, 95, 95, 95, 95},
			    {'b', 95, 95, 95, 95, 95, 95, 95, 95, 95, 95},
			    {'c', 95, 95, 95, 95, 95, 95, 95, 95, 95, 95},
			    {'d', 95, 95, 95, 95, 95, 95, 95, 95, 95, 95},
			    {'e', 95, 95, 95, 95, 95, 95, 95, 95, 95, 95},
			    {'f', 95, 95, 95, 95, 95, 95, 95, 95, 95, 95},
			    {'g', 95, 95, 95, 95, 95, 95, 95, 95, 95, 95},
			    {'h', 95, 95, 95, 95, 95, 95, 95, 95, 95, 95},
			    {'i', 95, 95, 95, 95, 95, 95, 95, 95, 95, 95},
			    {'j', 95, 95, 95, 95, 95, 95, 95, 95, 95, 95}};
  	//displaying the word Battleship
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t* * *         *       * * * * * *   * * * * * *   *         * * * *    * * *    *     *   * * * * *   * * * *	\n");
	printf("\t*    *      *   *          *            *         *         *         *         *     *       *       *      *\n");
	printf("\t*    *    *       *        *            *         *         *         *         *     *       *       *      *\n");
	printf("\t* * *     *       *        *            *         *         * * *      * * *    * * * *       *       * * * *	\n");
	printf("\t*    *    * * * * *        *            *         *         *               *   *     *       *       *       \n");
	printf("\t*    *    *       *        *            *         *         *               *   *     *       *       *	\n");
	printf("\t* * *     *       *        *            *         * * * *   * * * *    * * *    *     *   * * * * *   *       \n\n\n");
	//Displaying ascii boat
	printf("		            |								\n");
	printf("  	       	            |								\n");
	printf("  	           |        |								\n");
	printf("  	         |-|-|      |								\n");
	printf("  	           |        |								\n");
	printf("  	           | {O}    |								\n");
	printf("  	           '--|     |								\n");
	printf("  	             .|]_   |								\n");
	printf("  	       _.-=.' |     |								\n");
	printf("  	      |    |  |]_   |								\n");
	printf("  	      |_.-='  |   __|__								\n");
	printf("  	       _.-='  |\\   /|\\							\n");
	printf("  	      |    |  |-'-'-'-'-.							\n");
	printf("  	      |_.-='  '========='							\n");
	printf("  	           `   |     |								\n");
	printf("  	            `. |    / \\							\n");
	printf("  	              ||   /   \\____.--=''''==--.._					\n");
	printf("  	              ||_.'--=='    |__  __  __  _.'					\n");
	printf("  	              ||  |    |    |\\ ||  ||  || |                        ___		\n");
	printf("  	 ____         ||__|____|____| \\||__||__||_/    __________________/|   |	\n");
	printf("  	|    |______  |===.---. .---.========''''=-._ |     |     |     / |   |		\n");
	printf("  	|    ||     |\\| |||   | |   |      '===' ||  \\|_____|_____|____/__|___|	\n");
	printf("  	|-.._||_____|_\\___'---' '---'______....---===''======//=//////========|	\n");
	printf("  	|--------------\\------------------/-----------------//-//////---------/	\n");
	printf("  	|               \\                /                 // //////         /		\n");
	printf("  	|                \\______________/                 // //////         /		\n");
	printf("  	|                                        _____===//=//////=========/		\n");
	printf("  	|=================================================================/		\n");
	printf("  	'----------------------------------------------------------------`		\n");

	//press s to start the game
	while(b != 's')
	{
	printf("\nEnter <s> to start playing >> ");
	scanf(" %c", &b);
	scanf("%c", &bogus);
 	}
	//player 1 starts
		printf("\nPlayer 1 start:\n");
		printf("\n");
	//displays empty board
		for(i = 0; i < 11; i++)
		{
			for(j = 0; j < 11; j++)
			{
				printf("|_%c_|", arr[i][j]);
				printf(" ");
				printf(" ");
			}
			printf("\n");
			printf("\n");
		}
	//while loop that keeps going untill a boat is succssefully placed
	while(1)
	{
	//when the flag is 0, the boat is okay, flag = 1, error and loop repeats
	flag = 0;
	printf("Boat Placement\n\n");
	//choose alignment of boat
	printf("Aircraft Carrier (5)\n\nChoose alignment vertical <v> or horizontal <h> >> ");
	scanf(" %c", &align);
	//cordinate placement
	printf("\nCordinate Placement (tip of boat) >> ");
	//getchar catches the letter portion
	yc = getchar();
	while(1)
	{
	yc = getchar();
	//will only break if one of the specified letters is entered
	if(yc == 'a' || yc == 'b' || yc == 'c' || yc == 'd' || yc == 'e' || yc == 'f' || yc == 'g' || yc == 'h' || yc == 'i' || yc == 'j')
	break;
	}
	//scans the number portion of the cordinate
	scanf("%d", &xc);
	//converts any of the letters to number value in the array
	if(yc == 'a')
		ycord1 = 1;
	if(yc == 'b')
                ycord1 = 2;
	if(yc == 'c')
                ycord1 = 3;
	if(yc == 'd')
                ycord1 = 4;
	if(yc == 'e')
                ycord1 = 5;
	if(yc == 'f')
                ycord1 = 6;
	if(yc == 'g')
                ycord1 = 7;
	if(yc == 'h')
                ycord1 = 8;
	if(yc == 'i')
                ycord1 = 9;
	if(yc == 'j')
                ycord1 = 10;

	printf("\n");
	//intializes arr2 with empty spaces
	for(k = 0; k < 11; k++)
	{
		for(l = 0; l < 11; l++)
		arr2[k][l] = arr[k][l];
	}
	//if v is selected and withen bounds, fils array with x's
	if(align == 'v' && ycord1 + 5 <= 11)
	{
	for(p = 0; p < 5; p++)
	{
	arr2[ycord1 + p][xc + 1] = 'X';
	}
	}
	//if h is selected and withen bounds, fils array with x's
	if(align == 'h' && xc + 5 <= 10)
        {
        for(p = 0; p < 5; p++)
        {
        arr2[ycord1][xc + p + 1] = 'X';
        }
        }
	//if out of bounds sets flag to 1
	else if(xc + 5 > 10 || ycord1 + 5 > 11)
	{
	flag = 1;
	printf("\n\n!!!Out of bounds try again!!!\n\n");
	}
	//redisplays board with x's insid
        for(i = 0; i < 11; i++)
        {
        	for(j = 0; j < 11; j++)
                {
                	printf("|_%c_|", arr2[i][j]);
                	printf(" ");
                	printf(" ");
                }
        printf("\n");
        printf("\n");
        }
	//if flag is still set to 0, breaks out of loop
	if(flag == 0)
	break;
	}
	//everything after this comment is the same for the next boat untill mentioned
	while(1)
	{
	flag = 0;
        printf("Battleship (4)\n\nChoose alignment vertical <v> or horizontal <h> >> ");
        scanf(" %c", &align);
        printf("\nCordinate Placement (tip of boat) >> ");
        yc = getchar();
        while(1)
        {
        yc = getchar();
        if(yc == 'a' || yc == 'b' || yc == 'c' || yc == 'd' || yc == 'e' || yc == 'f' || yc == 'g' || yc == 'h' || yc == 'i' || yc == 'j')
        break;
        }
        scanf(" %d", &xc);

	if(yc == 'a')
                ycord1 = 1;
        if(yc == 'b')
                ycord1 = 2;
        if(yc == 'c')
                ycord1 = 3;
        if(yc == 'd')
                ycord1 = 4;
        if(yc == 'e')
                ycord1 = 5;
        if(yc == 'f')
                ycord1 = 6;
        if(yc == 'g')
                ycord1 = 7;
        if(yc == 'h')
                ycord1 = 8;
        if(yc == 'i')
                ycord1 = 9;
        if(yc == 'j')
                ycord1 = 10;

        if(align == 'v' && ycord1 + 4 <= 11)
        {
        for(p = 0; p < 4; p++)
        {
		//if the boat intersects one boat sets flag to 1
     	if(arr2[ycord1 + p][xc + 1] == 'X')
	    {
		flag = 1;
		break;
        }
	}
	if(flag == 0)
	{
	//used to store battleship coordinates and alignment for game completion
	ba = 'v';
	byc = ycord1;
	bxc = xc + 1;
	for(p = 0; p < 4; p++)
	arr2[ycord1 + p][xc + 1] = 'X';
        }
	}
		//same as vertical
        if(align == 'h' && xc + 4 <= 10)
        {
        for(p = 0; p < 4; p++)
        {
        if(arr2[ycord1][xc + p + 1] == 'X')
        {
                flag = 1;
                break;
        }
        }
        if(flag == 0)
        {
	    ba = 'h';
        byc = ycord1;
        bxc = xc +1;
        for(p = 0; p < 4; p++)
        arr2[ycord1][xc + p + 1] = 'X';
        }
        }

	else if(xc + 4 > 10 || ycord1 + 4 > 11)
        flag = 1;

	printf("\n");

	for(i = 0; i < 11; i++)
        {
                for(j = 0; j < 11; j++)
                {
                        printf("|_%c_|", arr2[i][j]);
                        printf(" ");
                        printf(" ");
                }
                printf("\n");
                printf("\n");
        }

	if(flag == 0)
		break;
	//if out of bounds or intersect sets flag to 1
	if(flag == 1)
		printf("\nOut of bounds or intersecting boats try again!\n\n");
	}
	//same as previous for next boat without storing the coordinates of the battleship
	while(1)
	{
	flag = 0;
	printf("Submarine (3)\n\nChoose alignment vertical <v> or horizontal <h> >> ");
        scanf(" %c", &align);
        printf("\nCordinate Placement (tip of boat) >> ");
        yc = getchar();
        while(1)
        {
        yc = getchar();
        if(yc == 'a' || yc == 'b' || yc == 'c' || yc == 'd' || yc == 'e' || yc == 'f' || yc == 'g' || yc == 'h' || yc == 'i' || yc == 'j')
        break;
        }
        scanf(" %d", &xc);

	if(yc == 'a')
                ycord1 = 1;
        if(yc == 'b')
                ycord1 = 2;
        if(yc == 'c')
                ycord1 = 3;
        if(yc == 'd')
                ycord1 = 4;
        if(yc == 'e')
                ycord1 = 5;
        if(yc == 'f')
                ycord1 = 6;
        if(yc == 'g')
                ycord1 = 7;
        if(yc == 'h')
                ycord1 = 8;
        if(yc == 'i')
                ycord1 = 9;
        if(yc == 'j')
                ycord1 = 10;


	if(align == 'v' && ycord1 + 4 <= 11)
        {
        for(p = 0; p < 3; p++)
        {
        if(arr2[ycord1 + p][xc + 1] == 'X')
        {
                flag = 1;
                break;
        }
        }
        if(flag == 0)
        {
        for(p = 0; p < 3; p++)
        arr2[ycord1 + p][xc + 1] = 'X';
        }
        }

        if(align == 'h' && xc + 3 <= 10)
        {
        for(p = 0; p < 3; p++)
        {
        if(arr2[ycord1][xc + p + 1] == 'X')
        {
                flag = 1;
                break;
        }
        }
        if(flag == 0)
        {
        for(p = 0; p < 3; p++)
        arr2[ycord1][xc + p + 1] = 'X';
        }
        }

	else if(xc + 3 > 10 || ycord1 + 3 > 11)
        flag = 1;

	printf("\n");

	for(i = 0; i < 11; i++)
        {
                for(j = 0; j < 11; j++)
                {
                        printf("|_%c_|", arr2[i][j]);
                        printf(" ");
                        printf(" ");
                }
                printf("\n");
                printf("\n");
        }
	if(flag == 0)
        break;
	if(flag == 1)
                printf("\nOut of bounds or intersecting boats try again!\n\n");
	}
	//same as previous for next boat
	while(1)
	{
	flag = 0;
	printf("Cruiser (3)\n\nChoose alignment vertical <v> or horizontal <h> >> ");
        scanf(" %c", &align);
        printf("\nCordinate Placement (tip of boat) >> ");
        yc = getchar();
        while(1)
        {
        yc = getchar();
        if(yc == 'a' || yc == 'b' || yc == 'c' || yc == 'd' || yc == 'e' || yc == 'f' || yc == 'g' || yc == 'h' || yc == 'i' || yc == 'j')
        break;
        }
        scanf(" %d", &xc);

	if(yc == 'a')
                ycord1 = 1;
        if(yc == 'b')
                ycord1 = 2;
        if(yc == 'c')
                ycord1 = 3;
        if(yc == 'd')
                ycord1 = 4;
        if(yc == 'e')
                ycord1 = 5;
        if(yc == 'f')
                ycord1 = 6;
        if(yc == 'g')
                ycord1 = 7;
        if(yc == 'h')
                ycord1 = 8;
        if(yc == 'i')
                ycord1 = 9;
        if(yc == 'j')
                ycord1 = 10;

	if(align == 'v' && ycord1 + 4 <= 11)
        {
        for(p = 0; p < 3; p++)
        {
        if(arr2[ycord1 + p][xc + 1] == 'X')
        {
                flag = 1;
                break;
        }
        }
        if(flag == 0)
        {
        for(p = 0; p < 3; p++)
        arr2[ycord1 + p][xc + 1] = 'X';
        }
        }

        if(align == 'h' && xc + 3 <= 10)
        {
        for(p = 0; p < 3; p++)
        {
        if(arr2[ycord1][xc + p + 1] == 'X')
        {
                flag = 1;
                break;
        }
        }
        if(flag == 0)
        {
        for(p = 0; p < 3; p++)
        arr2[ycord1][xc + p + 1] = 'X';
        }
        }

	else if(xc + 3 > 10 || ycord1 + 3 > 11)
        flag = 1;

	printf("\n");

	for(i = 0; i < 11; i++)
        {
                for(j = 0; j < 11; j++)
                {
                        printf("|_%c_|", arr2[i][j]);
                        printf(" ");
                        printf(" ");
                }
                printf("\n");
                printf("\n");
        }
	if(flag == 0)
        break;
	if(flag == 1)
                printf("\nOut of bounds or intersecting boats try again!\n\n");
	}
	// same as previous for next boat
	while(1)
	{
	flag = 0;
	printf("Destroyer (2)\n\nChoose alignment vertical <v> or horizontal <h> >> ");
        scanf(" %c", &align);
        printf("\nCordinate Placement (tip of boat) >> ");
        yc = getchar();
        while(1)
        {
        yc = getchar();
        if(yc == 'a' || yc == 'b' || yc == 'c' || yc == 'd' || yc == 'e' || yc == 'f' || yc == 'g' || yc == 'h' || yc == 'i' || yc == 'j')
        break;
        }
        scanf(" %d", &xc);

	if(yc == 'a')
                ycord1 = 1;
        if(yc == 'b')
                ycord1 = 2;
        if(yc == 'c')
                ycord1 = 3;
        if(yc == 'd')
                ycord1 = 4;
        if(yc == 'e')
                ycord1 = 5;
        if(yc == 'f')
                ycord1 = 6;
        if(yc == 'g')
                ycord1 = 7;
        if(yc == 'h')
                ycord1 = 8;
        if(yc == 'i')
                ycord1 = 9;
        if(yc == 'j')
                ycord1 = 10;

	if(align == 'v' && ycord1 + 2 <= 11)
        {
        for(p = 0; p < 2; p++)
        {
        if(arr2[ycord1 + p][xc + 1] == 'X')
        {
                flag = 1;
                break;
        }
        }
        if(flag == 0)
        {
        for(p = 0; p < 2; p++)
        arr2[ycord1 + p][xc + 1] = 'X';
        }
        }

        if(align == 'h' && xc + 2 <= 10)
        {
        for(p = 0; p < 2; p++)
        {
        if(arr2[ycord1][xc + p + 1] == 'X')
        {
                flag = 1;
                break;
        }
        }
        if(flag == 0)
        {
        for(p = 0; p < 2; p++)
        arr2[ycord1][xc + p + 1] = 'X';
        }
        }


	else if(xc + 2 > 10 || ycord1 + 2 > 11)
        flag = 1;

	printf("\n");
	for(i = 0; i < 11; i++)
        {
                for(j = 0; j < 11; j++)
                {
                        printf("|_%c_|", arr2[i][j]);
                        printf(" ");
                        printf(" ");
                }
                printf("\n");
                printf("\n");
        }
	if(flag == 0)
        break;
	if(flag == 1)
                printf("\nOut of bounds or intersecting boats try again!\n\n");
	}
	//press enter to continue with game
	printf("\nPress ENTER to continue.... \n\n");
        ipt = getchar();
        while(1)
        {
        ipt = getchar();
        if(ipt == 13);
        break;
        }
	//clears screen
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	while(c != 's')
        {
		//asks for player 2 to press 2 to start playing
        printf("\nPlayer 2 enter <s> to start playing:\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n>> ");
        scanf(" %c", &c);
        scanf("%c", &bogus1);
        }
		//prints out empty board for player 2
                printf("\n");

                for(i = 0; i < 11; i++)
                {
                        for(j = 0; j < 11; j++)
                        {
                                printf("|_%c_|", arr[i][j]);
                                printf(" ");
                                printf(" ");
                        }
                        printf("\n");
                        printf("\n");
                }
	//everything untill next comment is the same as player 1
	while(1)
	{
	flag = 0;
	printf("Aircraft Carrier (5)\n\nChoose alignment vertical <v> or horizontal <h> >> ");
        scanf(" %c", &align);
        printf("\nCordinate Placement (tip of boat) >> ");
        yc = getchar();
        while(1)
        {
        yc = getchar();
        if(yc == 'a' || yc == 'b' || yc == 'c' || yc == 'd' || yc == 'e' || yc == 'f' || yc == 'g' || yc == 'h' || yc == 'i' || yc == 'j')
        break;
        }
        scanf(" %d", &xc);

	if(yc == 'a')
                ycord1 = 1;
        if(yc == 'b')
                ycord1 = 2;
        if(yc == 'c')
                ycord1 = 3;
        if(yc == 'd')
                ycord1 = 4;
        if(yc == 'e')
                ycord1 = 5;
        if(yc == 'f')
                ycord1 = 6;
        if(yc == 'g')
                ycord1 = 7;
        if(yc == 'h')
                ycord1 = 8;
        if(yc == 'i')
                ycord1 = 9;
        if(yc == 'j')
                ycord1 = 10;

	for(k = 0; k < 11; k++)
        {
                for(l = 0; l < 11; l++)
                arr3[k][l] = arr[k][l];
        }

	if(align == 'v' && ycord1 + 5 <= 11)
        {
        for(p = 0; p < 5; p++)
        {
        arr3[ycord1 + p][xc + 1] = 'X';
        }
        }

        if(align == 'h' && xc + 5 <= 10)
        {
        for(p = 0; p < 5; p++)
        {
        arr3[ycord1][xc + p + 1] = 'X';
        }
        }

	else if(xc + 5 > 10 || ycord1 + 5 > 11)
        {
        flag = 1;
        printf("\nOut of bounds or intersecting boats try again!\n\n");
        }

	printf("\n");

	for(i = 0; i < 11; i++)
        {
                for(j = 0; j < 11; j++)
                {
                        printf("|_%c_|", arr3[i][j]);
                        printf(" ");
                        printf(" ");
                }
                printf("\n");
                printf("\n");
        }
	if(flag == 0)
        break;
	}

	while(1)
	{
	flag = 0;
	printf("Battleship (4)\n\nChoose alignment vertical <v> or horizontal <h> >> ");
        scanf(" %c", &align);
        printf("\nCordinate Placement (tip of boat) >> ");
        yc = getchar();
        while(1)
        {
        yc = getchar();
        if(yc == 'a' || yc == 'b' || yc == 'c' || yc == 'd' || yc == 'e' || yc == 'f' || yc == 'g' || yc == 'h' || yc == 'i' || yc == 'j')
        break;
        }
        scanf(" %d", &xc);

	if(yc == 'a')
                ycord1 = 1;
        if(yc == 'b')
                ycord1 = 2;
        if(yc == 'c')
                ycord1 = 3;
        if(yc == 'd')
                ycord1 = 4;
        if(yc == 'e')
                ycord1 = 5;
        if(yc == 'f')
                ycord1 = 6;
        if(yc == 'g')
                ycord1 = 7;
        if(yc == 'h')
                ycord1 = 8;
        if(yc == 'i')
                ycord1 = 9;
        if(yc == 'j')
                ycord1 = 10;


	if(align == 'v' && ycord1 + 4 <= 11)
        {
        for(p = 0; p < 4; p++)
        {
        if(arr3[ycord1 + p][xc + 1] == 'X')
        {
                flag = 1;
                break;
        }
        }
        if(flag == 0)
        {
	ba2 = 'v';
        byc2 = ycord1;
        bxc2 = xc + 1;
        for(p = 0; p < 4; p++)
        arr3[ycord1 + p][xc + 1] = 'X';
        }
        }

        if(align == 'h' && xc + 4 <= 10)
        {
        for(p = 0; p < 4; p++)
        {
        if(arr3[ycord1][xc + p + 1] == 'X')
        {
                flag = 1;
                break;
        }
        }
        if(flag == 0)
        {
        ba2 = 'h';
        byc2 = ycord1;
        bxc2 = xc + 1;
        for(p = 0; p < 4; p++)
        arr3[ycord1][xc + p + 1] = 'X';
        }
        }

	else if(xc + 4 > 10 || ycord1 + 4 > 11)
        {
        flag = 1;
        }

	printf("\n");

	for(i = 0; i < 11; i++)
        {
                for(j = 0; j < 11; j++)
                {
                        printf("|_%c_|", arr3[i][j]);
                        printf(" ");
                        printf(" ");
                }
                printf("\n");
                printf("\n");
        }
	if(flag == 0)
	break;
	if(flag == 1)
                printf("\nOut of bounds or intersecting boats try again!\n\n");

	}

	while(1)
	{
	flag = 0;
	printf("Submarine (3)\n\nChoose alignment vertical <v> or horizontal <h> >> ");
        scanf(" %c", &align);
        printf("\nCordinate Placement (tip of boat) >> ");
        yc = getchar();
        while(1)
        {
        yc = getchar();
        if(yc == 'a' || yc == 'b' || yc == 'c' || yc == 'd' || yc == 'e' || yc == 'f' || yc == 'g' || yc == 'h' || yc == 'i' || yc == 'j')
        break;
        }
        scanf(" %d", &xc);

	if(yc == 'a')
                ycord1 = 1;
        if(yc == 'b')
                ycord1 = 2;
        if(yc == 'c')
                ycord1 = 3;
        if(yc == 'd')
                ycord1 = 4;
        if(yc == 'e')
                ycord1 = 5;
        if(yc == 'f')
                ycord1 = 6;
        if(yc == 'g')
                ycord1 = 7;
        if(yc == 'h')
                ycord1 = 8;
        if(yc == 'i')
                ycord1 = 9;
        if(yc == 'j')
                ycord1 = 10;


	if(align == 'v' && ycord1 + 3 <= 11)
        {
        for(p = 0; p < 3; p++)
        {
        if(arr3[ycord1 + p][xc + 1] == 'X')
        {
                flag = 1;
                break;
        }
        }
        if(flag == 0)
        {
        for(p = 0; p < 3; p++)
        arr3[ycord1 + p][xc + 1] = 'X';
        }
        }

        if(align == 'h' && xc + 3 <= 10)
        {
        for(p = 0; p < 3; p++)
        {
        if(arr3[ycord1][xc + p + 1] == 'X')
        {
                flag = 1;
                break;
        }
        }
        if(flag == 0)
        {
        for(p = 0; p < 3; p++)
        arr3[ycord1][xc + p + 1] = 'X';
        }
        }


	else if(xc + 3 > 10 || ycord1 + 3 > 11)
        {
        flag = 1;
        }

	printf("\n");

	for(i = 0; i < 11; i++)
        {
                for(j = 0; j < 11; j++)
                {
                        printf("|_%c_|", arr3[i][j]);
                        printf(" ");
                        printf(" ");
                }
                printf("\n");
                printf("\n");
        }
	if(flag == 0)
	break;
	if(flag == 1)
                printf("\nOut of bounds or intersecting boats try again!\n\n");

	}

	while(1)
	{
	flag = 0;
	printf("Cruiser (3)\n\nChoose alignment vertical <v> or horizontal <h> >> ");
        scanf(" %c", &align);
        printf("\nCordinate Placement (tip of boat) >> ");
        yc = getchar();
        while(1)
        {
        yc = getchar();
        if(yc == 'a' || yc == 'b' || yc == 'c' || yc == 'd' || yc == 'e' || yc == 'f' || yc == 'g' || yc == 'h' || yc == 'i' || yc == 'j')
        break;
        }
        scanf(" %d", &xc);

	if(yc == 'a')
                ycord1 = 1;
        if(yc == 'b')
                ycord1 = 2;
        if(yc == 'c')
                ycord1 = 3;
        if(yc == 'd')
                ycord1 = 4;
        if(yc == 'e')
                ycord1 = 5;
        if(yc == 'f')
                ycord1 = 6;
        if(yc == 'g')
                ycord1 = 7;
        if(yc == 'h')
                ycord1 = 8;
        if(yc == 'i')
                ycord1 = 9;
        if(yc == 'j')
                ycord1 = 10;


	if(align == 'v' && ycord1 + 3 <= 11)
        {
        for(p = 0; p < 3; p++)
        {
        if(arr3[ycord1 + p][xc + 1] == 'X')
        {
                flag = 1;
                break;
        }
        }
        if(flag == 0)
        {
        for(p = 0; p < 3; p++)
        arr3[ycord1 + p][xc + 1] = 'X';
        }
        }

        if(align == 'h' && xc + 3 <= 10)
        {
        for(p = 0; p < 3; p++)
        {
        if(arr3[ycord1][xc + p + 1] == 'X')
        {
                flag = 1;
                break;
        }
        }
        if(flag == 0)
        {
        for(p = 0; p < 3; p++)
        arr3[ycord1][xc + p + 1] = 'X';
        }
        }

	else if(xc + 3 > 10 || ycord1 + 3 > 11)
        {
        flag = 1;
        }

	printf("\n");

	for(i = 0; i < 11; i++)
        {
                for(j = 0; j < 11; j++)
                {
                        printf("|_%c_|", arr3[i][j]);
                        printf(" ");
                        printf(" ");
                }
                printf("\n");
                printf("\n");
        }
	if(flag == 0)
	break;
	if(flag == 1)
                printf("\nOut of bounds or intersecting boats try again!\n\n");

	}

	while(1)
	{
	flag = 0;
	printf("Destroyer (2)\n\nChoose alignment vertical <v> or horizontal <h> >> ");
        scanf(" %c", &align);
        printf("\nCordinate Placement (tip of boat) >> ");
        yc = getchar();
        while(1)
        {
        yc = getchar();
        if(yc == 'a' || yc == 'b' || yc == 'c' || yc == 'd' || yc == 'e' || yc == 'f' || yc == 'g' || yc == 'h' || yc == 'i' || yc == 'j')
        break;
        }
        scanf(" %d", &xc);

	if(yc == 'a')
                ycord1 = 1;
        if(yc == 'b')
                ycord1 = 2;
        if(yc == 'c')
                ycord1 = 3;
        if(yc == 'd')
                ycord1 = 4;
        if(yc == 'e')
                ycord1 = 5;
        if(yc == 'f')
                ycord1 = 6;
        if(yc == 'g')
                ycord1 = 7;
        if(yc == 'h')
                ycord1 = 8;
        if(yc == 'i')
                ycord1 = 9;
        if(yc == 'j')
                ycord1 = 10;


	if(align == 'v' && ycord1 + 2 <= 11)
        {
        for(p = 0; p < 2; p++)
        {
        if(arr3[ycord1 + p][xc + 1] == 'X')
        {
                flag = 1;
                break;
        }
        }
        if(flag == 0)
        {
        for(p = 0; p < 2; p++)
        arr3[ycord1 + p][xc + 1] = 'X';
        }
        }

        if(align == 'h' && xc + 2 <= 10)
        {
        for(p = 0; p < 2; p++)
        {
        if(arr3[ycord1][xc + p + 1] == 'X')
        {
                flag = 1;
                break;
        }
        }
        if(flag == 0)
        {
        for(p = 0; p < 2; p++)
        arr3[ycord1][xc + p + 1] = 'X';
        }
        }

	else if(xc + 2 > 10 || ycord1 + 2 > 11)
        {
        flag = 1;

        }

	printf("\n");

	for(i = 0; i < 11; i++)
        {
                for(j = 0; j < 11; j++)
                {
                        printf("|_%c_|", arr3[i][j]);
                        printf(" ");
                        printf(" ");
                }
                printf("\n");
                printf("\n");
        }
	if(flag == 0)
	break;
	if(flag == 1)
                printf("\nOut of bounds or intersecting boats try again!\n\n");

	}

	printf("\nPress <enter> to continue.... \n\n");
        ipt = getchar();
        while(1)
        {
        ipt = getchar();
        if(ipt == 13);
        break;
        }
	//intializes the attack board for player 1
	for(k = 0; k < 11; k++)
        {
                for(l = 0; l < 11; l++)
                arr4[k][l] = arr[k][l];
        }
	//initializes the attack board for player2
	for(k = 0; k < 11; k++)
        {
                for(l = 0; l < 11; l++)
                arr5[k][l] = arr[k][l];
        }
	//while loop that only breaks when a player sinks the battleship or all boats
	while(1)
	{
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPLAYER 1, ATTACK!!!\n\n");
	//getchar captures enter key to continue
	printf("\nPress <enter> to continue.... \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        ipt = getchar();
        while(1)
        {
        ipt = getchar();
        if(ipt == 13);
        break;
        }
	//prints out attack board for player 1
	for(i = 0; i < 11; i++)
        {
                for(j = 0; j < 11; j++)
                {
                        printf("|_%c_|", arr4[i][j]);
                        printf(" ");
                        printf(" ");
                }
                printf("\n");
                printf("\n");
                }
	// enter attack coordinates
	printf("Enter attack coordinate >> ");
        scanf(" %c%d", &at1, &at2);
	// convertss character iput to number
	if(at1 == 'a')
                at1int = 1;
        if(at1 == 'b')
                at1int = 2;
        if(at1 == 'c')
                at1int = 3;
        if(at1 == 'd')
                at1int = 4;
        if(at1 == 'e')
                at1int = 5;
        if(at1 == 'f')
                at1int = 6;
        if(at1 == 'g')
                at1int = 7;
        if(at1 == 'h')
                at1int = 8;
        if(at1 == 'i')
                at1int = 9;
        if(at1 == 'j')
                at1int = 10;

	printf("\n");
	//checks if array has a boat and places a 1 for hit
	if(arr3[at1int][at2 + 1] == 'X')
	{
	arr4[at1int][at2 + 1] = '1';
	//displays the 1
	for(q = 0; q < 11; q++)
	{
                for(s = 0; s < 11; s++)
                {
                      printf("|_%c_|", arr4[q][s]);
                      printf(" ");
                      printf(" ");
                }
                printf("\n");
                printf("\n");
	}
	printf("HIT!!!\n");
	}
	//if there is a blank in the board, prints a 0 for miss
	if(arr3[at1int][at2 + 1] == 95)
        {
        arr4[at1int][at2 + 1] = '0';
		//displays the 0
        for(q = 0; q < 11; q++)
        {
                for(s = 0; s < 11; s++)
                {
                      printf("|_%c_|", arr4[q][s]);
                      printf(" ");
                      printf(" ");
                }
                printf("\n");
                printf("\n");
        }
	printf("MISS!!!\n");
        }
	//checking if the battleship has sunk when placed vertically
	if(ba2 == 'v')
        {
        for(w = 0; w < 4; w++)
        {
        if(arr4[byc2 + w][bxc2] == '_')
        break;
        }
        }
	//checking if the battleship has sunk when placed horizontally
        if(ba2 == 'h')
        {
        for(w = 0; w < 4; w++)
        {
        if(arr4[byc2][bxc2 + w] == '_')
	break;
        }
        }
		//if either of the counters finish the loop, tells you that you win and breaks out of larger loop
        if(w == 4)
        {
        printf("\nYou Sunk The BATTLESHIP!!! Player 1 YOU WIN!!!\n\n");
        break;
	}
	//press enter to continue using getchar
	printf("\nPress <enter> to continue.... \n\n");
	ipt = getchar();
	while(1)
	{
	ipt = getchar();
	if(ipt == 13);
	break;
	}
	//clears screen for player 2
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPlayer 2, ATTACK!!\n\n");
	//everything after this comment is the same as player 1 for player 2
	printf("\nPress <enter> to continue.... \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        ipt = getchar();
        while(1)
        {
        ipt = getchar();
        if(ipt == 13);
        break;
        }
	for(i = 0; i < 11; i++)
        {
                for(j = 0; j < 11; j++)
                {
                        printf("|_%c_|", arr5[i][j]);
                        printf(" ");
                        printf(" ");
                }
                printf("\n");
                printf("\n");
                }

	printf("Enter attack coordinate >> ");

        scanf(" %c%d", &at1, &at2);

        if(at1 == 'a')
                at1int = 1;
        if(at1 == 'b')
                at1int = 2;
        if(at1 == 'c')
                at1int = 3;
        if(at1 == 'd')
                at1int = 4;
        if(at1 == 'e')
                at1int = 5;
        if(at1 == 'f')
                at1int = 6;
        if(at1 == 'g')
                at1int = 7;
        if(at1 == 'h')
                at1int = 8;
        if(at1 == 'i')
                at1int = 9;
        if(at1 == 'j')
                at1int = 10;

	printf("\n");

        if(arr2[at1int][at2 + 1] == 'X')
        {
	arr5[at1int][at2 + 1] = '1';
        for(q = 0; q < 11; q++)
        {
                for(s = 0; s < 11; s++)
                {
                      printf("|_%c_|", arr5[q][s]);
                      printf(" ");
                      printf(" ");
                }
                printf("\n");
                printf("\n");
        }
	printf("HIT!!\n");
	}

	if(arr2[at1int][at2 + 1] == 95)
        {
        arr5[at1int][at2 + 1] = '0';
        for(q = 0; q < 11; q++)
        {
                for(s = 0; s < 11; s++)
                {
                      printf("|_%c_|", arr5[q][s]);
                      printf(" ");
                      printf(" ");
                }
                printf("\n");
                printf("\n");
        }
        printf("MISS!!\n");
        }

	if(ba == 'v')
	{
	for(g = 0; g < 4; g++)
	{
	if(arr5[byc + g][bxc] == '_')
	break;
	}
	}

	if(ba == 'h')
        {
        for(g = 0; g < 4; g++)
        {
        if(arr5[byc][bxc + g] == '_')
        break;
        }
        }

        if(g == 4)
        {
        printf("\nYou Sunk The BATTLESHIP!!! Player 2 YOU WIN!!!\n\n");
        break;
        }

        printf("\nPress <enter> to continue.... \n\n");
        ipt = getchar();
        while(1)
        {
        ipt = getchar();
        if(ipt == 13);
        break;
        }
	}
}
