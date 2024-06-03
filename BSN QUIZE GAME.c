#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes
void show_record();
void reset_score();
void edit_score(float, char[]);
void display_menu();
void start_game();
void warmup_round();
void challenge_round(char []);
void display_question(int, int *);
void display_score(float, char[]);

int main() {
    char choice;
    int i;
    system("color cf");

    while (1) {
        display_menu();
        choice = toupper(getch());

        switch (choice) {
            case 'V':
                show_record();
                break;
            case 'R':
                reset_score();
                getch();
                break;
            case 'Q':
                exit(0);
            case 'S':
                start_game();
                break;
            default:
                printf("\nInvalid choice. Please enter a valid option.\n");
                getch();
        }
    }

    return 0;
}

void display_menu() {
    system("cls");
    printf("\n\n\n\n\n\t\t\t\t\t\tcreated by BSN GROUP \n\n\n");
    printf("\n\n\n\n\n\t\t\t\t\t\t   Welcome To The Game");
    printf("\n\n\t\t\t\t\t\t************************");
    printf("\n\n\t\t\t\t\t\t > Press S to Start the Game");
    printf("\n\t\t\t\t\t\t > Press V to View the Highest Score");
    printf("\n\t\t\t\t\t\t > Press R to Reset Score");
    printf("\n\t\t\t\t\t\t > Press Q to Quit");
    printf("\n\n\t\t\t\t\t\t # Enter Your Choice : ");
}

void start_game() {
    char playername[20];
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister Your Name: ");
    
	gets(playername);
    
    system("cls");
    printf("\n \n\t------------  Welcome %s to the Game ----------------", playername);
    printf("\n\n\n\t Press Y to start the game!\n");
    printf("\n\t Press any other key to return to the main menu!");
    if (toupper(getch()) == 'Y') {
        warmup_round(playername);
    }
    
}

void warmup_round(char playername[]) {
    int count = 0;
    system("cls");
    int i;
    for ( i = 1; i <= 3; i++) {
        display_question(i, &count);
    }

    if (count >= 2) {
        printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***", playername);
        printf("\n\n\n\n\t!Press any key to Start the Game!");
        getch();
        challenge_round(playername);
    } else {
        printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
        getch();
    }
}

void challenge_round(char playername[]) {
    int count = 0;
    system("cls");
    printf("\n\n------------------ CHALLENGE ROUND ------------------\n");
    int i;
    for ( i = 4; i <= 10; i++) {
        display_question(i, &count);
    }

    float score = (float)count * 100000;
    display_score(score, playername);
}

void display_question(int question_num, int *count) {
    system("cls");

    switch (question_num) {
        case 1:
            printf("\n\nWhich of the following is a Palindrome number?");
            printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
            if (toupper(getch()) == 'C') {
                printf("\n\nCorrect!!!");
                (*count)++;
            } else {
                printf("\n\nWrong!!! The correct answer is C.23232");
            }
            break;
        case 2:
            printf("\n\n Which of the following is not a valid C variable name?");
            printf("\n\n A.int number;\t\tB.float cat;\n\nC.int $count;\t\tD.int man;");
            if (toupper(getch()) == 'C') {
                printf("\n\nCorrect!!!");
                (*count)++;
            } else {
                printf("\n\nWrong!!! The correct answer is C.int $count");
            }
            break;
        case 3:
            printf("\n\nThe C-preprocessors are specified with _________ symbol.");
            printf("\n\nA.&\t\tB.@\n\nC.!\t\tD.#");
            if (toupper(getch()) == 'D') {
                printf("\n\nCorrect!!!");
                (*count)++;
            } else {
                printf("\n\nWrong!!! The correct answer is D.#");
            }
            break;
        case 4:
            printf("\n\nWho is the father of C language?");
            printf("\n\nA.Steve Jobs\t\tB.Rasmus Lerdorf\n\nC.Rasmus Lerdorf\t\tD.Dennis Ritchie");
            if (toupper(getch()) == 'D') {
                printf("\n\nCorrect!!!");
                (*count)++;
            } else {
                printf("\n\nWrong!!! The correct answer is D.Dennis Ritchie");
            }
            break;
        case 5:
            printf("\n\nWhat is #include <stdio.h>?");
            printf("\n\nA.Preprocessor directive\t\tB.Inclusion directive\n\nC.File inclusion directive\t\tD.None of the mentioned");
            if (toupper(getch()) == 'A') {
                printf("\n\nCorrect!!!");
                (*count)++;
            } else {
                printf("\n\nWrong!!! The correct answer is A.Preprocessor directive");
            }
            break;
        case 6:
            printf("\n\nWhat is the group of frogs known as?");
            printf("\n\nA.A traffic\t\tB.A toddler\n\nC.A police\t\tD.An Army");
            if (toupper(getch()) == 'D') {
                printf("\n\nCorrect!!!");
                (*count)++;
            } else {
                printf("\n\nWrong!!! The correct answer is D.An Army");
            }
            break;
        case 7:
            printf("\n\nWhat is the National Game of Nepal?");
            printf("\n\nA.Volleyball\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball");
            if (toupper(getch()) == 'A') {
                printf("\n\nCorrect!!!");
                (*count)++;
            } else {
                printf("\n\nWrong!!! The correct answer is A.Volleyball");
            }
            break;
        case 8:
            printf("\n\nStudy of Earthquake is called............,");
            printf("\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology");
            if (toupper(getch()) == 'A') {
                printf("\n\nCorrect!!!");
                (*count)++;
            } else {
                printf("\n\nWrong!!! The correct answer is A.Seismology");
            }
            break;
        case 9:
            printf("\n\nAmong the top 10 highest peaks in the world, how many lie in Nepal?");
            printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.9");
            if (toupper(getch()) == 'C') {
                printf("\n\nCorrect!!!");
                (*count)++;
            } else {
                printf("\n\nWrong!!! The correct answer is C.8");
            }
            break;
        case 10:
            printf("\n\nThe Laws of Electromagnetic Induction were given by?");
            printf("\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb");
            if (toupper(getch()) == 'A') {
                printf("\n\nCorrect!!!");
                (*count)++;
            } else {
                printf("\n\nWrong!!! The correct answer is A.Faraday");
            }
            break;
        default:
            printf("\n\nInvalid question number.\n");
    }

    getch();
}

void display_score(float score, char playername[]) {
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t congratulation %s you won $%.2f", playername, score);
    edit_score(score, playername);
     printf("\n\n\t\t\t\tThank you for playing our game");
    printf("\n\n\n\t\t\tPress any key to return to main menu!");
    getch();
}

void show_record() {
    char name[20];
    float scr;
    FILE *f;
    f = fopen("score.txt", "r");
    fscanf(f, "%s%f", name, &scr);
    printf("\n\n\t\t*************************************************************");
    printf("\n\n\t\t %s has secured the Highest Score %0.2f", name, scr);
   
    printf("\n\n\t\t*************************************************************");
    fclose(f);
    getch();
}

void reset_score() {
    FILE *f;
    f = fopen("score.txt", "w");
    fprintf(f, "%s %.2f", "No Record", 0.0);
    fclose(f);
    printf("\n\n\t\t Score reset successfully!");
}

void edit_score(float score, char plnm[20]) {
    float sc;
    char nm[20];
    FILE *f;
    f = fopen("score.txt", "r");
    fscanf(f, "%s%f", nm, &sc);
    if (score >= sc) {
        sc = score;
        fclose(f);
        f = fopen("score.txt", "w");
        fprintf(f, "%s %.2f", plnm, sc);
        fclose(f);
    }
}

