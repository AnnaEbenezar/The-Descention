#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>

using namespace std;


int main( )
{
    sf::Font font;
    if(!font.loadFromFile("Bohemian Typewriter.ttf"))
    {
        cout << "font not found" << endl;
    }

    sf::Image titlescreen;
    if (!titlescreen.loadFromFile("title.png"))
    {
        cout << "Title Screen not found" << endl;
    }
    sf::Texture titletexture;
    titletexture.loadFromImage(titlescreen);  //Load Texture from image
    sf::Sprite titlesprite;
    titlesprite.setTexture(titletexture);
    titlesprite.setScale(1.5,1.5);
    int titlestate=1; //สเตตัสว่าอยู่ไตเติลหรือเปล่า
    sf::RenderWindow window(sf::VideoMode(1100, 1100), "The Game"); //เปิดหน้าต่างที่ใช้วาดภาพ***
    while (window.isOpen()) //คำสั่งนี้คือบังคับหน้าต่างให้เปิดทิ้งไว้***
        {

            if (titlestate==1){
                window.draw(titlesprite);
                sf::Text titletext;
                titletext.setFont(font);
                titletext.setString("press SPACE to start");
                titletext.setCharacterSize(30);
                titletext.setFillColor(sf::Color::White);
                titletext.setPosition(400,850);
                window.draw(titletext);
                window.display();

        //window.display();
            sf::Event event;
            while (window.pollEvent(event))
                {
                    switch(event.type){ //ให้ใช้คำสั่ง event ไม่ให้กดค้างได้
                        case sf::Event::Closed:
                            window.close();
                            break;

                        case sf::Event::KeyPressed:
                             if (event.key.code == sf::Keyboard::Space){
                                titlestate=0;
                                window.clear();
                                window.display();
                             }
                             break;
                        default:
                            break;
                        }
               }
            ;
        }else{
            window.clear();
            window.display();
            sf::Text text;
            text.setFont(font);
            text.setString("press WASD to move around");
            text.setCharacterSize(24);
            text.setFillColor(sf::Color::White);
            text.setPosition(400,550);
        //text.setStyle(sf::Text::Bold)
            sf::RectangleShape rectangle;
            sf::Texture playertex;
            rectangle.setFillColor(sf::Color::Black);
            rectangle.setSize(sf::Vector2f(500, 500));
            rectangle.setOutlineColor(sf::Color::White);
            rectangle.setOutlineThickness(5);
            rectangle.setPosition(325, 100);


            string lucygoodend[7] = {"My job here is done, now you may leave this elavator",
            "...Why dont I come with you?",
            "I cant, this is heaven. Im a grimm reaper.",
            "Im not very welcome here",
            "yes, you are in heaven right now",
            "I will send you from here",
            "Take care..Goodbye"};
            string lucybadend[4] = {"Outside would be a little for you, careful tho",
            "Why does it hot?..you are funny",
            "This is HELL, of course",
            "now, come with me."};
            string lucydialog[34] = {"",
            "Greetings,",
            "congratulations...you are dead.",
            "Hahaha..you don't seem surprised.",
            "By the way, my job here is to decide where I should\ntake your soul to. I will ask you questions and you\nhave to answer honestly.",
            "Now,",
            "If you would excuse me,",
            "Do you consider yourself to be morally upright?",
            "There is a trolley coming down the tracks and ahead,\nthere are five people tied to the tracks and are unable\nto move. The trolley will continue coming and will kill\nthe five people. There is nothing you can do to rescue\nthe five people EXCEPT that there is a lever.If you\npull the lever, the train will be directed to\nanother track, which has ONE person tied to it.",
            "You have two choices:",
            "good..good..interesting",
            "how about.",
            "There is a trolley coming down the tracks and ahead,\nthere are five people tied to the tracks and are unable\nto move.The trolley will continue coming and will kill\nthe five people. However, in this situation, you are\nstanding on a bridge above the train tracks and you\ncan see the train coming. There is a man standing next\nto you, who is so enormous and heavy that if he ",
            "places himself in front of the oncoming train, it will\nhit and kill him but the train will stop.",
            "you have two choices:",
            "The United Nations has outlined 17 goals that aim\nto eradicate poverty in all its forms. It is a\nrequirement for sustainable development. It includes\nending poverty and food insecurity, ensuring a right\nto education, affordable and sustainable energy, and\npromoting gender equality, and reducing inequality\nwithin and amongst countries. However, ensuring these ",
            "things in a lot of the worlds countries would require\na lot of resources.How do you think the resources\nshould be distributed within the countries or societies\nor even the worlds population? ",
            "Which would lead to the justest society?",
            "Is this really fair? Or was this the best option out\nof others?",
            "What do you believe is the governments role in\nensuring people receive their basic needs?",
            "If a criminal had killed someone close to you, what \nwould you feel would be the best form of punishment?",
            "Who or what do you think should be the one to apply\nthis justice to people?",
            "Have you ever told someone you were [almost there] or\nyou were [stuck in traffic] when you werent?",
            "Have you ever bought something that was more\nexpensive than what you told your parents the price\nwas?",
            "Have you ever lied about having plans or other\nobligations to avoid some type of social situation?",
            "Have you ever told someone that what they were\nwearing was flattering, even though it clearly wasnt?",
            "Have you ever copied someone elses homework?",
            "Have you ever cheated on a test?",
            "Have you ever eaten something made by your\nfriend/family member/partner and didnt like it, but\ndidnt say anything about it?",
            "Do you lie?",
            "...",
            "Alright",
            "The elevator has reached the floor",
            ""};

            string lucychoice2[16][3] = {{"J. Yes","K. No","L. I try my best to be"},
            {"J. Do nothing and the five people will die","K. pull the lever and save the five people, but that\n   one person will die",""},
            {"J. Do nothing and the five people will die.","K. Push the big guy down the bridge. He will be killed\n    but will stop the trolley and save the five people.",""},
            {"J. Justice as Equality ","K. Need-Based Justice","L. Justice as Fairness"},
            {"\nJ. Fair","\nK. Best option",""},
            {"\nJ. Negative Right","\nK. Positive Right",""},
            {"\nJ. Retributive Justice","\nK. Welfare Maximization","\nL. Restorative Justice"},
            {"\nJ. Social Contract Theory","\nK. Utilitarianism","\nL. Egalitarianism"},
            {"\nJ. I have","\nK. I have not",""},
            {"\n\nJ. I have","\n\nK. I have not",""},
            {"\nJ. I have","\nK. I have not",""},
            {"\nJ. I have","\nK. I have not",""},
            {"J. I have","K. I have not",""},
            {"J. I have","K. I have not",""},
            {"\n\nJ. I have","\n\nK. I have not",""},
            {"J. Yes","K. No",""}};//ตัวหลังคือจำนวนช้อย ตัวหน้าคือมีกี่ชุด
            int dialogtype[34] = {0,0,0,0,0,0,0,1,0,1,0,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,2}; //จับประเภทว่าเป็นบทพูดธรรมดาหรือคำถาม
            int lucydialogind = 0; //บทพูด
            int lucyquestionind = 0;
            int lucychoice2ind = 0;
            int lucybadendind = 0;
            int lucygoodendind = 0;
            sf::Text Choice1;
            sf::Text Choice2;
            sf::Text Choice3;


            Choice1.setFont(font);
            Choice1.setCharacterSize(21);
            Choice1.setFillColor(sf::Color::White);
            Choice1.setPosition(330,750);
            Choice2.setFont(font);
            Choice2.setCharacterSize(21);
            Choice2.setFillColor(sf::Color::White);
            Choice2.setPosition(330,790);
            Choice3.setFont(font);
            Choice3.setCharacterSize(21);
            Choice3.setFillColor(sf::Color::White);
            Choice3.setPosition(330,830);


            if (!playertex.loadFromFile("player.png"))
            {
            // error...
            }
            sf::Texture lucytex;
            if (!lucytex.loadFromFile("lil lucy.png"))
            {
            // error...
            }

            sf::Texture lucylbtex;
            if (!lucylbtex.loadFromFile("lessbiglucy.png"))
            {
                // Error...
            }
            sf::Sprite stickman; //ต้องใช้ Sprite ถึงจะใส่ภาพได้
            sf::Sprite stickman2;
            sf::Sprite lucy;
            stickman.setTexture(playertex); //ให้ใช้ตัวแปร Texture
            stickman2.setTexture(lucytex);
            stickman.setPosition(470,300);
            stickman2.setPosition(645,300);
            sf::RectangleShape bubble;
            sf::Text talk;
            sf::Text tap;
            sf::Text diabox;
            int lucyflag =0;

        char user;          // recieve input from user "j k l "
  int score = 0;      // record all score of user
  int dialogrun[23]; // Dialogtype of story
  int count_Q = 0;    // count question
  int count_L = 0;    // counter for the lying section
  int n;              // size of arr
  n = sizeof(dialogrun) / sizeof(dialogrun[0]);
  for (int i = 0; i < n; i++)
  {
    if (dialogrun[i] > 0)
    {
      if (dialogrun[i] == 1)
      {
        //Question 1
        if (score == 0 && count_Q == 0)
        {
          if (user == 'J')
          {
            score += 5;
          }
          else if (user == 'K')
          {
            score -= 5;
          }
          else
          {
            score += 3;
          }
        }
      }

      //Question Trolly 1.1
      else if (count_Q == 1)
      {
        if (user == 'J')
        {
          score -= 5;
        }
        else if (user == 'K')
        {
          score += 3;
        }
      }

      //Question Trolly 1.2
      else if (count_Q == 2)
      {
        if (user == 'J')
        {
          score -= 5;
        }
        else if (user == 'K')
        {
          score += 3;
        }
      }

      //Question Justice 1.1
      else if (count_Q == 3)
      {
        if (user == 'J')
        {
          score += 3;
          if (user == 'J')
          {
            score += 1;
          }
          else if (user == 'K')
          {
            score += 0;
          }
        }
        else if (user == 'K')
        {
          score += 3;
          if (user == 'J')
          {
            score += 1;
          }
          else if (user == 'K')
          {
            score += 5;
          }
        }
        else if (user == 'L')
        {
          score += 5;
          if (user == 'J')
          {
            score += 1;
          }
          else if (user == 'K')
          {
            score += 0;
          }
        }
      }

      //Question Justice 1.2
      else if (count_Q == 4)
      {
        if (user == 'J')
        {
          score -= 5;
        }
        else if (user == 'K')
        {
          score += 5;
        }
      }

      //Question Justice 1.3
      else if (count_Q == 5)
      {
        if (user == 'J')
        {
          score -= 5;
        }
        else if (user == 'K')
        {
          score += 5;
        }
        else if (user == 'L')
        {
          score += 3;
        }
      }
      else if (count_Q == 6)
      {
        if (user == 'J')
        {
          score += 5;
        }
        else if (user == 'K')
        {
          score -= 5;
        }
        else if (user == 'L')
        {
          score += 3;
        }
      }

      //Question Lying - Never Have I Ever
      //Lying 1.1
      else if (count_Q == 7)
      {
        if (user == 'J')
        {
          score -= 5;
          count_L += 1;
        }
        else if (user == 'K')
        {
          score += 5;
        }
      }

      //Lying 1.2
      else if (count_Q == 8)
      {
        if (user == 'J')
        {
          score -= 5;
          count_L += 1;
        }
        else if (user == 'K')
        {
          score += 5;
        }
      }

      //Lying 1.3
      else if (count_Q == 9)
      {
        if (user == 'J')
        {
          score -= 5;
          count_L += 1;
        }
        else if (user == 'K')
        {
          score += 5;
        }
      }

      //Lying 1.4
      else if (count_Q == 10)
      {
        if (user == 'J')
        {
          score -= 5;
          count_L += 1;
        }
        else if (user == 'K')
        {
          score += 5;
        }
      }

      //Lying 1.5
      else if (count_Q == 11)
      {
        if (user == 'J')
        {
          score -= 5;
          count_L += 1;
        }
        else if (user == 'K')
        {
          score += 5;
        }
      }

      //Lying 1.6
      else if (count_Q == 12)
      {
        if (user == 'J')
        {
          score -= 5;
          count_L += 1;
        }
        else if (user == 'K')
        {
          score += 5;
        }
      }

      //Lying 1.7
      else if (count_Q == 13)
      {
        if (user == 'J')
        {
          score -= 5;
          count_L += 1;
        }
        else if (user == 'K')
        {
          score += 5;
        }
      }

      //Lying 1.8
      else if (count_Q == 13)
      {
        if (user == 'J')
        {
          score += 5;
        }
        else if (user == 'K')
        {
          score = (5 * count_L);
        }
      }
      count_Q += 1;
    }
  }
            while (window.isOpen())
            {


                sf::Event event; //เริ่ม event ตรวจการกดปิด
                while (window.pollEvent(event))
                {
                    switch(event.type){
                        case sf::Event::Closed:
                            window.close();
                            break;

                        case sf::Event::KeyReleased:
                            if(stickman.getGlobalBounds().intersects(stickman2.getGlobalBounds()) && lucyflag == 0){
                                 if (event.key.code == sf::Keyboard::E){
                                    lucyflag = 1;
                                 }
                            }
                            if (lucyflag==1){
                                if (dialogtype[lucydialogind] == 0){
                                    if (event.key.code == sf::Keyboard::E){
                                        lucydialogind+=1;
                                    }
                                }
                                else if (dialogtype[lucydialogind] == 1 && lucychoice2[lucydialogind][2] != ""){
                                    if ((event.key.code == sf::Keyboard::J || event.key.code == sf::Keyboard::K || event.key.code == sf::Keyboard::L)){
                                        lucydialogind+=1;
                                        lucychoice2ind+=1;
                                    }
                                }
                                else if (dialogtype[lucydialogind] == 1 && lucychoice2[lucydialogind][2] == ""){
                                    if ((event.key.code == sf::Keyboard::J || event.key.code == sf::Keyboard::K)){
                                        lucydialogind+=1;
                                        lucychoice2ind+=1;
                                    }
                                }
                                else if (dialogtype[lucydialogind] == 2){
                                    if (score >= 36){
                                        if (event.key.code == sf::Keyboard::E){
                                        lucygoodendind+=1;
                                        }
                                    }
                                    else if (score < 36){
                                        if (event.key.code == sf::Keyboard::E){
                                        lucybadendind+=1;
                                        }
                                    }
                                }

                                if (dialogtype[lucydialogind] == 0){
                                    diabox.setString("");
                                    lucy.setTexture(lucylbtex);
                                    lucy.setPosition(100,700);
                                    Choice1.setString("");
                                    Choice2.setString("");
                                    Choice3.setString("");
                                    bubble.setFillColor(sf::Color::Black);
                                    bubble.setSize(sf::Vector2f(900, 250));
                                    bubble.setOutlineColor(sf::Color::White);
                                    bubble.setOutlineThickness(2);
                                    bubble.setPosition(100, 700);
                                    text.setCharacterSize(21);
                                    text.setFillColor(sf::Color::White);
                                    text.setPosition(330,710);

                                    text.setFont(font);
                                    text.setString(lucydialog[lucydialogind]);
                                    tap.setFont(font);
                                    tap.setString("press E to continue");
                                    tap.setCharacterSize(24);
                                    tap.setFillColor(sf::Color::White);
                                    tap.setPosition(700,900);
                                }
                                else if (dialogtype[lucydialogind] == 2){
                                    diabox.setString("");
                                    lucy.setTexture(lucylbtex);
                                    lucy.setPosition(100,700);
                                    Choice1.setString("");
                                    Choice2.setString("");
                                    Choice3.setString("");
                                    bubble.setFillColor(sf::Color::Black);
                                    bubble.setSize(sf::Vector2f(900, 250));
                                    bubble.setOutlineColor(sf::Color::White);
                                    bubble.setOutlineThickness(2);
                                    bubble.setPosition(100, 700);
                                    text.setCharacterSize(21);
                                    text.setFillColor(sf::Color::White);
                                    text.setPosition(330,710);

                                    text.setFont(font);
                                    text.setString(lucygoodend[lucygoodendind]);
                                    tap.setFont(font);
                                    tap.setString("press E to continue");
                                    tap.setCharacterSize(24);
                                    tap.setFillColor(sf::Color::White);
                                    tap.setPosition(700,900);
                                }
                                else{
                                    text.setString(lucydialog[lucydialogind]);
                                    tap.setFont(font);
                                    tap.setString("press J K L to choose");
                                    tap.setCharacterSize(24);
                                    tap.setFillColor(sf::Color::White);
                                    tap.setPosition(700,900);

                                    if (lucychoice2[lucychoice2ind][2] != "") { //ดูว่าช้อยมีสามอันหรือเปล่า
                                        Choice1.setString(lucychoice2[lucychoice2ind][0]);
                                        Choice2.setString(lucychoice2[lucychoice2ind][1]);
                                        Choice3.setString(lucychoice2[lucychoice2ind][2]);
                                        tap.setFont(font);
                                        tap.setString("press J K L to choose");
                                        tap.setCharacterSize(24);
                                        tap.setFillColor(sf::Color::White);
                                        tap.setPosition(700,900);
                                        }else{
                                            Choice1.setString(lucychoice2[lucychoice2ind][0]);
                                            Choice2.setString(lucychoice2[lucychoice2ind][1]);
                                            Choice3.setString("");
                                            tap.setFont(font);
                                            tap.setString("press J or K to choose");
                                            tap.setCharacterSize(24);
                                            tap.setFillColor(sf::Color::White);
                                            tap.setPosition(700,900);
                                        }
                                    }
                                }
                            break;
                        default:
                            break;
                        }

                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
                {
                    window.clear();
                    stickman.move(-0.6,0);
                }
                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
                {
                    window.clear();
                    stickman.move(0.6,0);
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
                {
                    window.clear();
                    stickman.move(0,-0.6);
                }
                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
                {
                    window.clear();
                    stickman.move(0,0.6);
                }


                if(stickman.getPosition().x < rectangle.getPosition().x)
                    stickman.setPosition(rectangle.getPosition().x,stickman.getPosition().y);
                if(stickman.getPosition().y < rectangle.getPosition().y)
                    stickman.setPosition(stickman.getPosition().x,rectangle.getPosition().y);
                if(stickman.getPosition().x + stickman.getGlobalBounds().width > rectangle.getPosition().x+rectangle.getSize().x) //มากกว่าความกว้าง rectangle.getGlobalBounds().width
                    stickman.setPosition(rectangle.getPosition().x+rectangle.getSize().x - stickman.getGlobalBounds().width, stickman.getPosition().y);
                if(stickman.getPosition().y + stickman.getGlobalBounds().width > rectangle.getPosition().y+rectangle.getSize().y)
                    stickman.setPosition(stickman.getPosition().x,rectangle.getPosition().y+rectangle.getSize().y - stickman.getGlobalBounds().height);

                if(stickman.getGlobalBounds().intersects(stickman2.getGlobalBounds())){
                    //sf::Text diabox; //บรรทัดสร้าง object ชื่อ text
                    diabox.setFont(font); // font is a sf::Font
                    // ตัวข้อความ
                    diabox.setString("press E to interact"); //ตั้งข้อความ
                    // ขนาด
                    diabox.setCharacterSize(24); // in pixels, not points!
                    // สี
                    diabox.setFillColor(sf::Color::White);
                    diabox.setPosition(100,10); //ตำแหน่งที่ต้องการ
                     //ให้วาด diabox
                    }


                window.draw(diabox);
                window.draw(rectangle);
                window.draw(stickman);
                window.draw(stickman2);
                window.draw(bubble);
                window.draw(text);
                window.draw(tap);
                window.draw(lucy);
                window.draw(Choice1);
                window.draw(Choice2);
                window.draw(Choice3);
                window.display();
            }

        }
    }

    return 0;
}


