#include "raylib.h"

int main(void)
{
    InitWindow(1920, 1080, "else");
    SetTargetFPS(60);

    Texture2D costas1 = LoadTexture("assets/Costas1.png");
    Texture2D costas2 = LoadTexture("assets/Costas2.png");
    Texture2D costas3 = LoadTexture("assets/Costas3.png");

    Texture2D frente1 = LoadTexture("assets/frenteParado1.png");
    Texture2D frente2 = LoadTexture("assets/frenteParado2.png");
    Texture2D frente3 = LoadTexture("assets/frenteParado3.png");

    Texture2D direita1 = LoadTexture("assets/LadoDireito3.png");
    Texture2D direita2 = LoadTexture("assets/LadoDireito2.png");
    Texture2D direita3 = LoadTexture("assets/LadoDireito1.png");

    Texture2D esquerda1 = LoadTexture("assets/LadoEsquerdo3.png");
    Texture2D esquerda2 = LoadTexture("assets/LadoEsquerdo2.png");
    Texture2D esquerda3 = LoadTexture("assets/LadoEsquerdo1.png");

    float x = 220;
    float y = 45;
    int velocidade = 5;

    int direcao = 0;
    int frame = 0;
    float tempo = 0;
    int andando = 0;

    while (!WindowShouldClose())
    {
        andando = 0;

        if (IsKeyDown(KEY_W))
        {
            y -= velocidade;
            direcao = 1;
            andando = 1;
        }

        if (IsKeyDown(KEY_S))
        {
            y += velocidade;
            direcao = 0;
            andando = 1;
        }

        if (IsKeyDown(KEY_A))
        {
            x -= velocidade;
            direcao = 2;
            andando = 1;
        }

        if (IsKeyDown(KEY_D))
        {
            x += velocidade;
            direcao = 3;
            andando = 1;
        }

        if (andando == 1)
        {
            tempo += GetFrameTime();

            if (tempo >= 0.12)
            {
                frame++;
                tempo = 0;

                if (frame >= 3)
                {
                    frame = 0;
                }
            }
        }
        else
        {
            frame = 0;
            tempo = 0;
        }

        BeginDrawing();

        ClearBackground(BLACK);

        if (direcao == 0)
        {
            if (frame == 0) DrawTexture(frente1, x, y, WHITE);
            if (frame == 1) DrawTexture(frente2, x, y, WHITE);
            if (frame == 2) DrawTexture(frente3, x, y, WHITE);
        }

        if (direcao == 1)
        {
            if (frame == 0) DrawTexture(costas1, x, y, WHITE);
            if (frame == 1) DrawTexture(costas2, x, y, WHITE);
            if (frame == 2) DrawTexture(costas3, x, y, WHITE);
        }

        if (direcao == 2)
        {
            if (frame == 0) DrawTexture(esquerda1, x, y, WHITE);
            if (frame == 1) DrawTexture(esquerda2, x, y, WHITE);
            if (frame == 2) DrawTexture(esquerda3, x, y, WHITE);
        }

        if (direcao == 3)
        {
            if (frame == 0) DrawTexture(direita1, x, y, WHITE);
            if (frame == 1) DrawTexture(direita2, x, y, WHITE);
            if (frame == 2) DrawTexture(direita3, x, y, WHITE);
        }

        EndDrawing();
    }

    UnloadTexture(costas1);
    UnloadTexture(costas2);
    UnloadTexture(costas3);

    UnloadTexture(frente1);
    UnloadTexture(frente2);
    UnloadTexture(frente3);

    UnloadTexture(direita1);
    UnloadTexture(direita2);
    UnloadTexture(direita3);

    UnloadTexture(esquerda1);
    UnloadTexture(esquerda2);
    UnloadTexture(esquerda3);

    CloseWindow();

    return 0;
}