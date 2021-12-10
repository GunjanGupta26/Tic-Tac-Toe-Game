#include <stdio.h>
#include <stdlib.h>

char box[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int checkWin()
{
    if (box[1] == box[2] && box[2] == box[3])
    {
        return 1;
    }
    else if (box[1] == box[2] && box[2] == box[3])
    {
        return 1;
    }
    else if (box[4] == box[5] && box[5] == box[6])
    {
        return 1;
    }
    else if (box[7] == box[8] && box[8] == box[9])
    {
        return 1;
    }
    else if (box[1] == box[4] && box[4] == box[7])
    {
        return 1;
    }
    else if (box[1] == box[2] && box[2] == box[3])
    {
        return 1;
    }
    else if (box[2] == box[5] && box[5] == box[8])
    {
        return 1;
    }
    else if (box[3] == box[6] && box[6] == box[9])
    {
        return 1;
    }
    else if (box[1] == box[5] && box[5] == box[9])
    {
        return 1;
    }
    else if (box[3] == box[5] && box[5] == box[7])
    {
        return 1;
    }
    else if (box[1] != '1' && box[2] != '2' && box[3] != '3' && box[4] != '4' && box[5] != '5' && box[6] != '6' && box[7] != '7' && box[8] != '8' && box[9] != '9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
void board()
{
    system("cls");
    printf("\n\nTic TAc Toe Game\n\n");

    printf("Player 1 (X) - Player 2 (O) \n\n\n");

    printf("      |       |       |\n");
    printf("  %c   |   %c   |   %c   |   \n", box[1], box[2], box[3]);

    printf("------|-------|-------|\n");
    printf("------|-------|-------|\n");

    printf("  %c   |   %c   |   %c   |   \n", box[4], box[5], box[6]);

    printf("------|-------|-------|\n");
    printf("------|-------|-------|\n");

    printf("  %c   |   %c   |   %c   |   \n", box[7], box[8], box[9]);

    printf("      |       |       |\n\n");
}

int main()
{
    int player = 1, choice, i;

    char mark;
    do
    {
        board();
        player = (player % 2) ? 1 : 2;

        printf("Player %i enter a number: ", player);
        scanf("%i", &choice);

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && box[1] == '1')
        {
            box[1] = mark;
        }
        else if (choice == 2 && box[2] == '2')
        {
            box[2] = mark;
        }
        else if (choice == 3 && box[3] == '3')
        {
            box[3] = mark;
        }
        else if (choice == 4 && box[4] == '4')
        {
            box[4] = mark;
        }
        else if (choice == 5 && box[5] == '5')
        {
            box[5] = mark;
        }
        else if (choice == 6 && box[6] == '6')
        {
            box[6] = mark;
        }
        else if (choice == 7 && box[7] == '7')
        {
            box[7] = mark;
        }
        else if (choice == 8 && box[8] == '8')
        {
            box[8] = mark;
        }
        else if (choice == 9 && box[9] == '9')
        {
            box[9] = mark;
        }
        else
        {
            printf("Invalid Move!! Please enter a valid move.\n");
            printf("Press any key to continue the game!");
            player--;

            getchar();
            getchar();
        }
        i = checkWin();
        player++;
    } while (i == -1);
    board();
    if (i == 1)
    {
        printf("==>\aPlayer %i Win ", --player);
    }
    else
    {
        printf("==>\aGame Draw");
    }

    getchar();
    getchar();
    return 0;
}