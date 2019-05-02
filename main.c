#include "raylib.h"
int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    int screenWidth = 960; // 800 960 1440
    int screenHeight = 540; // 450 540 810
    
    Color colors[8] = { DARKGRAY, GOLD, GREEN, BLUE, RED, GOLD, GREEN, GOLD };

    Rectangle colorsRecs1[8]; 
    Rectangle colorsRecs2[8]; 
    Rectangle colorsRecs3[8]; 
    Rectangle colorsRecs4[8];
    // set data 
    // block 
    int star[12] = {3, 7, 9, 12, 16, 18, 21, 25, 27, 30, 34, 36};
    int drop[4] = {5, 14, 23, 32};
    int monster[4] = {6, 15, 24, 33};
    int event[8] = {4, 8, 13, 17, 22, 25, 31, 35};  
    
    for (int i = 0; i < 8; i++) // position 1
    {
        colorsRecs1[i].x = 20 + 50*(i%1);
        colorsRecs1[i].y = 70 + 50*(i/1);
        colorsRecs1[i].width = 50;
        colorsRecs1[i].height = 50;
    }
    
    for (int i = 0; i < 8; i++) // position 2
    {
        colorsRecs2[i].x = 470 + 50*(i%1);
        colorsRecs2[i].y = 70 + 50*(i/1);
        colorsRecs2[i].width = 50;
        colorsRecs2[i].height = 50;
    }
    
    for (int i = 0; i < 8; i++) // position 3
    {
        colorsRecs3[i].x = 70 + 50*(i/1);
        colorsRecs3[i].y = 20 + 50*(i%1);
        colorsRecs3[i].width = 50;
        colorsRecs3[i].height = 50;
    }
    
    for (int i = 0; i < 8; i++) // position 4
    {
        colorsRecs4[i].x = 70 + 50*(i/1);
        colorsRecs4[i].y = 470 + 50*(i%1);
        colorsRecs4[i].width = 50;
        colorsRecs4[i].height = 50;
    }
    
    
    InitWindow(screenWidth, screenHeight, "100% GetPro : Version 1.0.1");
    // 1.0.0 4/2/2019
    // 1.0.1 5/2/2019
    
    InitAudioDevice();             

    Music BG = LoadMusicStream("sound/001 - bgs_screen.ogg"); // set sound
    
    Sound seclection = LoadSound("sound/002 - selection.ogg");
    
    PlayMusicStream(BG); // loop play
    
    bool start = false;

    SetTargetFPS(60
    );
    
    Image image1 = LoadImage("image/player_one.png");
    Image image2 = LoadImage("image/player_two.png");
    Image image3 = LoadImage("image/player_three.png");
    Image image4 = LoadImage("image/player_four.png");
    Image image5 = LoadImage("image/player_one_down.png");
    Image image6 = LoadImage("image/player_two_down.png");
    Image image7 = LoadImage("image/player_three_down.png");
    Image image8 = LoadImage("image/player_four_down.png");
    Image image9 = LoadImage("image/monster_one.png");
    Image image10 = LoadImage("image/monster_two.png");
    Image image11 = LoadImage("image/monster_three.png");
    Image image12 = LoadImage("image/monster_four.png");
    Image image13 = LoadImage("image/player_one.png");
    Image image14 = LoadImage("image/player_two.png");
    Image image15 = LoadImage("image/player_three.png");
    Image image16 = LoadImage("image/player_four.png");
    
    Image dice1 = LoadImage("image/dice1.png");
    Image dice2 = LoadImage("image/dice2.png");
    Image dice3 = LoadImage("image/dice3.png");
    Image dice4 = LoadImage("image/dice4.png");
    Image dice5 = LoadImage("image/dice5.png");
    Image dice6 = LoadImage("image/dice6.png");
    
    ImageResize(&image1, 154, 141);
    ImageResize(&image2, 101, 132);
    ImageResize(&image3, 112, 134);
    ImageResize(&image4, 92, 133);
    ImageResize(&image5, 144,108);
    ImageResize(&image6, 135,88);
    ImageResize(&image7, 136,100);
    ImageResize(&image8, 131,80);
    ImageResize(&image9, 104,111);
    ImageResize(&image10, 123,143);
    ImageResize(&image11, 120,146);
    ImageResize(&image12, 150,126);
    ImageResize(&image13, 289,265);
    ImageResize(&image14, 190,249);
    ImageResize(&image15, 211,252);
    ImageResize(&image16, 170, 250);
    
    ImageResize(&dice1, 80,80);
    ImageResize(&dice2, 80,80);
    ImageResize(&dice3, 80,80);
    ImageResize(&dice4, 80,80);
    ImageResize(&dice5, 80,80);
    ImageResize(&dice6, 80,80);
    
    Texture2D texture1 = LoadTextureFromImage(image1);    
    Texture2D texture2 = LoadTextureFromImage(image2);    
    Texture2D texture3 = LoadTextureFromImage(image3);    
    Texture2D texture4 = LoadTextureFromImage(image4);
    Texture2D texture5 = LoadTextureFromImage(image5);    
    Texture2D texture6 = LoadTextureFromImage(image6);    
    Texture2D texture7 = LoadTextureFromImage(image7);    
    Texture2D texture8 = LoadTextureFromImage(image8);
    Texture2D texture9 = LoadTextureFromImage(image9);    
    Texture2D texture10 = LoadTextureFromImage(image10);
    Texture2D texture11 = LoadTextureFromImage(image11);    
    Texture2D texture12 = LoadTextureFromImage(image12);
    Texture2D texture13 = LoadTextureFromImage(image13);    
    Texture2D texture14 = LoadTextureFromImage(image14);    
    Texture2D texture15 = LoadTextureFromImage(image15);    
    Texture2D texture16 = LoadTextureFromImage(image16);

    Texture2D texture_dice1 = LoadTextureFromImage(dice1);    
    Texture2D texture_dice2 = LoadTextureFromImage(dice2);    
    Texture2D texture_dice3 = LoadTextureFromImage(dice3);    
    Texture2D texture_dice4 = LoadTextureFromImage(dice4);
    Texture2D texture_dice5 = LoadTextureFromImage(dice5);    
    Texture2D texture_dice6 = LoadTextureFromImage(dice6);      

    UnloadImage(image1);
    UnloadImage(image2);
    UnloadImage(image3);
    UnloadImage(image4);
    UnloadImage(image5);
    UnloadImage(image6);
    UnloadImage(image7);
    UnloadImage(image8);
    UnloadImage(image9);
    UnloadImage(image10);
    UnloadImage(image11);
    UnloadImage(image12);
    UnloadImage(image13);
    UnloadImage(image14);
    UnloadImage(image15);
    UnloadImage(image16);
    
    UnloadImage(dice1);
    UnloadImage(dice2);
    UnloadImage(dice3);
    UnloadImage(dice4);
    UnloadImage(dice5);
    UnloadImage(dice6); 
    

    
    int player_one_position = 1;
    int player_two_position = 10;
    int player_three_position = 19;
    int player_four_position = 28;
    
    int player_one_hp = 5;
    int player_two_hp = 5;
    int player_three_hp = 5;
    int player_four_hp = 5;
    
    int player_one_star = 0;
    int player_two_star = 0;
    int player_three_star = 0;
    int player_four_star = 0;
    
    int player_one_win = 0;
    int player_two_win = 0;
    int player_three_win = 0;
    int player_four_win = 0;
    
     
    int player_one_winner = 0;
    int player_two_winner = 0;
    int player_three_winner = 0;
    int player_four_winner = 0;
    
    int player_one_down = 5;
    int player_two_down = 5;
    int player_three_down = 5;
    int player_four_down = 5;
    
    int player_one_dice = 0;
    int player_two_dice = 0;
    int player_three_dice = 0;
    int player_four_dice = 0;
    
    int finish1 = 0;
    int finish2 = 0;
    int finish3 = 0;
    int finish4 = 0;
    
    int player_one_event = 0;
    int player_two_event = 0;
    int player_three_event = 0;
    int player_four_event = 0;
    
    int monster_spawn = 0;    
    int monster_hp = 5;    
    int monster_star = 10;
    
    int turn = 0;    
    int end = 0;    
    int endgame = 1;    
    int play_turn = 0;
    
    int randomdice = GetRandomValue(1,6);
    int randomstar = GetRandomValue(1,5); 
    int randomevent = GetRandomValue(1, 4);    
    int randomplayer = GetRandomValue(1, 4);    
    int randommonster = GetRandomValue(1, 4);    
    int randomatk = GetRandomValue(1, 5);    
    int randomdef = GetRandomValue(1, 5);
     
    
    
    
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        ClearBackground(RAYWHITE);
        UpdateMusicStream(BG);
        
        if (!start){ 
            BeginDrawing();
                if (player_one_winner == 1){
                    DrawTexture(texture13, 330, 70, WHITE);
                    DrawText("Player One Win!", 270, 400, 50, MAROON);
                    if (IsMouseButtonPressed(MOUSE_RIGHT_BUTTON)){player_one_winner = 0; end = 2;}
                        
                }
                else if (player_two_winner == 1){
                    DrawTexture(texture14, 370, 80, WHITE);
                    DrawText("Player Two Win!", 270, 400, 50, MAROON);
                    if (IsMouseButtonPressed(MOUSE_RIGHT_BUTTON)){player_two_winner = 0; end = 2;}
                }
                else if (player_three_winner == 1){
                    DrawTexture(texture15, 360, 80, WHITE);
                    DrawText("Player Three Win!", 260, 400, 50, MAROON);
                    if (IsMouseButtonPressed(MOUSE_RIGHT_BUTTON)){player_three_winner = 0; end = 2;}
                }
                else if (player_four_winner == 1){
                    DrawTexture(texture16, 380, 80, WHITE);
                    DrawText("Player Four Win!", 265, 400, 50, MAROON);
                    if (IsMouseButtonPressed(MOUSE_RIGHT_BUTTON)){player_four_winner = 0; end = 2;}
                }
                else if (end == 0){
                    DrawText("100% GetPro!", 310, 200, 50, MAROON);
                    DrawText("Any click to start", 330, 300, 30, MAROON);
                    if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) || IsMouseButtonPressed(MOUSE_MIDDLE_BUTTON) || IsMouseButtonPressed(MOUSE_RIGHT_BUTTON)) 
                    {start = !start; PlaySound(seclection);}
                }
                else if (end == 2){
                    DrawText("100% GetPro!", 310, 200, 50, MAROON);
                    DrawText("Any click to start", 330, 300, 30, MAROON);
                    if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) || IsMouseButtonPressed(MOUSE_MIDDLE_BUTTON) || IsMouseButtonPressed(MOUSE_RIGHT_BUTTON)) 
                    {start = !start; PlaySound(seclection);}
                        player_one_position = 1;
                        player_two_position = 10;
                        player_three_position = 19;
                        player_four_position = 28;
    
                        player_one_hp = 5;
                        player_two_hp = 5;
                        player_three_hp = 5;
                        player_four_hp = 5;
    
                        player_one_star = 0;
                        player_two_star = 0;
                        player_three_star = 0;
                        player_four_star = 0;
    
                        player_one_win = 0;
                        player_two_win = 0;
                        player_three_win = 0;
                        player_four_win = 0;
    
     
                        player_one_winner = 0;
                        player_two_winner = 0;
                        player_three_winner = 0;
                        player_four_winner = 0;
    
                        player_one_down = 5;
                        player_two_down = 5;
                        player_three_down = 5;
                        player_four_down = 5;
    
                        player_one_dice = 0;
                        player_two_dice = 0;
                        player_three_dice = 0;
                        player_four_dice = 0;
    
                        finish1 = 0;
                        finish2 = 0;
                        finish3 = 0;
                        finish4 = 0;
    
                        player_one_event = 0;
                        player_two_event = 0;
                        player_three_event = 0;
                        player_four_event = 0;
    
                        monster_spawn = 0;    
                        monster_hp = 5;    
                        monster_star = 10;
    
                        turn = 0;    
                        end = 0;    
                        endgame = 1;    
                        play_turn = 0;
                }
                       
                EndDrawing();
                
            }

        if (start){
            // darw board
            BeginDrawing();
            for (int i = 0; i < 8; i++){
                DrawRectangleRec(colorsRecs1[i], colors[i]);
            }
            for (int i = 0; i < 8; i++){
                DrawRectangleRec(colorsRecs2[i], colors[7-i]);
            }
            for (int i = 0; i < 8; i++){
                DrawRectangleRec(colorsRecs3[i], colors[7-i]);
            }
            for (int i = 0; i < 8; i++){
                DrawRectangleRec(colorsRecs4[i], colors[i]);
            }
            // player spawn
            DrawRectangle(70, 70, 50, 50, PINK);
            DrawRectangle(420, 70, 50, 50, PINK);
            DrawRectangle(70, 420, 50, 50, PINK);
            DrawRectangle(420, 420, 50, 50, PINK);
            
            DrawText("1", 90, 82, 30, MAROON);
            DrawText("2", 37, 82, 30, BLACK);
            DrawText("3", 37, 132, 30, BLACK);
            DrawText("4", 37, 182, 30, BLACK);
            DrawText("5", 37, 232, 30, BLACK);
            DrawText("6", 37, 282, 30, BLACK);
            DrawText("7", 37, 332, 30, BLACK);
            DrawText("8", 37, 382, 30, BLACK);
            DrawText("9", 37, 432, 30, BLACK);
            
            DrawText("10", 82, 432, 30, MAROON);
            DrawText("11", 87, 482, 30, BLACK);
            DrawText("12", 132, 482, 30, BLACK);
            DrawText("13", 182, 482, 30, BLACK);
            DrawText("14", 232, 482, 30, BLACK);
            DrawText("15", 282, 482, 30, BLACK);
            DrawText("16", 332, 482, 30, BLACK);
            DrawText("17", 382, 482, 30, BLACK);
            DrawText("18", 432, 482, 30, BLACK);
            
            DrawText("19", 432, 432, 30, MAROON);
            DrawText("20", 479, 432, 30, BLACK);
            DrawText("21", 485, 382, 30, BLACK);
            DrawText("22", 479, 332, 30, BLACK);
            DrawText("23", 479, 282, 30, BLACK);
            DrawText("24", 479, 232, 30, BLACK);
            DrawText("25", 479, 182, 30, BLACK);
            DrawText("26", 479, 132, 30, BLACK);
            DrawText("27", 479, 82, 30, BLACK);
            
            DrawText("28", 428, 82, 30, MAROON);          
            DrawText("29", 428 , 32, 30, BLACK);
            DrawText("30", 378, 32, 30, BLACK);
            DrawText("31", 332, 32, 30, BLACK);
            DrawText("32", 278, 32, 30, BLACK);
            DrawText("33", 228, 32, 30, BLACK);
            DrawText("34", 178, 32, 30, BLACK);
            DrawText("35", 128, 32, 30, BLACK);
            DrawText("36", 78, 32, 30, BLACK);
            
            
            // player stand , down
            if(player_one_hp > 0){DrawTexture(texture1, 540, 30, WHITE);}
            else{player_one_hp <= 0; DrawTexture(texture5, 550,50, WHITE); player_one_hp = 0; player_one_star = 0; }
            
            if(player_two_hp > 0){DrawTexture(texture2, 560, 150, WHITE);}
            else{player_two_hp <= 0; DrawTexture(texture6, 550, 190, WHITE); player_two_hp = 0; player_two_star = 0; }
            
            if(player_three_hp > 0){DrawTexture(texture3, 560, 260, WHITE);}
            else{player_three_hp <= 0; DrawTexture(texture7, 550, 310, WHITE); player_three_hp = 0; player_three_star = 0; }
            
            if(player_four_hp > 0){DrawTexture(texture4, 570, 370, WHITE);}
            else{player_four_hp <= 0; DrawTexture(texture8, 550, 430, WHITE); player_four_hp = 0; player_four_star = 0; }
            
            // star drop
            if (player_one_star < 0) {player_one_star = 0;}
            if (player_two_star < 0) {player_two_star = 0;}
            if (player_three_star < 0) {player_three_star = 0;}
            if (player_four_star < 0) {player_four_star = 0;}
            
            // spawn monster
            if (monster_spawn == 0){randommonster = GetRandomValue(1, 4);}
            if (randommonster == 1){ DrawTexture(texture9, 130, 300, WHITE); monster_spawn = 1;}
            else if (randommonster == 2){ DrawTexture(texture10, 130, 300, WHITE); monster_spawn = 1;}
            else if (randommonster == 3){ DrawTexture(texture11, 130, 300, WHITE); monster_spawn = 1;}
            else if (randommonster == 4){ DrawTexture(texture12, 130, 300, WHITE); monster_spawn = 1;}
            
            if (monster_hp <= 0){
                
                if (play_turn == 1){player_one_win += 1; player_one_star +=  monster_star;}
                else if (play_turn == 2){player_two_win += 1; player_two_star +=  monster_star;}
                else if (play_turn == 3){player_three_win += 1; player_three_star +=  monster_star;}
                else if (play_turn == 4){player_four_win += 1; player_four_star +=  monster_star;}
                
                monster_hp = 5; 
                monster_spawn = 0;
                monster_star = 50;
            }
            DrawText(FormatText("HP : %02i", monster_hp), 300, 320, 25, BLACK);
            DrawText(FormatText("Star : %03i", monster_star), 300, 370, 25, BLACK);
            
            // text
            // player
            DrawText(FormatText("Player I HP : %02i", player_one_hp), 690, 30, 25, BLACK);
            DrawText(FormatText("Player II HP : %02i", player_two_hp), 690, 155, 25, BLACK);
            DrawText(FormatText("Player III HP : %02i", player_three_hp), 690, 275, 25, BLACK);
            DrawText(FormatText("Player IV HP : %02i", player_four_hp), 690, 395, 25, BLACK);
            
            // star
            DrawText(FormatText("Star : %03i", player_one_star), 700, 70, 20, BLACK);
            DrawText(FormatText("Star : %03i", player_two_star), 700, 200, 20, BLACK);
            DrawText(FormatText("Star : %03i", player_three_star), 700, 320, 20, BLACK);
            DrawText(FormatText("Star : %03i", player_four_star), 700, 440, 20, BLACK);
            
            // win
            DrawText(FormatText("Win : %03i", player_one_win), 830, 70, 20, BLACK);
            DrawText(FormatText("Win : %03i", player_two_win), 830, 200, 20, BLACK);
            DrawText(FormatText("Win : %03i", player_three_win), 830, 320, 20, BLACK);
            DrawText(FormatText("Win : %03i", player_four_win), 830, 440, 20, BLACK);
            
            // position
            DrawText(FormatText("Position : %02i", player_one_position), 700, 100, 20, BLACK);
            DrawText(FormatText("Position : %02i", player_two_position), 700, 230, 20, BLACK);
            DrawText(FormatText("Position : %02i", player_three_position), 700, 350, 20, BLACK);
            DrawText(FormatText("Position : %02i", player_four_position), 700, 470, 20, BLACK);
            
            // Game Turn ++ after player four finished
            DrawText(FormatText("Turn : %02i", turn), 120, 140, 35, BLACK);
            DrawText(FormatText("Player : %02i", play_turn), 120, 185, 25, BLACK);
            
            
            
            switch(randomdice){               
                case 1: DrawTexture(texture_dice1, 300, 160, WHITE); break;
                case 2: DrawTexture(texture_dice2, 300, 160, WHITE); break;
                case 3: DrawTexture(texture_dice3, 300, 160, WHITE); break;
                case 4: DrawTexture(texture_dice4, 300, 160, WHITE); break;
                case 5: DrawTexture(texture_dice5, 300, 160, WHITE); break;
                case 6: DrawTexture(texture_dice6, 300, 160, WHITE); break;
                    default: DrawTexture(texture_dice1, 300, 160, WHITE);
                }                    
            
            EndDrawing();
             // loop game
            
            
            if (endgame){
                
               
                if (player_one_star >= 200 || player_one_win >= 5){start = !start;  player_one_winner = 1; end = 1;}
                else if (player_two_star >= 200 || player_two_win >= 5){ start = !start; player_two_winner = 1; end = 1;}
                else if (player_three_star >= 200 || player_three_win >= 5){ start = !start; player_three_winner = 1; end = 1;}
                else if (player_four_star >= 200 || player_four_win >= 5){ start = !start; player_four_winner = 1; end = 1;}
               
                if (play_turn == 0){
                    turn++;
                    play_turn = 1;
                    player_one_dice = 0;
                    player_two_dice = 0;
                    player_three_dice = 0;
                    player_four_dice = 0;
                    finish1 = 0;
                    finish2 = 0;
                    finish3 = 0;
                    finish4 = 0;
                    
                }
                
                // draw the dice down 
                if (play_turn == 1 && player_one_dice == 0 && player_one_hp <= 0){
                    DrawText("Right click!! ", 120, 225, 25, BLACK);
                    DrawText(FormatText("Get Point more: %02i", player_one_down), 120, 260, 20, BLACK);
                    player_one_event = 0;
                    
                    if (IsMouseButtonPressed(MOUSE_RIGHT_BUTTON)){
                        player_four_event = 0;
                        randomdice = GetRandomValue(1,6);
                            if (randomdice >= player_one_down){player_one_hp = 5; play_turn = 2; player_one_down = 5;} 
                            else{play_turn = 2; player_one_down--;}
                    }
                    
                }
                
                else if (play_turn == 2 && player_two_dice == 0 && player_two_hp <= 0){
                    
                    DrawText("Right click!! ", 120, 225, 25, BLACK);
                    DrawText(FormatText("Get Point more: %02i", player_two_down), 120, 260, 20, BLACK);
                    player_two_event = 0;
                    
                    if (IsMouseButtonPressed(MOUSE_RIGHT_BUTTON)){
                        player_one_event = 0;
                        randomdice = GetRandomValue(1,6);
                        if (randomdice >= player_two_down){player_two_hp = 5; play_turn = 3; player_two_down = 5;} 
                        else{play_turn = 3; player_two_down--;}
                    }
                    
                }
                
                else if (play_turn == 3 && player_three_dice == 0 && player_three_hp <= 0 ){
                    
                    DrawText("Right click!! ", 120, 225, 25, BLACK);
                    DrawText(FormatText("Get Point more: %02i", player_three_down), 120, 260, 20, BLACK);
                    player_three_event = 0;
                    
                    if (IsMouseButtonPressed(MOUSE_RIGHT_BUTTON)){
                        player_two_event = 0;
                        randomdice = GetRandomValue(1,6);
                        if (randomdice >= player_three_down){player_three_hp = 5; play_turn = 4; player_three_down = 5;} 
                        else{play_turn = 4; player_three_down--;}
                    }
                    
                }
                
                else if (play_turn == 4 && player_four_dice == 0 && player_four_hp <= 0 ){
                    
                    DrawText("Right click!! ", 120, 225, 25, BLACK);
                    DrawText(FormatText("Get Point more: %02i", player_four_down), 120, 260, 20, BLACK);
                    player_four_event = 0;
                    
                    if (IsMouseButtonPressed(MOUSE_RIGHT_BUTTON)){
                        player_three_event = 0;
                         randomdice = GetRandomValue(1,6);
                        if (randomdice >= player_four_down){player_four_hp = 5; play_turn = 0; player_four_down = 5;} 
                        else{play_turn = 0; player_four_down--;}
                    }
                    
                }
                
                // draw the dice stand
                
                
                if (play_turn == 1 && player_one_dice == 0 && player_one_hp > 0 ){
                    
                    // check event to draw
                    if (player_four_event == 1){
                       DrawText("Player 04 :  Bouns Star!", 120, 250, 20, BLACK); 
                    }
                    if (player_four_event == 2){
                       DrawText("Player 04 :  Drop Star!", 120, 250, 20, BLACK); 
                    }
                    if (player_four_event == 3){
                       DrawText("Player 04 :  Random Event!", 120, 250, 20, BLACK); 
                    }
                    if (player_four_event == 4){
                       DrawText("Player 04 :  Attck Monster!", 120, 250, 20, BLACK); 
                    }
                    
                    
                    
                    if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
                        randomdice = GetRandomValue(1,6); 
                        player_one_dice = 1; 
                        player_one_position += randomdice;
                        play_turn = 2;
                        player_four_event = 0;
                        if (player_one_position > 36){player_one_position -= 36;}
                    }
                     
                }
                else if (play_turn == 2 && player_two_dice == 0 && player_two_hp > 0 ){
                    
                    // check event to draw
                    if (player_one_event == 1){
                       DrawText("Player 01 :  Bouns Star!", 120, 250, 20, BLACK); 
                    }
                    if (player_one_event == 2){
                       DrawText("Player 01 :  Drop Star!", 120, 250, 20, BLACK); 
                    }
                    if (player_one_event == 3){
                       DrawText("Player 01 :  Random Event!", 120, 250, 20, BLACK); 
                    }
                    if (player_one_event == 4){
                       DrawText("Player 01 :  Attck Monster!", 120, 250, 20, BLACK); 
                    }
                    
                    if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
                        randomdice = GetRandomValue(1,6); 
                        player_two_dice = 1; 
                        player_two_position += randomdice;
                        play_turn = 3;
                        player_one_event = 0;
                    if (player_two_position > 36){player_two_position -= 36;}
                    }
                    
                }
                else if (play_turn == 3 && player_three_dice == 0 && player_three_hp > 0){
                    
                    // check event to draw
                    if (player_two_event == 1){
                       DrawText("Player 02 :  Bouns Star!", 120, 250, 20, BLACK); 
                    }
                    if (player_two_event == 2){
                       DrawText("Player 02 :  Drop Star!", 120, 250, 20, BLACK); 
                    }
                    if (player_two_event == 3){
                       DrawText("Player 02:  Random Event!", 120, 250, 20, BLACK); 
                    }
                    if (player_two_event == 4){
                       DrawText("Player 02 :  Attck Monster!", 120, 250, 20, BLACK); 
                    }
                    
                    if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
                        randomdice = GetRandomValue(1,6); 
                        player_three_dice = 1; 
                        player_three_position += randomdice;
                        play_turn = 4;
                        player_two_event = 0;
                    if (player_three_position > 36){player_three_position -= 36;}
                    }
                    
                }
                else if (play_turn == 4 && player_four_dice == 0 && player_four_hp > 0 ){
                    
                    
                    // check event to draw
                    if (player_three_event == 1){
                       DrawText("Player 03 :  Bouns Star!", 120, 250, 20, BLACK); 
                    }
                    if (player_three_event == 2){
                       DrawText("Player 03 :  Drop Star!", 120, 250, 20, BLACK); 
                    }
                    if (player_three_event == 3){
                       DrawText("Player 03:  Random Event!", 120, 250, 20, BLACK); 
                    }
                    if (player_three_event == 4){
                       DrawText("Player 03 :  Attck Monster!", 120, 250, 20, BLACK); 
                    }
                    
                    
                    if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
                        randomdice = GetRandomValue(1,6); 
                        player_four_dice = 1; 
                        player_four_position += randomdice;
                        play_turn = 0;
                        player_three_event = 0;
                    if (player_four_position > 36){player_four_position -= 36;}
                    }
                    
                }
                
                
                // block event 
                if (play_turn == 1  && finish1 == 0){
                    //1.1 star [bonus]
                    for (int i = 0; i < 12; i++){
                        if (player_one_position == star[i]){
                            randomstar = GetRandomValue(1,5);
                            player_one_star += (randomstar*4);
                            player_one_event = 1;
                            finish1 = 1;
                        }
                    }
                    //1.2 star [drop]
                    for (int i = 0; i < 4; i++){
                        if (player_one_position == drop[i]){
                            randomstar = GetRandomValue(1,5);
                            player_one_star -= (randomstar*2);
                            player_one_event = 2;
                            //if (player_one_star < 0) {player_one_star = 0;}
                            finish1 = 1;
                        }
                    }
                    //1.3 event
                    for (int i = 0; i < 8; i++){
                        if (player_one_position == event[i]){
                           player_one_event = 3;
                           randomevent = GetRandomValue(1, 4);
                            if (randomevent == 1 && player_one_hp <= 3){ // regen 2 hp if hp <= 3 
                                player_one_hp += 2;
                            }
                            else if (randomevent == 1){ //  all play take 1 damage [subtract from hp]
                                player_one_hp -= 1;
                                player_two_hp -= 1;
                                player_three_hp -= 1;
                                player_four_hp -= 1;
                            }
                            else if (randomevent == 3){ // random  player take 2 damage
                                randomplayer = GetRandomValue(1, 4);
                                if (randomplayer == 1){ player_one_hp -= 1; }
                                else if (randomplayer == 2){ player_two_hp -= 1; }
                                else if (randomplayer == 3){ player_three_hp -= 1;}
                                else if (randomplayer == 4){player_four_hp -= 1;} 
                                
                            }
                            else if (randomevent == 4){ // 
                                randomstar = GetRandomValue(1,5);
                                player_one_star += (randomstar*3);
                            }
                        finish1 = 1;   
                        }
                    }
                    //1.4 PVE
                    for (int i = 0; i < 4; i++){
                        if (player_one_position == monster[i]){
                            player_one_event = 4;
                            randomatk = GetRandomValue(1, 5);
                            randomdef = GetRandomValue(1, 5);
                            
                            if (randomdef >= randomatk){
                                monster_hp -= 1;
                            }
                            else{ monster_hp -= (randomatk - randomdef); }
                            
                            if (monster_hp > 0){
                                randomatk = GetRandomValue(1, 5);
                                randomdef = GetRandomValue(1, 5);
                            
                                if (randomdef >= randomatk){player_one_hp -= 1;}
                                else{ player_one_hp -= (randomatk - randomdef); }
                            }
                            finish1 = 1;
                        }
                    }

                }/* end player one */
                
                else if (play_turn == 2 && finish2 == 0){
                    //2.1 star [bonus]
                    for (int i = 0; i < 12; i++){
                        if (player_two_position == star[i]){
                            player_two_event = 1;
                            randomstar = GetRandomValue(1,5);
                            player_two_star += (randomstar*4);
                            finish2 = 1;
                        }
                    }
                    //2.2 star [drop]
                    for (int i = 0; i < 4; i++){
                        if (player_two_position == drop[i]){
                            player_two_event = 2;
                            randomstar = GetRandomValue(1,5);
                            player_two_star -= (randomstar*2);
                            //if (player_two_star < 0) {player_two_star = 0;}
                            finish2 = 1;
                        }
                    }
                    //2.3 event
                    for (int i = 0; i < 8; i++){
                        if (player_two_position == event[i]){
                           player_two_event = 3;
                           randomevent = GetRandomValue(1, 4);
                            if (randomevent == 1 && player_two_hp <= 3){ // regen 2 hp if hp <= 3 
                                player_two_hp += 2;
                            }
                            else if (randomevent == 1){ //  all play take 1 damage [subtract from hp]
                                player_one_hp -= 1;
                                player_two_hp -= 1;
                                player_three_hp -= 1;
                                player_four_hp -= 1;
                            }
                            else if (randomevent == 3){ // random  player take 2 damage
                                randomplayer = GetRandomValue(1, 4);
                                if (randomplayer == 1){ player_one_hp -= 1; }
                                else if (randomplayer == 2){ player_two_hp -= 1; }
                                else if (randomplayer == 3){ player_three_hp -= 1;}
                                else if (randomplayer == 4){player_four_hp -= 1;} 
                                
                            }
                            else if (randomevent == 4){ // 
                                randomstar = GetRandomValue(1,5);
                                player_two_star += (randomstar*3);
                            }
                        finish2 = 1;   
                        }
                    }
                    //2.4 PVE
                    for (int i = 0; i < 4; i++){
                        if (player_two_position == monster[i]){
                            player_two_event = 4;
                            randomatk = GetRandomValue(1, 5);
                            randomdef = GetRandomValue(1, 5);
                            
                            if (randomdef >= randomatk){
                                monster_hp -= 1;
                            }
                            else{ monster_hp -= (randomatk - randomdef); }
                            
                            if (monster_hp > 0){
                                randomatk = GetRandomValue(1, 5);
                                randomdef = GetRandomValue(1, 5);
                            
                                if (randomdef >= randomatk){player_two_hp -= 1;}
                                else{ player_two_hp -= (randomatk - randomdef); }
                            }
                            finish2 = 1;
                        }
                    }
                    
                    
                }/* end player two */
                
                else if (play_turn == 3 && finish3 == 0){
                    //3.1 star [bonus]
                    for (int i = 0; i < 12; i++){
                        if (player_three_position == star[i]){
                            player_three_event = 1;
                            randomstar = GetRandomValue(1,5);
                            player_three_star += (randomstar*4);
                            finish3 = 1;
                            
                        }
                    }
                    //3.2 star [drop]
                    for (int i = 0; i < 4; i++){
                        if (player_three_position == drop[i]){
                            player_three_event = 2;
                            randomstar = GetRandomValue(1,5);
                            player_three_star -= (randomstar*2);
                            //if (player_three_star < 0) {player_three_star = 0;}
                            finish3 = 1;
                        }
                    }
                    //3.3 event
                    for (int i = 0; i < 8; i++){
                        if (player_three_position == event[i]){
                            player_three_event = 3;
                           randomevent = GetRandomValue(1, 4);
                            if (randomevent == 1 && player_three_hp <= 3){ // regen 2 hp if hp <= 3 
                                player_three_hp += 2;
                            }
                            else if (randomevent == 1){ //  all play take 1 damage [subtract from hp]
                                player_one_hp -= 1;
                                player_two_hp -= 1;
                                player_three_hp -= 1;
                                player_four_hp -= 1;
                            }
                            else if (randomevent == 3){ // random  player take 2 damage
                                randomplayer = GetRandomValue(1, 4);
                                if (randomplayer == 1){ player_one_hp -= 1; }
                                else if (randomplayer == 2){ player_two_hp -= 1; }
                                else if (randomplayer == 3){ player_three_hp -= 1;}
                                else if (randomplayer == 4){player_four_hp -= 1;} 
                                
                            }
                            else if (randomevent == 4){ // 
                                randomstar = GetRandomValue(1,5);
                                player_three_star += (randomstar*3);
                            }
                        finish3 = 1;   
                        }
                    }
                    //3.4  PVE
                    for (int i = 0; i < 4; i++){
                        if (player_three_position == monster[i]){
                            player_three_event = 4;
                            randomatk = GetRandomValue(1, 5);
                            randomdef = GetRandomValue(1, 5);
                            
                            if (randomdef >= randomatk){
                                monster_hp -= 1;
                            }
                            else{ monster_hp -= (randomatk - randomdef); }
                            
                            
                            if (monster_hp > 0){
                                randomatk = GetRandomValue(1, 5);
                                randomdef = GetRandomValue(1, 5);
                            
                                if (randomdef >= randomatk){player_three_hp -= 1;}
                                else{ player_three_hp -= (randomatk - randomdef); }
                            }
                            finish3 = 1;
                        }
                    }
                    
                    
                }/* end player three */
                
                else if (play_turn == 4 && finish4 == 0){
                    //4.1 star [bonus]
                    for (int i = 0; i < 12; i++){
                        if (player_four_position == star[i]){
                            player_four_event = 1;
                            randomstar = GetRandomValue(1,5);
                            player_four_star += (randomstar*4);
                            finish4 = 1;
                           
                        }
                    }
                    //4.2 star [drop]
                    for (int i = 0; i < 4; i++){
                        if (player_four_position == drop[i]){
                            player_four_event = 2;
                            randomstar = GetRandomValue(1,5);
                            player_four_star -= (randomstar*2);
                            //if (player_four_star < 0) {player_four_star = 0;}
                            finish4 = 1;
                        }
                    }
                    //4.3 event
                    for (int i = 0; i < 8; i++){
                        if (player_four_position == event[i]){
                            player_four_event = 3;
                            randomevent = GetRandomValue(1, 4);
                            if (randomevent == 1 && player_four_hp <= 3){ // regen 2 hp if hp <= 3 
                                player_four_hp += 2;
                            }
                            else if (randomevent == 1){ //  all play take 1 damage [subtract from hp]
                                player_one_hp -= 1;
                                player_two_hp -= 1;
                                player_three_hp -= 1;
                                player_four_hp -= 1;
                            }
                            else if (randomevent == 3){ // random  player take 2 damage
                                randomplayer = GetRandomValue(1, 4);
                                if (randomplayer == 1){ player_one_hp -= 1; }
                                else if (randomplayer == 2){ player_two_hp -= 1; }
                                else if (randomplayer == 3){ player_three_hp -= 1;}
                                else if (randomplayer == 4){player_four_hp -= 1;} 
                                
                            }
                            else if (randomevent == 4){ // 
                                randomstar = GetRandomValue(1,5);
                                player_four_star += (randomstar*3);
                            }
                        finish4 = 1;   
                        }
                    }
                    //4.4  PVE
                    for (int i = 0; i < 4; i++){
                        if (player_four_position == monster[i]){
                            player_four_event = 4;
                            randomatk = GetRandomValue(1, 5);
                            randomdef = GetRandomValue(1, 5);
                            
                            if (randomdef >= randomatk){
                                monster_hp -= 1;
                            }
                            else{ monster_hp -= (randomatk - randomdef); }
                              
                            if (monster_hp > 0){
                                randomatk = GetRandomValue(1, 5);
                                randomdef = GetRandomValue(1, 5);
                            
                                if (randomdef >= randomatk){player_two_hp -= 1;}
                                else{ player_two_hp -= (randomatk - randomdef); }
                            }
                            finish4 = 1;
                        }
                    }
                    
                }/* end player four */
                //---------------------
                
                // loop game
                
            }
            //-------------------
           
        }
        
    }
        //player state
        UnloadTexture(texture1);
        UnloadTexture(texture2);
        UnloadTexture(texture3);
        UnloadTexture(texture4);
        UnloadTexture(texture5);
        UnloadTexture(texture6);
        UnloadTexture(texture7);
        UnloadTexture(texture8);
        UnloadTexture(texture9);
        UnloadTexture(texture10);
        UnloadTexture(texture11);
        UnloadTexture(texture12);
        UnloadTexture(texture13);
        UnloadTexture(texture14);
        UnloadTexture(texture15);
        UnloadTexture(texture16);
        
        UnloadTexture(texture_dice1);
        UnloadTexture(texture_dice2);
        UnloadTexture(texture_dice3);
        UnloadTexture(texture_dice4);
        UnloadTexture(texture_dice5);
        UnloadTexture(texture_dice6);
        
    
    UnloadSound(seclection);
    
    UnloadMusicStream(BG);
    
    CloseAudioDevice();
     
    CloseWindow();

    return 0;
}