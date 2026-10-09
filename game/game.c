#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <raylib.h>

typedef enum
{
    CompileError = 0,
    LogicError,
    Anomaly_Image,
    none
} ErrorEnum;

typedef struct
{
    ErrorEnum error;
} ErrorTypes;

typedef struct
{
    char Error1[1000];
    char Error2[1000];
    char Error3[1000];
} TextForCompileError;

typedef struct
{
    char Error1[1000];
    char Error2[1000];
    char Error3[1000];
} TextForLogicError;

typedef struct
{
    char Error1[1000];
    char Error2[1000];
    char Error3[1000];
} TextForAnomalyError;

typedef struct
{
    char normaltext[1000];
    char normaltext2[1000];
    char normaltext3[1000];
} CorrectCode;

// Global text pools
TextForCompileError textCompile;
TextForLogicError textLogic;
TextForAnomalyError textAnomaly;
CorrectCode textNormal;

void initGameTexts()
{
    // Compile Errors (syntax errors)
    sprintf(textCompile.Error1, "int main() {\n    printf(\"Syntax Error XXX\")\n    return 0;\n}");
    sprintf(textCompile.Error2, "int main() {\n    int x = ;\n    return 0;\n}");
    sprintf(textCompile.Error3, "void test() {\n    return 100;\n}");

    // Logic Errors (runs, but logic is wrong)
    sprintf(textLogic.Error1, "int calculate() {\n    // Expected: 1 + 1 = 2\n    return 1 + 1 == -1;\n}");
    sprintf(textLogic.Error2, "int count = 0;\nfor (int i = 0; i < 10; i--) {\n    count++;\n}");
    sprintf(textLogic.Error3, "int isEven(int n) {\n    if (n %% 2 == 1) return 1;\n    return 0;\n}");

    // Anomaly Errors (horror / glitch / weird errors)
    sprintf(textAnomaly.Error1, "void observe() {\n    printf(\" mom mom look at that airplane \");\n}");
    sprintf(textAnomaly.Error2, "void scream() {\n    printf(\"Zeeeeed AHHHHHH\");\n}");
    sprintf(textAnomaly.Error3, "void secret() {\n    char *msg = \"ฌฟัหดหทหหดหดหดหดหดหดหดหดหดหดหดหดหดหดหดหดหด\";\n    // Anomaly warning: unauthorized heartbeats detected\n}");

    // Correct Code (clean code)
    sprintf(textNormal.normaltext, "int main() {\n    printf(\"Hello World!\\n\");\n    return 0;\n}");
    sprintf(textNormal.normaltext2, "int add(int a, int b) {\n    return a + b;\n}");
    sprintf(textNormal.normaltext3, "int max(int a, int b) {\n    return (a > b) ? a : b;\n}");
}

const char *getDisplayText(ErrorEnum errorKind)
{
    int pick = rand() % 3;
    switch (errorKind)
    {
    case CompileError:
        if (pick == 0)
            return textCompile.Error1;
        if (pick == 1)
            return textCompile.Error2;
        return textCompile.Error3;
    case LogicError:
        if (pick == 0)
            return textLogic.Error1;
        if (pick == 1)
            return textLogic.Error2;
        return textLogic.Error3;
    case Anomaly_Image:
        if (pick == 0)
            return textAnomaly.Error1;
        if (pick == 1)
            return textAnomaly.Error2;
        return textAnomaly.Error3;
    case none:
    default:
        if (pick == 0)
            return textNormal.normaltext;
        if (pick == 1)
            return textNormal.normaltext2;
        return textNormal.normaltext3;
    }
}

ErrorTypes RandomErrorAndErrorText(void)
{
    ErrorTypes errorType;
    // 0 = CompileError, 1 = LogicError, 2 = Anomaly_Image, 3 = none (no error)
    int randomChoice = rand() % 4;
    errorType.error = (ErrorEnum)randomChoice;
    return errorType;
}

int main()
{
    srand((unsigned int)time(NULL));
    initGameTexts();

    InitWindow(800, 600, "game67676767");

    Texture2D image67 = LoadTexture("image67/image1.png"); // imaege67 คือชื่อ Folder ที่ผมสร้าง image1.png คือชื่อไฟล์ภาพที่ใช้

    SetTargetFPS(60);

    int round = 0;
    int correct_count = 0;
    int incorrect_count = 0;

    ErrorTypes errorType;
    const char *displayText = "";

    bool gameStarted = false;
    bool answered = false;
    bool answerCorrect = false;

    while (!WindowShouldClose())
    {
        // START
        if (!gameStarted)
        {
            if (IsKeyPressed(KEY_ENTER))
            {
                gameStarted = true;
                round++;

                errorType = RandomErrorAndErrorText();
                displayText = getDisplayText(errorType.error);
            }
        }
        else if (!answered &&
                 correct_count < 10 &&
                 incorrect_count < 3)
        {
            // Y = this code has an error
            if (IsKeyPressed(KEY_Y))
            {
                answered = true;

                if (errorType.error != none)
                {
                    correct_count++;
                    answerCorrect = true;
                }
                else
                {
                    incorrect_count++;
                    answerCorrect = false;
                }
            }
            // N = this code is normal
            else if (IsKeyPressed(KEY_N))
            {
                answered = true;

                if (errorType.error == none)
                {
                    correct_count++;
                    answerCorrect = true;
                }
                else
                {
                    incorrect_count++;
                    answerCorrect = false;
                }
            }
        }
        else if (answered &&
                 correct_count < 10 &&
                 incorrect_count < 3)
        {
            if (IsKeyPressed(KEY_SPACE))
            {
                round++;

                errorType = RandomErrorAndErrorText();
                displayText = getDisplayText(errorType.error);

                answered = false;
            }
        }

        BeginDrawing();
        ClearBackground((Color){18, 20, 28, 255});

        // DrawText("67", 340, 100, 200, RAYWHITE); // x = 340, y = 100, font size = 200, color = RAYWHITE
        DrawTexture(image67, 120, 0, WHITE);                            // white คือไม่มีสี
        DrawTextureEx(image67, (Vector2){100, 100}, 0.0f, 0.5f, WHITE); // ใน vector2 คือ x,y ของตำแหน่งที่วาด, 0.0f คือมุมหมุน, 0.5f คือขนาดของภาพ, WHITE คือสี

        EndDrawing();
    }
    UnloadTexture(image67);
    CloseWindow();
    return 0;
}
