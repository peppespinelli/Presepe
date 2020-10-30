/*
 Author ----Peppe Spinelli IT9ANP----
 ---------Buon Natale-------
 ---------Merry Christmas-------
 ---------Feliz Navidad---------
 ---------Joyeux Noël---------

 ---------------------------------------------------
 ----------Designed for Arduino Mega 2560-----------
 ---------------------------------------------------
 
 Interamente programmabile dai pulsanti 
 Questo progetto si rivolge a tutti quelli che non riescono a programmare ma hanno la voglia di autocostruzione.
 Il progetto è completamente gratuito e può essere usato come meglio crediate, l'unica condizione 
(sulla vostra coscenza) è quella che se lo userete per la vendita, prevediate 
 di donare una parte dei vostri profitti in beneficenza.
 Scusate se il programma è scritto da uno che ha poca familiarità con la programmazione. 
 Magari qualche programmatore storcerà il naso, lo scriva lui. ☻☻☻☻☻☻☻☻
 -------------------------------------------------------------------------
 Fully programmable by buttons
 This project is aimed at all those who cannot program but have the desire for self-construction.
 The project is completely free and can be used as you see fit, the only condition
(on your conscience) is what if you use it for sale, you expect
 to donate a portion of your profits to charity.
 Sorry if the program is written by someone who is unfamiliar with programming. 
 Maybe some programmer will turn up his nose, write it himself.  ☻☻☻☻☻☻☻☻
 For the display light press P1
 I used a LCD Keypad Shield
 LCD: connections    rs = pin8 en = pin9 d4 = pin4 d5 = pin5 d6 = pin6 d7 = pin7

 INPUT connections
 PIN A0 INPUT BUTTON
            P2▲
      P5 P4       P1  P(reset)
            P3▼

        3K   A0   330       680       1K       3.0K
 5V___/\/\/\__|_/\/\/\____/\/\/\____/\/\/\____/\/\/\__
              |__.--._  |__.--._  |__.--._  |__.--._  |__.--._
 0V___________________|_________|_________|_________|_________|
                  P1        P2        P3        P4       P5
  ---------------------------------------------
 OUTPUT connections
 PIN 2 Analogic 1 
 PIN 3 Analogic 2
 PIN 11 Analogic 3 
 PIN 12 Analogic 4
 PIN 13 Analogic 5 
 PIN 44 Analogic 6
 PIN 28 Digital 1 
 PIN 29 Digital 2
 PIN 30 Digital 3 
 PIN 31 Digital 4 
 PIN 32 Digital 5 
 PIN 33 Digital 6
 PIN 34 Digital 7 
 PIN 35 Digital 8
 PIN 36 Digital 9 
 PIN 37 Digital 10
  ---------------------------------------------
  
  Funzionamento:
   Impostare la lunghezza del ciclo: Ad apparecchiatura spenta o reset premuto, tenere premuto P2 e alimentare o 
                                     rilasciare reset, aumentare o diminuire con (P2 = +) (P3 = -) max 1000 (default 180) poi premere P1 per memorizzare.
   
   Impostazioni di default: Ad apparecchiatura spenta o reset premuto, tenere premuto P3 e alimentare o 
                            rilasciare reset, aumentare o diminuire 1 =default poi premere P1 per ripristinare.
   
   Impostazioni A1...A6 o D1..D10:
   Premere P5 vai in A1 premi P5 vai in A2 premi P5 vai in A3......P5 vai in D10
   Quando sei in una pagina per cambiare i valori spostati con P4 per spostare il cursore lampeggiante (P2 = +) (P3 = -) max 100% poi premere P1 per memorizzare.
   Valori in % esempio: ciclo 200s (S 20 = 40s) (R 40 = 80s) (S 60 = 120s) (R 80 = 160s)
   Valori in % esempio: ciclo 500s (S 20 = 100s) (R 40 = 200s) (S 60 = 300s) (R 80 = 400s)

   Operation:
   Set the cycle length: With the appliance switched off or reset pressed, keep P2 pressed and power on or
                                     release reset, increase or decrease with (P2 = +) (P3 = -) max 1000 (default 180) then press P1 to store.
   
   Default settings: With the appliance switched off or reset pressed, keep P3 pressed and power on or
                            release reset, increase or decrease 1 = default then press P1 to reset.
   
   A1 ... A6 or D1..D10 settings:
   Press P5 go to A1 press P5 go to A2 press P5 go to A3 ...... P5 go to D10
   When you are in a page to change the values ​​moved with P4 to move the flashing cursor (P2 = +) (P3 = -) max 100% then press P1 to memorize.
   Values ​​in% example: cycle 200s (S 20 = 40s) (R 40 = 80s) (S 60 = 120s) (R 80 = 160s)
   Values ​​in% example: cycle 500s (S 20 = 100s) (R 40 = 200s) (S 60 = 300s) (R 80 = 400s)
   
   Ciclo A1..A6
   
   A1..A6  S 20   60
           R 40   80
                                   40          60
   Opzione 1:  cycle start  0______/¯¯¯¯¯¯¯¯¯¯¯¯¯\__________xxxx end  type (sun)
                                 20               80
                                 
   A1..A6 S 60   20
          R 80   40
                                    40               80                                
   Opzione 2: cycle start   0¯¯¯¯¯¯\________________/¯¯¯¯¯¯¯xxxx end  type (moon)    
                                20               60 

   Nel ciclo D1..D10
   
   D1...10  S 5    15   45
            R 10   30   60   
                                  5  10 15    30  45  60
   Opzione 1: cycle start   0______|¯¯|_|¯¯¯¯¯¯¯|__|¯¯¯¯|___xxxx end  
   
   D1...10  S 5    21   80
            R 20   21   80  
                                  5     20
   Opzione 2: cycle start   0_____|¯¯¯¯¯|___________________xxxx end  

   D1...10  S 5    70   90
            R 60   80   90
                                  5            60  70 80
   Opzione 3: cycle start   0_____|¯¯¯¯¯¯¯¯¯¯¯¯¯|__|¯¯|_____xxxx end  

   D1...10  S 0    10   70
            R 5    60   100
                                 5 10       60   70
   Opzione 4: cycle start   0¯¯¯¯|_|¯¯¯¯¯¯¯¯¯|____|¯¯¯¯¯¯¯¯¯xxxx end
*/
#include <LiquidCrystal.h>
#include <EEPROM.h>

int Ana1 = 2; 
int Ana2 = 3;
int Ana3 = 11;
int Ana4 = 12;
int Ana5 = 13;
int Ana6 = 44;
//_____________________________
int Dig1 = 28;
int Dig2 = 29;
int Dig3 = 30;
int Dig4 = 31;
int Dig5 = 32;
int Dig6 = 33;
int Dig7 = 34;
int Dig8 = 35;
int Dig9 = 36;
int Dig10 = 37;
void(* Riavvia)(void) = 0;  // Reset di arduino           
const int pin_BL = 10; // arduino pin per l'accenzione dell'LCD //arduino pin for LCD light
LiquidCrystal lcd( 8,  9,  4,  5,  6,  7);
//---------Pagina-----------
int pag = 0;
int pagciclo = 0;
int pagdefault = 0;
int incrdefault = 0;

//---------Durata ciclo-----------
int ciclo = (EEPROM.read(100)*4);

int risolution = 100; // Passi per ogni ciclo, per semplificare è preferibile lasciare 100. Così qualsiasi valore di ingresso è in percentuale. //Steps for each cycle, to simplify it is preferable to leave 100. So any input value is in percent.
int C0 = 0;
int ok = 0;
//---------Analogue with dimmer-A1-----------
unsigned long A1C1 = EEPROM.read(0);
unsigned long A1C2 = EEPROM.read(1);
unsigned long A1C3 = EEPROM.read(2);
unsigned long A1C4 = EEPROM.read(3);
//---------Analogue with dimmer-A2-----------
unsigned long A2C1 = EEPROM.read(4);
unsigned long A2C2 = EEPROM.read(5);
unsigned long A2C3 = EEPROM.read(6);
unsigned long A2C4 = EEPROM.read(7);
//---------Analogue with dimmer-A3-----------
unsigned long A3C1 = EEPROM.read(8);
unsigned long A3C2 = EEPROM.read(9);
unsigned long A3C3 = EEPROM.read(10);
unsigned long A3C4 = EEPROM.read(11);
//---------Analogue with dimmer-A4-----------
unsigned long A4C1 = EEPROM.read(12);
unsigned long A4C2 = EEPROM.read(13);
unsigned long A4C3 = EEPROM.read(14);
unsigned long A4C4 = EEPROM.read(15);
//---------Analogue with dimmer-A5-----------
unsigned long A5C1 = EEPROM.read(16);
unsigned long A5C2 = EEPROM.read(17);
unsigned long A5C3 = EEPROM.read(18);
unsigned long A5C4 = EEPROM.read(19);
//---------Analogue with dimmer-A6-----------
unsigned long A6C1 = EEPROM.read(20);
unsigned long A6C2 = EEPROM.read(21);
unsigned long A6C3 = EEPROM.read(22);
unsigned long A6C4 = EEPROM.read(23);
//--------- Digital-D1-----------
unsigned long D1C1 = EEPROM.read(24);
unsigned long D1C2 = EEPROM.read(25);
unsigned long D1C3 = EEPROM.read(26);
unsigned long D1C4 = EEPROM.read(27);
unsigned long D1C5 = EEPROM.read(28);
unsigned long D1C6 = EEPROM.read(29);
//--------- Digital-D2-----------
unsigned long D2C1 = EEPROM.read(30);
unsigned long D2C2 = EEPROM.read(31);
unsigned long D2C3 = EEPROM.read(32);
unsigned long D2C4 = EEPROM.read(33);
unsigned long D2C5 = EEPROM.read(34);
unsigned long D2C6 = EEPROM.read(35);
//--------- Digital-D3-----------
unsigned long D3C1 = EEPROM.read(36);
unsigned long D3C2 = EEPROM.read(37);
unsigned long D3C3 = EEPROM.read(38);
unsigned long D3C4 = EEPROM.read(39);
unsigned long D3C5 = EEPROM.read(40);
unsigned long D3C6 = EEPROM.read(41);
//--------- Digital-D4-----------
unsigned long D4C1 = EEPROM.read(42);
unsigned long D4C2 = EEPROM.read(43);
unsigned long D4C3 = EEPROM.read(44);
unsigned long D4C4 = EEPROM.read(45);
unsigned long D4C5 = EEPROM.read(46);
unsigned long D4C6 = EEPROM.read(47);
//--------- Digital-D5-----------
unsigned long D5C1 = EEPROM.read(48);
unsigned long D5C2 = EEPROM.read(49);
unsigned long D5C3 = EEPROM.read(50);
unsigned long D5C4 = EEPROM.read(51);
unsigned long D5C5 = EEPROM.read(52);
unsigned long D5C6 = EEPROM.read(53);
//--------- Digital-D6-----------
unsigned long D6C1 = EEPROM.read(54);
unsigned long D6C2 = EEPROM.read(55);
unsigned long D6C3 = EEPROM.read(56);
unsigned long D6C4 = EEPROM.read(57);
unsigned long D6C5 = EEPROM.read(58);
unsigned long D6C6 = EEPROM.read(59);

//--------- Digital-D7-----------
unsigned long D7C1 = EEPROM.read(60);
unsigned long D7C2 = EEPROM.read(61);
unsigned long D7C3 = EEPROM.read(62);
unsigned long D7C4 = EEPROM.read(63);
unsigned long D7C5 = EEPROM.read(64);
unsigned long D7C6 = EEPROM.read(65);

//--------- Digital-D8-----------
unsigned long D8C1 = EEPROM.read(66);
unsigned long D8C2 = EEPROM.read(67);
unsigned long D8C3 = EEPROM.read(68);
unsigned long D8C4 = EEPROM.read(69);
unsigned long D8C5 = EEPROM.read(70);
unsigned long D8C6 = EEPROM.read(71);
//--------- Digital-D9-----------
unsigned long D9C1 = EEPROM.read(72);
unsigned long D9C2 = EEPROM.read(73);
unsigned long D9C3 = EEPROM.read(74);
unsigned long D9C4 = EEPROM.read(75);
unsigned long D9C5 = EEPROM.read(76);
unsigned long D9C6 = EEPROM.read(77);
//--------- Digital-D10-----------
unsigned long D10C1 = EEPROM.read(78);
unsigned long D10C2 = EEPROM.read(79);
unsigned long D10C3 = EEPROM.read(80);
unsigned long D10C4 = EEPROM.read(81);
unsigned long D10C5 = EEPROM.read(82);
unsigned long D10C6 = EEPROM.read(83);
//________________Button________________________
int puls1 = 0;
int puls2 = 0;
int puls3 = 0;
int puls4 = 0;
int puls5 = 0;
//_______________support________________________
int fad1 = 0;
int fad2 = 0;
int fad3 = 0;
int fad4 = 0;
int fad5 = 0;
int fad6 = 0;
//___________________
int Afad1 = 0;
int Afad2 = 0;
int Afad3 = 0;
int Afad4 = 0;
int Afad5 = 0;
int Afad6 = 0;
//___________________
int aa1 = 0;
int aa2 = 0;
int aa3 = 0;
int ba1 = 0;
int ba2 = 0;
int ba3 = 0;
int ca1 = 0;
int ca2 = 0;
int ca3 = 0;
int da1 = 0;
int da2 = 0;
int da3 = 0;
int ea1 = 0;
int ea2 = 0;
int ea3 = 0;
int fa1 = 0;
int fa2 = 0;
int fa3 = 0;
//___________________
unsigned long MA1C1 = 0;
unsigned long MA1C2 = 0;
unsigned long MA1C3 = 0;
unsigned long MA1C4 = 0;
//___________________
unsigned long MA2C1 = 0;
unsigned long MA2C2 = 0;
unsigned long MA2C3 = 0;
unsigned long MA2C4 = 0;
//___________________
unsigned long MA3C1 = 0;
unsigned long MA3C2 = 0;
unsigned long MA3C3 = 0;
unsigned long MA3C4 = 0;
//___________________
unsigned long MA4C1 = 0;
unsigned long MA4C2 = 0;
unsigned long MA4C3 = 0;
unsigned long MA4C4 = 0;
//___________________
unsigned long MA5C1 = 0;
unsigned long MA5C2 = 0;
unsigned long MA5C3 = 0;
unsigned long MA5C4 = 0;
//___________________
unsigned long MA6C1 = 0;
unsigned long MA6C2 = 0;
unsigned long MA6C3 = 0;
unsigned long MA6C4 = 0;
//___________________
unsigned long MD1C1 = 0;
unsigned long MD1C2 = 0;
unsigned long MD1C3 = 0;
unsigned long MD1C4 = 0;
unsigned long MD1C5 = 0;
unsigned long MD1C6 = 0;
//___________________
unsigned long MD2C1 = 0;
unsigned long MD2C2 = 0;
unsigned long MD2C3 = 0;
unsigned long MD2C4 = 0;
unsigned long MD2C5 = 0;
unsigned long MD2C6 = 0;
//___________________
unsigned long MD3C1 = 0;
unsigned long MD3C2 = 0;
unsigned long MD3C3 = 0;
unsigned long MD3C4 = 0;
unsigned long MD3C5 = 0;
unsigned long MD3C6 = 0;
//___________________
unsigned long MD4C1 = 0;
unsigned long MD4C2 = 0;
unsigned long MD4C3 = 0;
unsigned long MD4C4 = 0;
unsigned long MD4C5 = 0;
unsigned long MD4C6 = 0;
//___________________
unsigned long MD5C1 = 0;
unsigned long MD5C2 = 0;
unsigned long MD5C3 = 0;
unsigned long MD5C4 = 0;
unsigned long MD5C5 = 0;
unsigned long MD5C6 = 0;
//___________________
unsigned long MD6C1 = 0;
unsigned long MD6C2 = 0;
unsigned long MD6C3 = 0;
unsigned long MD6C4 = 0;
unsigned long MD6C5 = 0;
unsigned long MD6C6 = 0;
//___________________
unsigned long MD7C1 = 0;
unsigned long MD7C2 = 0;
unsigned long MD7C3 = 0;
unsigned long MD7C4 = 0;
unsigned long MD7C5 = 0;
unsigned long MD7C6 = 0;
//___________________
unsigned long MD8C1 = 0;
unsigned long MD8C2 = 0;
unsigned long MD8C3 = 0;
unsigned long MD8C4 = 0;
unsigned long MD8C5 = 0;
unsigned long MD8C6 = 0;
//___________________
unsigned long MD9C1 = 0;
unsigned long MD9C2 = 0;
unsigned long MD9C3 = 0;
unsigned long MD9C4 = 0;
unsigned long MD9C5 = 0;
unsigned long MD9C6 = 0;
//___________________
unsigned long MD10C1 = 0;
unsigned long MD10C2 = 0;
unsigned long MD10C3 = 0;
unsigned long MD10C4 = 0;
unsigned long MD10C5 = 0;
unsigned long MD10C6 = 0;
//________________OUT digital________________________
int outD1 = 0;
int outD2 = 0;
int outD3 = 0;
int outD4 = 0;
int outD5 = 0;
int outD6 = 0;
int outD7 = 0;
int outD8 = 0;
int outD9 = 0;
int outD10 = 0;
//________________Cursor blinking frequency ________________________
unsigned long pm0 = 0;
unsigned long intervallo0 = 700;
int refr0 = 0;
//________________Clock for 1 second cycle________________________
unsigned long pm1 = 0;
unsigned long intervallo1 = 1000;
int refr1 = 0;
//________________Refresh display________________________
unsigned long pm2 = 0;
unsigned long intervallo2 = 150;
int refr2 = 0;
//________________Display switch off________________________
unsigned long pm3 = 0;
unsigned long intervallo3 = 60000;
int refr3 = 0;
//________________Cursor________________________
int Cursor = 0;
int Cursor2 = 0;
int blik = 0;
//________________Custom fonts________________________
int alev1 = 1;
int alev2 = 1;
int alev3 = 1;
int alev4 = 1;
int alev5 = 1;
int alev6 = 1;
//___________________
byte lev1[8] = {
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b11111
};
byte lev2[8] = {
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b11111,
  0b11111
};
byte lev3[8] = {
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b11111,
  0b11111,
  0b11111
};
byte lev4[8] = {
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b11111,
  0b11111,
  0b11111,
  0b11111
};
byte lev5[8] = {
  0b10001,
  0b10001,
  0b10001,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111
};
byte lev6[8] = {
  0b10001,
  0b10001,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111
};
byte lev7[8] = {
  0b10001,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111
};
byte lev8[8] = {
 0b11111,
 0b11111,
 0b11111,
 0b11111,
 0b11111,
 0b11111,
 0b11111,
 0b11111
};
//___________________
void setup() {
 lcd.begin(16, 2); 
 //___________________
 if (analogRead(A0) > 1020){
 lcd.clear();    
 lcd.setCursor(0,0);
 lcd.print("Presepe 6A/10D"); //6A = 6 analogue outputs with dimmer one ramp up and one down 10D = 10 digital outputs 3 programming per cycle
 lcd.setCursor(0,1);
 lcd.print("    FREEWARE");
 delay(2000);
 lcd.clear();    
 lcd.setCursor(0,0);
 lcd.print("Buon Natale"); // 
 lcd.setCursor(0,1);
 lcd.print("        ");    // Insert the name
 delay(2000);}
 //___________________ 
 Serial.begin(9600);
 //__________led off display ON/OFF_________
 pinMode(pin_BL, OUTPUT);
 digitalWrite(pin_BL, HIGH); 
 //___________________Go to cycle value page__________________________
 if ((analogRead(A0) > 60) && (analogRead(A0) < 200)) {pagciclo = 1;} 
 //___________________Go to default values ​​page__________________________
 if ((analogRead(A0) > 200) && (analogRead(A0) < 400)) {pagdefault = 1;}
 //___________________ 
 pinMode(Dig1, OUTPUT);
 pinMode(Dig2, OUTPUT);
 pinMode(Dig3, OUTPUT);
 pinMode(Dig4, OUTPUT);
 pinMode(Dig5, OUTPUT);
 pinMode(Dig6, OUTPUT);
 pinMode(Dig7, OUTPUT);
 pinMode(Dig8, OUTPUT);
 pinMode(Dig9, OUTPUT);
 pinMode(Dig10, OUTPUT);  
 //___________________
 lcd.createChar(1, lev1);
 lcd.createChar(2, lev2);
 lcd.createChar(3, lev3);
 lcd.createChar(4, lev4);
 lcd.createChar(5, lev5);
 lcd.createChar(6, lev6);
 lcd.createChar(7, lev7);
 lcd.createChar(8, lev8);  
}

void caratpers() {
 if ((Afad1>0) && (Afad1<31)) {alev1 = 1;}
 if ((Afad1>31) && (Afad1<62)) {alev1 = 2;}
 if ((Afad1>62) && (Afad1<93)) {alev1 = 3;}
 if ((Afad1>93) && (Afad1<124)) {alev1 = 4;}
 if ((Afad1>124) && (Afad1<155)) {alev1 = 5;}
 if ((Afad1>155) && (Afad1<186)) {alev1 = 6;}
 if ((Afad1>186) && (Afad1<117)) {alev1 = 7;}
 if ((Afad1>117) && (Afad1<=255)) {alev1 = 8;}

 if ((Afad2>0) && (Afad2<31)) {alev2 = 1;}
 if ((Afad2>31) && (Afad2<62)) {alev2 = 2;}
 if ((Afad2>62) && (Afad2<93)) {alev2 = 3;}
 if ((Afad2>93) && (Afad2<124)) {alev2 = 4;}
 if ((Afad2>124) && (Afad2<155)) {alev2 = 5;}
 if ((Afad2>155) && (Afad2<186)) {alev2 = 6;}
 if ((Afad2>186) && (Afad2<117)) {alev2 = 7;}
 if ((Afad2>117) && (Afad2<=255)) {alev2 = 8;}

 if ((Afad3>0) && (Afad3<31)) {alev3 = 1;}
 if ((Afad3>31) && (Afad3<62)) {alev3 = 2;}
 if ((Afad3>62) && (Afad3<93)) {alev3 = 3;}
 if ((Afad3>93) && (Afad3<124)) {alev3 = 4;}
 if ((Afad3>124) && (Afad3<155)) {alev3 = 5;}
 if ((Afad3>155) && (Afad3<186)) {alev3 = 6;}
 if ((Afad3>186) && (Afad3<117)) {alev3 = 7;}
 if ((Afad3>117) && (Afad3<=255)) {alev3 = 8;}

 if ((Afad4>0) && (Afad4<31)) {alev4 = 1;}
 if ((Afad4>31) && (Afad4<62)) {alev4 = 2;}
 if ((Afad4>62) && (Afad4<93)) {alev4 = 3;}
 if ((Afad4>93) && (Afad4<124)) {alev4 = 4;}
 if ((Afad4>124) && (Afad4<155)) {alev4 = 5;}
 if ((Afad4>155) && (Afad4<186)) {alev4 = 6;}
 if ((Afad4>186) && (Afad4<117)) {alev4 = 7;}
 if ((Afad4>117) && (Afad4<=255)) {alev4 = 8;}

 if ((Afad5>0) && (Afad5<31)) {alev5 = 1;}
 if ((Afad5>31) && (Afad5<62)) {alev5 = 2;}
 if ((Afad5>62) && (Afad5<93)) {alev5 = 3;}
 if ((Afad5>93) && (Afad5<124)) {alev5 = 4;}
 if ((Afad5>124) && (Afad5<155)) {alev5 = 5;}
 if ((Afad5>155) && (Afad5<186)) {alev5 = 6;}
 if ((Afad5>186) && (Afad5<117)) {alev5 = 7;}
 if ((Afad5>117) && (Afad5<=255)) {alev5 = 8;}

 if ((Afad6>0) && (Afad6<31)) {alev6 = 1;}
 if ((Afad6>31) && (Afad6<62)) {alev6 = 2;}
 if ((Afad6>62) && (Afad6<93)) {alev6 = 3;}
 if ((Afad6>93) && (Afad6<124)) {alev6 = 4;}
 if ((Afad6>124) && (Afad6<155)) {alev6 = 5;}
 if ((Afad6>155) && (Afad6<186)) {alev6 = 6;}
 if ((Afad6>186) && (Afad6<117)) {alev6 = 7;}
 if ((Afad6>117) && (Afad6<=255)) {alev6 = 8;}
}

void incrementi_pagine() {
  if ((puls5 == 1) && (refr2)){delay(30); pag++;}
  if (pag > 16) {pag = 0;}
  }
  
  void increm_A1() { 
  if ((pag == 1) && (refr2 == 1 ) && (puls2 == 1) && (Cursor2 == 0)){A1C1++;}
  if ((pag == 1) && (refr2 == 1 ) && (puls3 == 1) && (Cursor2 == 0)){A1C1--;}
  if (A1C1 > risolution) {A1C1 = 1;}
  if (A1C1 < 1) {A1C1 = risolution;} 
  if ((pag == 1) && (refr2 == 1 ) && (puls2 == 1) && (Cursor2 == 1)){A1C2++;}
  if ((pag == 1) && (refr2 == 1 ) && (puls3 == 1) && (Cursor2 == 1)){A1C2--;}
  if (A1C2 > risolution) {A1C2 = 1;}
  if (A1C2 < 1) {A1C2 = risolution;} 
  if ((pag == 1) && (refr2 == 1 ) && (puls2 == 1) && (Cursor2 == 2)){A1C3++;}
  if ((pag == 1) && (refr2 == 1 ) && (puls3 == 1) && (Cursor2 == 2)){A1C3--;}
  if (A1C3 > risolution) {A1C3 = 1;}
  if (A1C3 < 1) {A1C3 = risolution;} 
  if ((pag == 1) && (refr2 == 1 ) && (puls2 == 1) && (Cursor2 == 3)){A1C4++;}
  if ((pag == 1) && (refr2 == 1 ) && (puls3 == 1) && (Cursor2 == 3)){A1C4--;}
  if (A1C4 > risolution) {A1C4 = 1;}
  if (A1C4 < 1) {A1C4 = risolution;} 
  if (A1C1 > A1C2){(A1C2 = A1C1);}  
  if (A1C3 > A1C4){(A1C4 = A1C3);}
  
  if ((pag == 1) && (puls1 == 1)){EEPROM.write(0, A1C1);EEPROM.write(1, A1C2);EEPROM.write(2, A1C3);EEPROM.write(3, A1C4);pag=0;}
  }
  void increm_A2() { 
    
  if ((pag == 2) && (refr2 == 1 ) && (puls2 == 1) && (Cursor2 == 0)){A2C1++;}
  if ((pag == 2) && (refr2 == 1 ) && (puls3 == 1) && (Cursor2 == 0)){A2C1--;}
  if (A2C1 > risolution) {A2C1 = 1;}
  if (A2C1 < 1) {A2C1 = risolution;} 
  if ((pag == 2) && (refr2 == 1 ) && (puls2 == 1) && (Cursor2 == 1)){A2C2++;}
  if ((pag == 2) && (refr2 == 1 ) && (puls3 == 1) && (Cursor2 == 1)){A2C2--;}
  if (A2C2 > risolution) {A2C2 = 1;}
  if (A2C2 < 1) {A2C2 = risolution;} 
  if ((pag == 2) && (refr2 == 1 ) && (puls2 == 1) && (Cursor2 == 2)){A2C3++;}
  if ((pag == 2) && (refr2 == 1 ) && (puls3 == 1) && (Cursor2 == 2)){A2C3--;}
  if (A2C3 > risolution) {A2C3 = 1;}
  if (A2C3 < 1) {A2C3 = risolution;} 
  if ((pag == 2) && (refr2 == 1 ) && (puls2 == 1) && (Cursor2 == 3)){A2C4++;}
  if ((pag == 2) && (refr2 == 1 ) && (puls3 == 1) && (Cursor2 == 3)){A2C4--;}
  if (A2C4 > risolution) {A2C4 = 1;}
  if (A2C4 < 1) {A2C4 = risolution;} 
  if (A2C1 > A2C2){(A2C2 = A2C1);} 
  if ((pag == 2) && (puls1 == 1)){EEPROM.write(4, A2C1);EEPROM.write(5, A2C2);EEPROM.write(6, A2C3);EEPROM.write(7, A2C4);pag=0;}
  }
  void increm_A3() {  
  if ((pag == 3) && (refr2 == 1 ) && (puls2 == 1) && (Cursor2 == 0)){A3C1++;}
  if ((pag == 3) && (refr2 == 1 ) && (puls3 == 1) && (Cursor2 == 0)){A3C1--;}
  if (A3C1 > risolution) {A3C1 = 1;}
  if (A3C1 < 1) {A3C1 = risolution;} 
  if ((pag == 3) && (refr2 == 1 ) && (puls2 == 1) && (Cursor2 == 1)){A3C2++;}
  if ((pag == 3) && (refr2 == 1 ) && (puls3 == 1) && (Cursor2 == 1)){A3C2--;}
  if (A3C2 > risolution) {A3C2 = 1;}
  if (A3C2 < 1) {A3C2 = risolution;} 
  if ((pag == 3) && (refr2 == 1 ) && (puls2 == 1) && (Cursor2 == 2)){A3C3++;}
  if ((pag == 3) && (refr2 == 1 ) && (puls3 == 1) && (Cursor2 == 2)){A3C3--;}
  if (A3C3 > risolution) {A3C3 = 1;}
  if (A3C3 < 1) {A3C3 = risolution;} 
  if ((pag == 3) && (refr2 == 1 ) && (puls2 == 1) && (Cursor2 == 3)){A3C4++;}
  if ((pag == 3) && (refr2 == 1 ) && (puls3 == 1) && (Cursor2 == 3)){A3C4--;}
  if (A3C4 > risolution) {A3C4 = 1;}
  if (A3C4 < 1) {A3C4 = risolution;} 
  if (A3C1 > A3C2){(A3C2 = A3C1);} 
  if ((pag == 3) && (puls1 == 1)){EEPROM.write(8, A3C1);EEPROM.write(9, A3C2);EEPROM.write(10, A3C3);EEPROM.write(11, A3C4);pag=0;}
  }
  void increm_A4() { 
  if ((pag == 4) && (refr2 == 1 ) && (puls2 == 1) && (Cursor2 == 0)){A4C1++;}
  if ((pag == 4) && (refr2 == 1 ) && (puls3 == 1) && (Cursor2 == 0)){A4C1--;}
  if (A4C1 > risolution) {A4C1 = 1;}
  if (A4C1 < 1) {A4C1 = risolution;} 
  if ((pag == 4) && (refr2 == 1 ) && (puls2 == 1) && (Cursor2 == 1)){A4C2++;}
  if ((pag == 4) && (refr2 == 1 ) && (puls3 == 1) && (Cursor2 == 1)){A4C2--;}
  if (A4C2 > risolution) {A4C2 = 1;}
  if (A4C2 < 1) {A4C2 = risolution;} 
  if ((pag == 4) && (refr2 == 1 ) && (puls2 == 1) && (Cursor2 == 2)){A4C3++;}
  if ((pag == 4) && (refr2 == 1 ) && (puls3 == 1) && (Cursor2 == 2)){A4C3--;}
  if (A4C3 > risolution) {A4C3 = 1;}
  if (A4C3 < 1) {A4C3 = risolution;} 
  if ((pag == 4) && (refr2 == 1 ) && (puls2 == 1) && (Cursor2 == 3)){A4C4++;}
  if ((pag == 4) && (refr2 == 1 ) && (puls3 == 1) && (Cursor2 == 3)){A4C4--;}
  if (A4C4 > risolution) {A4C4 = 1;}
  if (A4C4 < 1) {A4C4 = risolution;} 
  if (A4C1 > A4C2){(A4C2 = A4C1);}  
  if ((pag == 4) && (puls1 == 1)){EEPROM.write(12, A4C1);EEPROM.write(13, A4C2);EEPROM.write(14, A4C3);EEPROM.write(15, A4C4);pag=0;}
  }
  void increm_A5() {  
  if ((pag == 5) && (refr2 == 1 ) && (puls2 == 1) && (Cursor2 == 0)){A5C1++;}
  if ((pag == 5) && (refr2 == 1 ) && (puls3 == 1) && (Cursor2 == 0)){A5C1--;}
  if (A5C1 > risolution) {A5C1 = 1;}
  if (A5C1 < 1) {A5C1 = risolution;} 
  if ((pag == 5) && (refr2 == 1 ) && (puls2 == 1) && (Cursor2 == 1)){A5C2++;}
  if ((pag == 5) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 1)){A5C2--;}
  if (A5C2 > risolution) {A5C2 = 1;}
  if (A5C2 < 1) {A5C2 = risolution;} 
  if ((pag == 5) && (refr2 == 1 ) && (puls2 == 1) && (Cursor2 == 2)){A5C3++;}
  if ((pag == 5) && (refr2 == 1 ) && (puls3 == 1) && (Cursor2 == 2)){A5C3--;}
  if (A5C3 > risolution) {A5C3 = 1;}
  if (A5C3 < 1) {A5C3 = risolution;} 
  if ((pag == 5) && (refr2 == 1 ) && (puls2 == 1) && (Cursor2 == 3)){A5C4++;}
  if ((pag == 5) && (refr2 == 1 ) && (puls3 == 1) && (Cursor2 == 3)){A5C4--;}
  if (A5C4 > risolution) {A5C4 = 1;}
  if (A5C4 < 1) {A5C4 = risolution;} 
  if (A5C1 > A5C2){(A5C2 = A5C1);} 
  if ((pag == 5) && (puls1 == 1)){EEPROM.write(16, A5C1);EEPROM.write(17, A5C2);EEPROM.write(18, A5C3);EEPROM.write(19, A5C4);pag=0;}
  }
  void increm_A6() {  
  if ((pag == 6) && (refr2 == 1 ) && (puls2 == 1) && (Cursor2 == 0)){A6C1++;}
  if ((pag == 6) && (refr2 == 1 ) && (puls3 == 1) && (Cursor2 == 0)){A6C1--;}
  if (A6C1 > risolution) {A6C1 = 1;}
  if (A6C1 < 1) {A6C1 = risolution;} 
  if ((pag == 6) && (refr2 == 1 ) && (puls2 == 1) && (Cursor2 == 1)){A6C2++;}
  if ((pag == 6) && (refr2 == 1 ) && (puls3 == 1) && (Cursor2 == 1)){A6C2--;}
  if (A6C2 > risolution) {A6C2 = 1;}
  if (A6C2 < 1) {A6C2 = risolution;} 
  if ((pag == 6) && (refr2 == 1 ) && (puls2 == 1) && (Cursor2 == 2)){A6C3++;}
  if ((pag == 6) && (refr2 == 1 ) && (puls3 == 1) && (Cursor2 == 2)){A6C3--;}
  if (A6C3 > risolution) {A6C3 = 1;}
  if (A6C3 < 1) {A6C3 = risolution;} 
  if ((pag == 6) && (refr2 == 1 ) && (puls2 == 1) && (Cursor2 == 3)){A6C4++;}
  if ((pag == 6) && (refr2 == 1 ) && (puls3 == 1) && (Cursor2 == 3)){A6C4--;}
  if (A6C4 > risolution) {A6C4 = 1;}
  if (A6C4 < 1) {A6C4 = risolution;} 
  if (A6C1 > A6C2){(A6C2 = A6C1);}
  if ((pag == 6) && (puls1 == 1)){EEPROM.write(20, A6C1);EEPROM.write(21, A6C2);EEPROM.write(22, A6C3);EEPROM.write(23, A6C4);pag=0;} 
  }
void increm_D1() {
  if ((pag == 7) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 0)){D1C1++;}
  if ((pag == 7) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 0)){D1C1--;}
  if (D1C1 > risolution) {D1C1 = 0;}
  if (D1C1 < 0) {D1C1 = risolution;}
  if ((pag == 7) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 1)){D1C2++;}
  if ((pag == 7) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 1)){D1C2--;}
  if (D1C1 > risolution) {D1C1 = 0;}
  if (D1C1 < 0) {D1C1 = risolution;}
  if ((pag == 7) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 2)){D1C3++;}
  if ((pag == 7) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 2)){D1C3--;}
  if (D1C3 > risolution) {D1C3 = 0;}
  if (D1C3 < 0) {D1C3 = risolution;}
  if ((pag == 7) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 3)){D1C4++;}
  if ((pag == 7) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 3)){D1C4--;}
  if (D1C4 > risolution) {D1C4 = 0;}
  if (D1C4 < 0) {D1C4 = risolution;}
  if ((pag == 7) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 4)){D1C5++;}
  if ((pag == 7) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 4)){D1C5--;}
  if (D1C5 > risolution) {D1C5 = 0;}
  if (D1C5 < 0) {D1C5 = risolution;}
  if ((pag == 7) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 5)){D1C6++;}
  if ((pag == 7) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 5)){D1C6--;}
  if (D1C6 > risolution) {D1C6 = 0;}
  if (D1C6 < 0) {D1C6 = risolution;}  
  if (D1C1 > D1C2){(D1C2 = D1C1);}
  if (D1C2 > D1C3){(D1C3 = D1C2);}
  if (D1C3 > D1C4){(D1C4 = D1C3);}
  if (D1C4 > D1C5){(D1C5 = D1C4);}
  if (D1C5 > D1C6){(D1C6 = D1C5);}
  if ((pag == 7) && (puls1 == 1)){EEPROM.write(24, D1C1);EEPROM.write(25, D1C2);EEPROM.write(26, D1C3);EEPROM.write(27, D1C4);EEPROM.write(28, D1C5);EEPROM.write(29, D1C6);pag=0;}
  }

  void increm_D2() {  
  if ((pag == 8) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 0)){D2C1++;}
  if ((pag == 8) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 0)){D2C1--;}
  if (D2C1 > risolution) {D2C1 = 0;}
  if (D2C1 < 0) {D2C1 = risolution;}
  if ((pag == 8) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 1)){D2C2++;}
  if ((pag == 8) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 1)){D2C2--;}
  if (D2C1 > risolution) {D2C1 = 0;}
  if (D2C1 < 0) {D2C1 = risolution;}
  if ((pag == 8) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 2)){D2C3++;}
  if ((pag == 8) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 2)){D2C3--;}
  if (D2C3 > risolution) {D2C3 = 0;}
  if (D2C3 < 0) {D2C3 = risolution;}
  if ((pag == 8) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 3)){D2C4++;}
  if ((pag == 8) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 3)){D2C4--;}
  if (D2C4 > risolution) {D2C4 = 0;}
  if (D2C4 < 0) {D2C4 = risolution;}
  if ((pag == 8) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 4)){D2C5++;}
  if ((pag == 8) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 4)){D2C5--;}
  if (D2C5 > risolution) {D2C5 = 0;}
  if (D2C5 < 0) {D2C5 = risolution;}
  if ((pag == 8) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 5)){D2C6++;}
  if ((pag == 8) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 5)){D2C6--;}
  if (D2C6 > risolution) {D2C6 = 0;}
  if (D2C6 < 0) {D2C6 = risolution;}  
  if (D2C1 > D2C2){(D2C2 = D2C1);}
  if (D2C2 > D2C3){(D2C3 = D2C2);}
  if (D2C3 > D2C4){(D2C4 = D2C3);}
  if (D2C4 > D2C5){(D2C5 = D2C4);}
  if (D2C5 > D2C6){(D2C6 = D2C5);}
  if ((pag == 8) && (puls1 == 1)){EEPROM.write(30, D2C1);EEPROM.write(31, D2C2);EEPROM.write(32, D2C3);EEPROM.write(33, D2C4);EEPROM.write(34, D2C5);EEPROM.write(35, D2C6);pag=0;}
  }
  void increm_D3() {  
  if ((pag == 9) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 0)){D3C1++;}
  if ((pag == 9) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 0)){D3C1--;}
  if (D3C1 > risolution) {D3C1 = 0;}
  if (D3C1 < 0) {D3C1 = risolution;}
  if ((pag == 9) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 1)){D3C2++;}
  if ((pag == 9) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 1)){D3C2--;}
  if (D3C1 > risolution) {D3C1 = 0;}
  if (D3C1 < 0) {D3C1 = risolution;}
  if ((pag == 9) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 2)){D3C3++;}
  if ((pag == 9) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 2)){D3C3--;}
  if (D3C3 > risolution) {D3C3 = 0;}
  if (D3C3 < 0) {D3C3 = risolution;}
  if ((pag == 9) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 3)){D3C4++;}
  if ((pag == 9) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 3)){D3C4--;}
  if (D3C4 > risolution) {D3C4 = 0;}
  if (D3C4 < 0) {D3C4 = risolution;}
  if ((pag == 9) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 4)){D3C5++;}
  if ((pag == 9) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 4)){D3C5--;}
  if (D3C5 > risolution) {D3C5 = 0;}
  if (D3C5 < 0) {D3C5 = risolution;}
  if ((pag == 9) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 5)){D3C6++;}
  if ((pag == 9) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 5)){D3C6--;}
  if (D3C6 > risolution) {D3C6 = 0;}
  if (D3C6 < 0) {D3C6 = risolution;}  
  if (D3C1 > D3C2){(D3C2 = D3C1);}
  if (D3C2 > D3C3){(D3C3 = D3C2);}
  if (D3C3 > D3C4){(D3C4 = D3C3);}
  if (D3C4 > D3C5){(D3C5 = D3C4);}
  if (D3C5 > D3C6){(D3C6 = D3C5);}
  if ((pag == 9) && (puls1 == 1)){EEPROM.write(36, D3C1);EEPROM.write(37, D3C2);EEPROM.write(38, D3C3);EEPROM.write(39, D3C4);EEPROM.write(40, D3C5);EEPROM.write(41, D3C6);pag=0;}
  }
  void increm_D4() {  
  if ((pag == 10) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 0)){D4C1++;}
  if ((pag == 10) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 0)){D4C1--;}
  if (D4C1 > risolution) {D4C1 = 0;}
  if (D4C1 < 0) {D4C1 = risolution;}
  if ((pag == 10) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 1)){D4C2++;}
  if ((pag == 10) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 1)){D4C2--;}
  if (D4C1 > risolution) {D4C1 = 0;}
  if (D4C1 < 0) {D4C1 = risolution;}
  if ((pag == 10) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 2)){D4C3++;}
  if ((pag == 10) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 2)){D4C3--;}
  if (D4C3 > risolution) {D4C3 = 0;}
  if (D4C3 < 0) {D4C3 = risolution;}
  if ((pag == 10) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 3)){D4C4++;}
  if ((pag == 10) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 3)){D4C4--;}
  if (D4C4 > risolution) {D4C4 = 0;}
  if (D4C4 < 0) {D4C4 = risolution;}
  if ((pag == 10) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 4)){D4C5++;}
  if ((pag == 10) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 4)){D4C5--;}
  if (D4C5 > risolution) {D4C5 = 0;}
  if (D4C5 < 0) {D4C5 = risolution;}
  if ((pag == 10) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 5)){D4C6++;}
  if ((pag == 10) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 5)){D4C6--;}
  if (D4C6 > risolution) {D4C6 = 0;}
  if (D4C6 < 0) {D4C6 = risolution;}  
  if (D4C1 > D4C2){(D4C2 = D4C1);}
  if (D4C2 > D4C3){(D4C3 = D4C2);}
  if (D4C3 > D4C4){(D4C4 = D4C3);}
  if (D4C4 > D4C5){(D4C5 = D4C4);}
  if (D4C5 > D4C6){(D4C6 = D4C5);}
  if ((pag == 10) && (puls1 == 1)){EEPROM.write(42, D4C1);EEPROM.write(43, D4C2);EEPROM.write(44, D4C3);EEPROM.write(45, D4C4);EEPROM.write(46, D4C5);EEPROM.write(47, D4C6);pag=0;}
  }
  void increm_D5() {  
  if ((pag == 11) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 0)){D5C1++;}
  if ((pag == 11) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 0)){D5C1--;}
  if (D5C1 > risolution) {D5C1 = 0;}
  if (D5C1 < 0) {D5C1 = risolution;}
  if ((pag == 11) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 1)){D5C2++;}
  if ((pag == 11) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 1)){D5C2--;}
  if (D5C1 > risolution) {D5C1 = 0;}
  if (D5C1 < 0) {D5C1 = risolution;}
  if ((pag == 11) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 2)){D5C3++;}
  if ((pag == 11) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 2)){D5C3--;}
  if (D5C3 > risolution) {D5C3 = 0;}
  if (D5C3 < 0) {D5C3 = risolution;}
  if ((pag == 11) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 3)){D5C4++;}
  if ((pag == 11) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 3)){D5C4--;}
  if (D5C4 > risolution) {D5C4 = 0;}
  if (D5C4 < 0) {D5C4 = risolution;}
  if ((pag == 11) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 4)){D5C5++;}
  if ((pag == 11) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 4)){D5C5--;}
  if (D5C5 > risolution) {D5C5 = 0;}
  if (D5C5 < 0) {D5C5 = risolution;}
  if ((pag == 11) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 5)){D5C6++;}
  if ((pag == 11) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 5)){D5C6--;}
  if (D5C6 > risolution) {D5C6 = 0;}
  if (D5C6 < 0) {D5C6 = risolution;}  
  if (D5C1 > D5C2){(D5C2 = D5C1);}
  if (D5C2 > D5C3){(D5C3 = D5C2);}
  if (D5C3 > D5C4){(D5C4 = D5C3);}
  if (D5C4 > D5C5){(D5C5 = D5C4);}
  if (D5C5 > D5C6){(D5C6 = D5C5);}   
  if ((pag == 11) && (puls1 == 1)){EEPROM.write(48, D5C1);EEPROM.write(49, D5C2);EEPROM.write(50, D5C3);EEPROM.write(51, D5C4);EEPROM.write(52, D5C5);EEPROM.write(53, D5C6);pag=0;}
  }
  void increm_D6() {  
  if ((pag == 12) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 0)){D6C1++;}
  if ((pag == 12) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 0)){D6C1--;}
  if (D6C1 > risolution) {D6C1 = 0;}
  if (D6C1 < 0) {D6C1 = risolution;}
  if ((pag == 12) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 1)){D6C2++;}
  if ((pag == 12) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 1)){D6C2--;}
  if (D6C1 > risolution) {D6C1 = 0;}
  if (D6C1 < 0) {D6C1 = risolution;}
  if ((pag == 12) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 2)){D6C3++;}
  if ((pag == 12) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 2)){D6C3--;}
  if (D6C3 > risolution) {D6C3 = 0;}
  if (D6C3 < 0) {D6C3 = risolution;}
  if ((pag == 12) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 3)){D6C4++;}
  if ((pag == 12) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 3)){D6C4--;}
  if (D6C4 > risolution) {D6C4 = 0;}
  if (D6C4 < 0) {D6C4 = risolution;}
  if ((pag == 12) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 4)){D6C5++;}
  if ((pag == 12) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 4)){D6C5--;}
  if (D6C5 > risolution) {D6C5 = 0;}
  if (D6C5 < 0) {D6C5 = risolution;}
  if ((pag == 12) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 5)){D6C6++;}
  if ((pag == 12) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 5)){D6C6--;}
  if (D6C6 > risolution) {D6C6 = 0;}
  if (D6C6 < 0) {D6C6 = risolution;}  
  if (D6C1 > D6C2){(D6C2 = D6C1);}
  if (D6C2 > D6C3){(D6C3 = D6C2);}
  if (D6C3 > D6C4){(D6C4 = D6C3);}
  if (D6C4 > D6C5){(D6C5 = D6C4);}
  if (D6C5 > D6C6){(D6C6 = D6C5);}
  if ((pag == 12) && (puls1 == 1)){EEPROM.write(54, D6C1);EEPROM.write(55, D6C2);EEPROM.write(56, D6C3);EEPROM.write(57, D6C4);EEPROM.write(58, D6C5);EEPROM.write(59, D6C6);pag=0;}
  }

  void increm_D7() {  
  if ((pag == 13) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 0)){D7C1++;}
  if ((pag == 13) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 0)){D7C1--;}
  if (D7C1 > risolution) {D7C1 = 0;}
  if (D7C1 < 0) {D7C1 = risolution;}
  if ((pag == 13) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 1)){D7C2++;}
  if ((pag == 13) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 1)){D7C2--;}
  if (D7C1 > risolution) {D7C1 = 0;}
  if (D7C1 < 0) {D7C1 = risolution;}
  if ((pag == 13) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 2)){D7C3++;}
  if ((pag == 13) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 2)){D7C3--;}
  if (D7C3 > risolution) {D7C3 = 0;}
  if (D7C3 < 0) {D7C3 = risolution;}
  if ((pag == 13) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 3)){D7C4++;}
  if ((pag == 13) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 3)){D7C4--;}
  if (D7C4 > risolution) {D7C4 = 0;}
  if (D7C4 < 0) {D7C4 = risolution;}
  if ((pag == 13) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 4)){D7C5++;}
  if ((pag == 13) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 4)){D7C5--;}
  if (D7C5 > risolution) {D7C5 = 0;}
  if (D7C5 < 0) {D7C5 = risolution;}
  if ((pag == 13) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 5)){D7C6++;}
  if ((pag == 13) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 5)){D7C6--;}
  if (D7C6 > risolution) {D7C6 = 0;}
  if (D7C6 < 0) {D7C6 = risolution;}  
  if (D7C1 > D7C2){(D7C2 = D7C1);}
  if (D7C2 > D7C3){(D7C3 = D7C2);}
  if (D7C3 > D7C4){(D7C4 = D7C3);}
  if (D7C4 > D7C5){(D7C5 = D7C4);}
  if (D7C5 > D7C6){(D7C6 = D7C5);}
  if ((pag == 13) && (puls1 == 1)){EEPROM.write(60, D7C1);EEPROM.write(61, D7C2);EEPROM.write(62, D7C3);EEPROM.write(63, D7C4);EEPROM.write(64, D7C5);EEPROM.write(65, D7C6);pag=0;}
  }
  
void increm_D8() {  
  if ((pag == 14) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 0)){D8C1++;}
  if ((pag == 14) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 0)){D8C1--;}
  if (D8C1 > risolution) {D8C1 = 0;}
  if (D8C1 < 0) {D8C1 = risolution;}
  if ((pag == 14) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 1)){D8C2++;}
  if ((pag == 14) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 1)){D8C2--;}
  if (D8C1 > risolution) {D8C1 = 0;}
  if (D8C1 < 0) {D8C1 = risolution;}
  if ((pag == 14) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 2)){D8C3++;}
  if ((pag == 14) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 2)){D8C3--;}
  if (D8C3 > risolution) {D8C3 = 0;}
  if (D8C3 < 0) {D8C3 = risolution;}
  if ((pag == 14) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 3)){D8C4++;}
  if ((pag == 14) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 3)){D8C4--;}
  if (D8C4 > risolution) {D8C4 = 0;}
  if (D8C4 < 0) {D8C4 = risolution;}
  if ((pag == 14) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 4)){D8C5++;}
  if ((pag == 14) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 4)){D8C5--;}
  if (D8C5 > risolution) {D8C5 = 0;}
  if (D8C5 < 0) {D8C5 = risolution;}
  if ((pag == 14) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 5)){D8C6++;}
  if ((pag == 14) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 5)){D8C6--;}
  if (D8C6 > risolution) {D8C6 = 0;}
  if (D8C6 < 0) {D8C6 = risolution;}  
  if (D8C1 > D8C2){(D8C2 = D8C1);}
  if (D8C2 > D8C3){(D8C3 = D8C2);}
  if (D8C3 > D8C4){(D8C4 = D8C3);}
  if (D8C4 > D8C5){(D8C5 = D8C4);}
  if (D8C5 > D8C6){(D8C6 = D8C5);}
  if ((pag == 14) && (puls1 == 1)){EEPROM.write(66, D8C1);EEPROM.write(67, D8C2);EEPROM.write(68, D8C3);EEPROM.write(69, D8C4);EEPROM.write(70, D8C5);EEPROM.write(71, D8C6);pag=0;}
  }

 
void increm_D9() {  
  if ((pag == 15) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 0)){D9C1++;}
  if ((pag == 15) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 0)){D9C1--;}
  if (D9C1 > risolution) {D9C1 = 0;}
  if (D9C1 < 0) {D9C1 = risolution;}
  if ((pag == 15) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 1)){D9C2++;}
  if ((pag == 15) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 1)){D9C2--;}
  if (D9C1 > risolution) {D9C1 = 0;}
  if (D9C1 < 0) {D9C1 = risolution;}
  if ((pag == 15) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 2)){D9C3++;}
  if ((pag == 15) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 2)){D9C3--;}
  if (D9C3 > risolution) {D9C3 = 0;}
  if (D9C3 < 0) {D9C3 = risolution;}
  if ((pag == 15) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 3)){D9C4++;}
  if ((pag == 15) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 3)){D9C4--;}
  if (D9C4 > risolution) {D9C4 = 0;}
  if (D9C4 < 0) {D9C4 = risolution;}
  if ((pag == 15) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 4)){D9C5++;}
  if ((pag == 15) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 4)){D9C5--;}
  if (D9C5 > risolution) {D9C5 = 0;}
  if (D9C5 < 0) {D9C5 = risolution;}
  if ((pag == 15) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 5)){D9C6++;}
  if ((pag == 15) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 5)){D9C6--;}
  if (D9C6 > risolution) {D9C6 = 0;}
  if (D9C6 < 0) {D9C6 = risolution;}  
  if (D9C1 > D9C2){(D9C2 = D9C1);}
  if (D9C2 > D9C3){(D9C3 = D9C2);}
  if (D9C3 > D9C4){(D9C4 = D9C3);}
  if (D9C4 > D9C5){(D9C5 = D9C4);}
  if (D9C5 > D9C6){(D9C6 = D9C5);}
  if ((pag == 15) && (puls1 == 1)){EEPROM.write(72, D9C1);EEPROM.write(73, D9C2);EEPROM.write(74, D9C3);EEPROM.write(75, D9C4);EEPROM.write(76, D9C5);EEPROM.write(77, D9C6);pag=0;}
  }

   void increm_D10() {  
  if ((pag == 16) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 0)){D10C1++;}
  if ((pag == 16) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 0)){D10C1--;}
  if (D10C1 > risolution) {D10C1 = 0;}
  if (D10C1 < 0) {D10C1 = risolution;}
  if ((pag == 16) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 1)){D10C2++;}
  if ((pag == 16) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 1)){D10C2--;}
  if (D10C1 > risolution) {D10C1 = 0;}
  if (D10C1 < 0) {D10C1 = risolution;}
  if ((pag == 16) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 2)){D10C3++;}
  if ((pag == 16) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 2)){D10C3--;}
  if (D10C3 > risolution) {D10C3 = 0;}
  if (D10C3 < 0) {D10C3 = risolution;}
  if ((pag == 16) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 3)){D10C4++;}
  if ((pag == 16) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 3)){D10C4--;}
  if (D10C4 > risolution) {D10C4 = 0;}
  if (D10C4 < 0) {D10C4 = risolution;}
  if ((pag == 16) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 4)){D10C5++;}
  if ((pag == 16) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 4)){D10C5--;}
  if (D10C5 > risolution) {D10C5 = 0;}
  if (D10C5 < 0) {D10C5 = risolution;}
  if ((pag == 16) && (refr2 == 1 ) && (puls2 == 1) && (Cursor == 5)){D10C6++;}
  if ((pag == 16) && (refr2 == 1 ) && (puls3 == 1) && (Cursor == 5)){D10C6--;}
  if (D10C6 > risolution) {D10C6 = 0;}
  if (D10C6 < 0) {D10C6 = risolution;}  
  if (D10C1 > D10C2){(D10C2 = D10C1);}
  if (D10C2 > D10C3){(D10C3 = D10C2);}
  if (D10C3 > D10C4){(D10C4 = D10C3);}
  if (D10C4 > D10C5){(D10C5 = D10C4);}
  if (D10C5 > D10C6){(D10C6 = D10C5);}
  if ((pag == 16) && (puls1 == 1)){EEPROM.write(78, D10C1);EEPROM.write(79, D10C2);EEPROM.write(80, D10C3);EEPROM.write(81, D10C4);EEPROM.write(82, D10C5);EEPROM.write(83, D10C6);pag=0;}
  }
  
  void incr_val_ciclo() { 
  if ((pagciclo == 1) && (refr2 == 1 ) && (puls2 == 1)){ciclo = ciclo + 10;}
  if ((pagciclo == 1) && (refr2 == 1 ) && (puls3 == 1)){ciclo = ciclo - 10;}
  if (ciclo > 1000) {ciclo = 0;}
  if (ciclo < 0) {ciclo = 1000;} 
  if ((pagciclo == 1) && (puls1 == 1)){EEPROM.write(100, ciclo/4); pagciclo = 0; delay(2000);pag =0;}
  }
 void incr_val_default() { 
  if ((pagdefault == 1) && (refr2 == 1 ) && (puls2 == 1)){incrdefault++;}
  if ((pagdefault == 1) && (refr2 == 1 ) && (puls3 == 1)){incrdefault--;}
  if (incrdefault == 2) {incrdefault = 0;}
  if (incrdefault < 0) {incrdefault = 1;} 
  
  // ______________________________________________________Enter the default values ​​to reset to initial values_________________________________________________________________________________
  
  if ((pagdefault == 1) && (incrdefault == 1) && (puls1 == 1))     {EEPROM.write(0, 25);delay(10);EEPROM.write(1, 33);delay(10);EEPROM.write(2, 70);delay(10);EEPROM.write(3, 79);delay(10);
                                                                    EEPROM.write(4, 83);delay(10);EEPROM.write(5, 87);delay(10);EEPROM.write(6, 12);delay(10);EEPROM.write(7, 20);delay(10);
                                                                    EEPROM.write(8, 20);delay(10);EEPROM.write(9, 40);delay(10);EEPROM.write(10, 60);delay(10);EEPROM.write(11, 80);delay(10);
                                                                    EEPROM.write(12, 30);delay(10);EEPROM.write(13, 50);delay(10);EEPROM.write(14, 70);delay(10);EEPROM.write(15, 90);delay(10);
                                                                    EEPROM.write(16, 40);delay(10);EEPROM.write(17, 60);delay(10);EEPROM.write(18, 80);delay(10);EEPROM.write(19, 100);delay(10);
                                                                    EEPROM.write(20, 50);delay(10);EEPROM.write(21, 70);delay(10);EEPROM.write(22, 90);delay(10);EEPROM.write(23, 100);delay(10);
                                                                    
      EEPROM.write(24, 0);delay(10);EEPROM.write(25, 4);delay(10);EEPROM.write(26, 8);delay(10);EEPROM.write(27, 12);delay(10);EEPROM.write(28, 16);delay(10);EEPROM.write(29, 20);delay(10);
      EEPROM.write(30, 24);delay(10);EEPROM.write(31, 30);delay(10);EEPROM.write(32, 34);delay(10);EEPROM.write(33, 38);delay(10);EEPROM.write(34, 42);delay(10);EEPROM.write(35, 46);delay(10);
      EEPROM.write(36, 2);delay(10);EEPROM.write(37, 6);delay(10);EEPROM.write(38, 10);delay(10);EEPROM.write(39, 14);delay(10);EEPROM.write(40, 18);delay(10);EEPROM.write(41, 22);delay(10);
      EEPROM.write(42, 26);delay(10);EEPROM.write(43, 30);delay(10);EEPROM.write(44, 34);delay(10);EEPROM.write(45, 38);delay(10);EEPROM.write(46, 42);delay(10);EEPROM.write(47, 64);delay(10);
      EEPROM.write(48, 68);delay(10);EEPROM.write(49, 70);delay(10);EEPROM.write(50, 72);delay(10);EEPROM.write(51, 74);delay(10);EEPROM.write(52, 76);delay(10);EEPROM.write(53, 78);delay(10);
      EEPROM.write(54, 80);delay(10);EEPROM.write(55, 82);delay(10);EEPROM.write(56, 84);delay(10);EEPROM.write(57, 86);delay(10);EEPROM.write(58, 88);delay(10);EEPROM.write(59, 90);delay(10);
      EEPROM.write(60, 2);delay(10);EEPROM.write(61, 6);delay(10);EEPROM.write(62, 10);delay(10);EEPROM.write(63, 14);delay(10);EEPROM.write(64, 18);delay(10);EEPROM.write(65, 22);delay(10);
      EEPROM.write(66, 26);delay(10);EEPROM.write(67, 30);delay(10);EEPROM.write(68, 34);delay(10);EEPROM.write(69, 38);delay(10);EEPROM.write(70, 42);delay(10);EEPROM.write(71, 64);delay(10);
      EEPROM.write(72, 68);delay(10);EEPROM.write(73, 70);delay(10);EEPROM.write(74, 72);delay(10);EEPROM.write(75, 74);delay(10);EEPROM.write(76, 76);delay(10);EEPROM.write(77, 78);delay(10);
      EEPROM.write(78, 80);delay(10);EEPROM.write(79, 82);delay(10);EEPROM.write(80, 84);delay(10);EEPROM.write(81, 86);delay(10);EEPROM.write(82, 88);delay(10);EEPROM.write(83, 90);delay(10);
      EEPROM.write(100, 45);delay(10);
      incrdefault = 0; ok = 1; } // Reset di arduino >Riavvia();<

    
    }
 
  void pag_0(){
  if (refr2 == 1){
  lcd.clear();    
  lcd.setCursor(0,0);
  lcd.print("Cycle ");
  lcd.print(C0);       
  lcd.print(":");  
  lcd.print(ciclo);
  lcd.print("s");
  lcd.setCursor(0,1);
  lcd.write(byte(alev1));
  lcd.setCursor(1,1);
  lcd.write(byte(alev2));
  lcd.setCursor(2,1);
  lcd.write(byte(alev3));
  lcd.setCursor(3,1);
  lcd.write(byte(alev4));
  lcd.setCursor(4,1);
  lcd.write(byte(alev5)); 
  lcd.setCursor(5,1);
  lcd.write(byte(alev6));
  //lcd.print(Afad1);
  lcd.setCursor(6,1);     
  lcd.print(outD1);
  lcd.setCursor(7,1);     
  lcd.print(outD2);
  lcd.setCursor(8,1);     
  lcd.print(outD3);
  lcd.setCursor(9,1);     
  lcd.print(outD4);
  lcd.setCursor(10,1);     
  lcd.print(outD5);
  lcd.setCursor(11,1);     
  lcd.print(outD6);
  lcd.setCursor(12,1);     
  lcd.print(outD7);
  lcd.setCursor(13,1);     
  lcd.print(outD8);
  lcd.setCursor(14,1);     
  lcd.print(outD9);
  lcd.setCursor(15,1);     
  lcd.print(outD10);
  
  }}

void pag_A1(){
  if (refr2 == 1){
  lcd.clear();
  lcd.setCursor(0,0);
  if ((blik == 1)) {lcd.print("A1");} 
  lcd.setCursor(2,0);   
  lcd.print(" ");  
  lcd.setCursor(3,0);   
  lcd.print("S ");  
  lcd.setCursor(5,0); 
  if ((Cursor2 == 0) && (blik == 1)) {lcd.print(A1C1);}
  if ((Cursor2 != 0)) {lcd.print(A1C1);}
  lcd.setCursor(8,0);   
  lcd.print(" ");  
  lcd.setCursor(9,0);
  if ((Cursor2 == 2) && (blik == 1)) {lcd.print(A1C3);}
  if ((Cursor2 != 2)) {lcd.print(A1C3);}      
  lcd.setCursor(3,1);   
  lcd.print("R"); 
  lcd.setCursor(5,1); 
  if ((Cursor2 == 1) && (blik == 1)) {lcd.print(A1C2);}
  if ((Cursor2 != 1)) {lcd.print(A1C2);}
  lcd.setCursor(8,1);   
  lcd.print(" ");  
  lcd.setCursor(9,1);
  if ((Cursor2 == 3) && (blik == 1)) {lcd.print(A1C4);}
  if ((Cursor2 != 3)) {lcd.print(A1C4);}
  }}

void pag_A2(){
  if (refr2 == 1){
  lcd.clear();
  lcd.setCursor(0,0);
  if ((blik == 1)) {lcd.print("A2");}
  lcd.setCursor(2,0);   
  lcd.print(" ");  
  lcd.setCursor(3,0);   
  lcd.print("S ");  
  lcd.setCursor(5,0); 
  if ((Cursor2 == 0) && (blik == 1)) {lcd.print(A2C1);}
  if ((Cursor2 != 0)) {lcd.print(A2C1);}
  lcd.setCursor(8,0);   
  lcd.print(" ");  
  lcd.setCursor(9,0);
  if ((Cursor2 == 2) && (blik == 1)) {lcd.print(A2C3);}
  if ((Cursor2 != 2)) {lcd.print(A2C3);}  
  lcd.setCursor(3,1);   
  lcd.print("R"); 
  lcd.setCursor(5,1); 
  if ((Cursor2 == 1) && (blik == 1)) {lcd.print(A2C2);}
  if ((Cursor2 != 1)) {lcd.print(A2C2);}
  lcd.setCursor(8,1);   
  lcd.print(" ");  
  lcd.setCursor(9,1);
  if ((Cursor2 == 3) && (blik == 1)) {lcd.print(A2C4);}
  if ((Cursor2 != 3)) {lcd.print(A2C4);}
  }}

void pag_A3(){
  if (refr2 == 1){
  lcd.clear();
  lcd.setCursor(0,0);
  if ((blik == 1)) {lcd.print("A3");}
  lcd.setCursor(2,0);   
  lcd.print(" ");  
  lcd.setCursor(3,0);   
  lcd.print("S ");  
  lcd.setCursor(5,0); 
  if ((Cursor2 == 0) && (blik == 1)) {lcd.print(A3C1);}
  if ((Cursor2 != 0)) {lcd.print(A3C1);}
  lcd.setCursor(8,0);   
  lcd.print(" ");  
  lcd.setCursor(9,0);
  if ((Cursor2 == 2) && (blik == 1)) {lcd.print(A3C3);}
  if ((Cursor2 != 2)) {lcd.print(A3C3);}  
  lcd.setCursor(3,1);   
  lcd.print("R"); 
  lcd.setCursor(5,1); 
  if ((Cursor2 == 1) && (blik == 1)) {lcd.print(A3C2);}
  if ((Cursor2 != 1)) {lcd.print(A3C2);}
  lcd.setCursor(8,1);   
  lcd.print(" ");  
  lcd.setCursor(9,1);
  if ((Cursor2 == 3) && (blik == 1)) {lcd.print(A3C4);}
  if ((Cursor2 != 3)) {lcd.print(A3C4);}
}}

void pag_A4(){
  if (refr2 == 1){
  lcd.clear();
  lcd.setCursor(0,0);
  if ((blik == 1)) {lcd.print("A4");}
  lcd.setCursor(2,0);   
  lcd.print(" ");  
  lcd.setCursor(3,0);   
  lcd.print("S ");  
  lcd.setCursor(5,0); 
  if ((Cursor2 == 0) && (blik == 1)) {lcd.print(A4C1);}
  if ((Cursor2 != 0)) {lcd.print(A4C1);}
  lcd.setCursor(8,0);   
  lcd.print(" ");  
  lcd.setCursor(9,0);
  if ((Cursor2 == 2) && (blik == 1)) {lcd.print(A4C3);}
  if ((Cursor2 != 2)) {lcd.print(A4C3);}  
  lcd.setCursor(3,1);   
  lcd.print("R"); 
  lcd.setCursor(5,1); 
  if ((Cursor2 == 1) && (blik == 1)) {lcd.print(A4C2);}
  if ((Cursor2 != 1)) {lcd.print(A4C2);}
  lcd.setCursor(8,1);   
  lcd.print(" ");  
  lcd.setCursor(9,1);
  if ((Cursor2 == 3) && (blik == 1)) {lcd.print(A4C4);}
  if ((Cursor2 != 3)) {lcd.print(A4C4);}
}}

void pag_A5(){
  if (refr2 == 1){
  lcd.clear();
  lcd.setCursor(0,0);
  if ((blik == 1)) {lcd.print("A5");}
  lcd.setCursor(2,0);   
  lcd.print(" ");  
  lcd.setCursor(3,0);   
  lcd.print("S ");  
  lcd.setCursor(5,0); 
  if ((Cursor2 == 0) && (blik == 1)) {lcd.print(A5C1);}
  if ((Cursor2 != 0)) {lcd.print(A5C1);}
  lcd.setCursor(8,0);   
  lcd.print(" ");  
  lcd.setCursor(9,0);
  if ((Cursor2 == 2) && (blik == 1)) {lcd.print(A5C3);}
  if ((Cursor2 != 2)) {lcd.print(A5C3);}  
  lcd.setCursor(3,1);   
  lcd.print("R"); 
  lcd.setCursor(5,1); 
  if ((Cursor2 == 1) && (blik == 1)) {lcd.print(A5C2);}
  if ((Cursor2 != 1)) {lcd.print(A5C2);}
  lcd.setCursor(8,1);   
  lcd.print(" ");  
  lcd.setCursor(9,1);
  if ((Cursor2 == 3) && (blik == 1)) {lcd.print(A5C4);}
  if ((Cursor2 != 3)) {lcd.print(A5C4);}
}}

void pag_A6(){
  if (refr2 == 1){
 lcd.clear();
  lcd.setCursor(0,0);
  if ((blik == 1)) {lcd.print("A6");} 
  lcd.setCursor(2,0);   
  lcd.print(" ");  
  lcd.setCursor(3,0);   
  lcd.print("S ");  
  lcd.setCursor(5,0); 
  if ((Cursor2 == 0) && (blik == 1)) {lcd.print(A6C1);}
  if ((Cursor2 != 0)) {lcd.print(A6C1);}
  lcd.setCursor(8,0);   
  lcd.print(" ");  
  lcd.setCursor(9,0);
  if ((Cursor2 == 2) && (blik == 1)) {lcd.print(A6C3);}
  if ((Cursor2 != 2)) {lcd.print(A6C3);}  
  lcd.setCursor(3,1);   
  lcd.print("R"); 
  lcd.setCursor(5,1); 
  if ((Cursor2 == 1) && (blik == 1)) {lcd.print(A6C2);}
  if ((Cursor2 != 1)) {lcd.print(A6C2);}
  lcd.setCursor(8,1);   
  lcd.print(" ");  
  lcd.setCursor(9,1);
  if ((Cursor2 == 3) && (blik == 1)) {lcd.print(A6C4);}
  if ((Cursor2 != 3)) {lcd.print(A6C4);}
}}
  
  void pag_D1(){
  if (refr2 == 1){
  lcd.clear();
  lcd.setCursor(0,0);
  if ((blik == 1)) {lcd.print("D1");}    
  lcd.setCursor(2,0);   
  lcd.print(" ");  
  lcd.setCursor(3,0);   
  lcd.print("S ");  
  lcd.setCursor(5,0); 
  if ((Cursor == 0) && (blik == 1)) {lcd.print(D1C1);}
  if ((Cursor != 0)) {lcd.print(D1C1);}
  lcd.setCursor(8,0);   
  lcd.print(" ");  
  lcd.setCursor(9,0);
  if ((Cursor == 2) && (blik == 1)) {lcd.print(D1C3);}
  if ((Cursor != 2)) {lcd.print(D1C3);}
  lcd.setCursor(12,0);   
  lcd.print(" ");  
  lcd.setCursor(13,0);
  if ((Cursor == 4) && (blik == 1)) {lcd.print(D1C5);}
  if ((Cursor != 4)) {lcd.print(D1C5);}  
  lcd.setCursor(3,1);   
  lcd.print("R"); 
  lcd.setCursor(5,1); 
  if ((Cursor == 1) && (blik == 1)) {lcd.print(D1C2);}
  if ((Cursor != 1)) {lcd.print(D1C2);}
  lcd.setCursor(8,1);   
  lcd.print(" ");  
  lcd.setCursor(9,1);
  if ((Cursor == 3) && (blik == 1)) {lcd.print(D1C4);}
  if ((Cursor != 3)) {lcd.print(D1C4);}
  lcd.setCursor(12,1);   
  lcd.print(" ");  
  lcd.setCursor(13,1);
  if ((Cursor == 5) && (blik == 1)) {lcd.print(D1C6);}
  if ((Cursor != 5)) {lcd.print(D1C6);}
  }}

void pag_D2(){
  if (refr2 == 1){
  lcd.clear();
  lcd.setCursor(0,0);
  if ((blik == 1)) {lcd.print("D2");}
  lcd.setCursor(2,0);   
  lcd.print(" ");  
  lcd.setCursor(3,0);   
  lcd.print("S ");  
  lcd.setCursor(5,0); 
  if ((Cursor == 0) && (blik == 1)) {lcd.print(D2C1);}
  if ((Cursor != 0)) {lcd.print(D2C1);}
  lcd.setCursor(8,0);   
  lcd.print(" ");  
  lcd.setCursor(9,0);
  if ((Cursor == 2) && (blik == 1)) {lcd.print(D2C3);}
  if ((Cursor != 2)) {lcd.print(D2C3);}
  lcd.setCursor(12,0);   
  lcd.print(" ");  
  lcd.setCursor(13,0);
  if ((Cursor == 4) && (blik == 1)) {lcd.print(D2C5);}
  if ((Cursor != 4)) {lcd.print(D2C5);}  
  lcd.setCursor(3,1);   
  lcd.print("R"); 
  lcd.setCursor(5,1); 
  if ((Cursor == 1) && (blik == 1)) {lcd.print(D2C2);}
  if ((Cursor != 1)) {lcd.print(D2C2);}
  lcd.setCursor(8,1);   
  lcd.print(" ");  
  lcd.setCursor(9,1);
  if ((Cursor == 3) && (blik == 1)) {lcd.print(D2C4);}
  if ((Cursor != 3)) {lcd.print(D2C4);}
  lcd.setCursor(12,1);   
  lcd.print(" ");  
  lcd.setCursor(13,1);
  if ((Cursor == 5) && (blik == 1)) {lcd.print(D2C6);}
  if ((Cursor != 5)) {lcd.print(D2C6);}
}}

void pag_D3(){
  if (refr2 == 1){
  lcd.clear();
  lcd.setCursor(0,0);
  if ((blik == 1)) {lcd.print("D3");}
  lcd.setCursor(2,0);   
  lcd.print(" ");  
  lcd.setCursor(3,0);   
  lcd.print("S ");  
  lcd.setCursor(5,0); 
  if ((Cursor == 0) && (blik == 1)) {lcd.print(D3C1);}
  if ((Cursor != 0)) {lcd.print(D3C1);}
  lcd.setCursor(8,0);   
  lcd.print(" ");  
  lcd.setCursor(9,0);
  if ((Cursor == 2) && (blik == 1)) {lcd.print(D3C3);}
  if ((Cursor != 2)) {lcd.print(D3C3);}
  lcd.setCursor(12,0);   
  lcd.print(" ");  
  lcd.setCursor(13,0);
  if ((Cursor == 4) && (blik == 1)) {lcd.print(D3C5);}
  if ((Cursor != 4)) {lcd.print(D3C5);}  
  lcd.setCursor(3,1);   
  lcd.print("R"); 
  lcd.setCursor(5,1); 
  if ((Cursor == 1) && (blik == 1)) {lcd.print(D3C2);}
  if ((Cursor != 1)) {lcd.print(D3C2);}
  lcd.setCursor(8,1);   
  lcd.print(" ");  
  lcd.setCursor(9,1);
  if ((Cursor == 3) && (blik == 1)) {lcd.print(D3C4);}
  if ((Cursor != 3)) {lcd.print(D3C4);}
  lcd.setCursor(12,1);   
  lcd.print(" ");  
  lcd.setCursor(13,1);
  if ((Cursor == 5) && (blik == 1)) {lcd.print(D3C6);}
  if ((Cursor != 5)) {lcd.print(D3C6);}
}}
void pag_D4(){
  if (refr2 == 1){
  lcd.clear();
  lcd.setCursor(0,0);
  if ((blik == 1)) {lcd.print("D4");}
  lcd.setCursor(2,0);   
  lcd.print(" ");  
  lcd.setCursor(3,0);   
  lcd.print("S ");  
  lcd.setCursor(5,0); 
  if ((Cursor == 0) && (blik == 1)) {lcd.print(D4C1);}
  if ((Cursor != 0)) {lcd.print(D4C1);}
  lcd.setCursor(8,0);   
  lcd.print(" ");  
  lcd.setCursor(9,0);
  if ((Cursor == 2) && (blik == 1)) {lcd.print(D4C3);}
  if ((Cursor != 2)) {lcd.print(D4C3);}
  lcd.setCursor(12,0);   
  lcd.print(" ");  
  lcd.setCursor(13,0);
  if ((Cursor == 4) && (blik == 1)) {lcd.print(D4C5);}
  if ((Cursor != 4)) {lcd.print(D4C5);}  
  lcd.setCursor(3,1);   
  lcd.print("R"); 
  lcd.setCursor(5,1); 
  if ((Cursor == 1) && (blik == 1)) {lcd.print(D4C2);}
  if ((Cursor != 1)) {lcd.print(D4C2);}
  lcd.setCursor(8,1);   
  lcd.print(" ");  
  lcd.setCursor(9,1);
  if ((Cursor == 3) && (blik == 1)) {lcd.print(D4C4);}
  if ((Cursor != 3)) {lcd.print(D4C4);}
  lcd.setCursor(12,1);   
  lcd.print(" ");  
  lcd.setCursor(13,1);
  if ((Cursor == 5) && (blik == 1)) {lcd.print(D4C6);}
  if ((Cursor != 5)) {lcd.print(D4C6);}
}}

void pag_D5(){
  if (refr2 == 1){
  lcd.clear();
  lcd.setCursor(0,0);
  if ((blik == 1)) {lcd.print("D5");}
  lcd.setCursor(2,0);   
  lcd.print(" ");  
  lcd.setCursor(3,0);   
  lcd.print("S ");  
  lcd.setCursor(5,0); 
  if ((Cursor == 0) && (blik == 1)) {lcd.print(D5C1);}
  if ((Cursor != 0)) {lcd.print(D5C1);}
  lcd.setCursor(8,0);   
  lcd.print(" ");  
  lcd.setCursor(9,0);
  if ((Cursor == 2) && (blik == 1)) {lcd.print(D5C3);}
  if ((Cursor != 2)) {lcd.print(D5C3);}
  lcd.setCursor(12,0);   
  lcd.print(" ");  
  lcd.setCursor(13,0);
  if ((Cursor == 4) && (blik == 1)) {lcd.print(D5C5);}
  if ((Cursor != 4)) {lcd.print(D5C5);}  
  lcd.setCursor(3,1);   
  lcd.print("R"); 
  lcd.setCursor(5,1); 
  if ((Cursor == 1) && (blik == 1)) {lcd.print(D5C2);}
  if ((Cursor != 1)) {lcd.print(D5C2);}
  lcd.setCursor(8,1);   
  lcd.print(" ");  
  lcd.setCursor(9,1);
  if ((Cursor == 3) && (blik == 1)) {lcd.print(D5C4);}
  if ((Cursor != 3)) {lcd.print(D5C4);}
  lcd.setCursor(12,1);   
  lcd.print(" ");  
  lcd.setCursor(13,1);
  if ((Cursor == 5) && (blik == 1)) {lcd.print(D5C6);}
  if ((Cursor != 5)) {lcd.print(D5C6);}
}}
void pag_D6(){
  if (refr2 == 1){
  lcd.clear();
  lcd.setCursor(0,0);
  if ((blik == 1)) {lcd.print("D6");}
  lcd.setCursor(2,0);   
  lcd.print(" ");  
  lcd.setCursor(3,0);   
  lcd.print("S ");  
  lcd.setCursor(5,0); 
  if ((Cursor == 0) && (blik == 1)) {lcd.print(D6C1);}
  if ((Cursor != 0)) {lcd.print(D6C1);}
  lcd.setCursor(8,0);   
  lcd.print(" ");  
  lcd.setCursor(9,0);
  if ((Cursor == 2) && (blik == 1)) {lcd.print(D6C3);}
  if ((Cursor != 2)) {lcd.print(D6C3);}
  lcd.setCursor(12,0);   
  lcd.print(" ");  
  lcd.setCursor(13,0);
  if ((Cursor == 4) && (blik == 1)) {lcd.print(D6C5);}
  if ((Cursor != 4)) {lcd.print(D6C5);}  
  lcd.setCursor(3,1);   
  lcd.print("R"); 
  lcd.setCursor(5,1); 
  if ((Cursor == 1) && (blik == 1)) {lcd.print(D6C2);}
  if ((Cursor != 1)) {lcd.print(D6C2);}
  lcd.setCursor(8,1);   
  lcd.print(" ");  
  lcd.setCursor(9,1);
  if ((Cursor == 3) && (blik == 1)) {lcd.print(D6C4);}
  if ((Cursor != 3)) {lcd.print(D6C4);}
  lcd.setCursor(12,1);   
  lcd.print(" ");  
  lcd.setCursor(13,1);
  if ((Cursor == 5) && (blik == 1)) {lcd.print(D6C6);}
  if ((Cursor != 5)) {lcd.print(D6C6);}
}}

void pag_D7(){
  if (refr2 == 1){
  lcd.clear();
  lcd.setCursor(0,0);
  if ((blik == 1)) {lcd.print("D7");}
  lcd.setCursor(2,0);   
  lcd.print(" ");  
  lcd.setCursor(3,0);   
  lcd.print("S ");  
  lcd.setCursor(5,0); 
  if ((Cursor == 0) && (blik == 1)) {lcd.print(D7C1);}
  if ((Cursor != 0)) {lcd.print(D7C1);}
  lcd.setCursor(8,0);   
  lcd.print(" ");  
  lcd.setCursor(9,0);
  if ((Cursor == 2) && (blik == 1)) {lcd.print(D7C3);}
  if ((Cursor != 2)) {lcd.print(D7C3);}
  lcd.setCursor(12,0);   
  lcd.print(" ");  
  lcd.setCursor(13,0);
  if ((Cursor == 4) && (blik == 1)) {lcd.print(D7C5);}
  if ((Cursor != 4)) {lcd.print(D7C5);}  
  lcd.setCursor(3,1);   
  lcd.print("R"); 
  lcd.setCursor(5,1); 
  if ((Cursor == 1) && (blik == 1)) {lcd.print(D7C2);}
  if ((Cursor != 1)) {lcd.print(D7C2);}
  lcd.setCursor(8,1);   
  lcd.print(" ");  
  lcd.setCursor(9,1);
  if ((Cursor == 3) && (blik == 1)) {lcd.print(D7C4);}
  if ((Cursor != 3)) {lcd.print(D7C4);}
  lcd.setCursor(12,1);   
  lcd.print(" ");  
  lcd.setCursor(13,1);
  if ((Cursor == 5) && (blik == 1)) {lcd.print(D7C6);}
  if ((Cursor != 5)) {lcd.print(D7C6);}
}}

void pag_D8(){
  if (refr2 == 1){
  lcd.clear();
  lcd.setCursor(0,0);
  if ((blik == 1)) {lcd.print("D8");}
  lcd.setCursor(2,0);   
  lcd.print(" ");  
  lcd.setCursor(3,0);   
  lcd.print("S ");  
  lcd.setCursor(5,0); 
  if ((Cursor == 0) && (blik == 1)) {lcd.print(D8C1);}
  if ((Cursor != 0)) {lcd.print(D8C1);}
  lcd.setCursor(8,0);   
  lcd.print(" ");  
  lcd.setCursor(9,0);
  if ((Cursor == 2) && (blik == 1)) {lcd.print(D8C3);}
  if ((Cursor != 2)) {lcd.print(D8C3);}
  lcd.setCursor(12,0);   
  lcd.print(" ");  
  lcd.setCursor(13,0);
  if ((Cursor == 4) && (blik == 1)) {lcd.print(D8C5);}
  if ((Cursor != 4)) {lcd.print(D8C5);}  
  lcd.setCursor(3,1);   
  lcd.print("R"); 
  lcd.setCursor(5,1); 
  if ((Cursor == 1) && (blik == 1)) {lcd.print(D8C2);}
  if ((Cursor != 1)) {lcd.print(D8C2);}
  lcd.setCursor(8,1);   
  lcd.print(" ");  
  lcd.setCursor(9,1);
  if ((Cursor == 3) && (blik == 1)) {lcd.print(D8C4);}
  if ((Cursor != 3)) {lcd.print(D8C4);}
  lcd.setCursor(12,1);   
  lcd.print(" ");  
  lcd.setCursor(13,1);
  if ((Cursor == 5) && (blik == 1)) {lcd.print(D8C6);}
  if ((Cursor != 5)) {lcd.print(D8C6);}
}}

void pag_D9(){
  if (refr2 == 1){
  lcd.clear();
  lcd.setCursor(0,0);
  if ((blik == 1)) {lcd.print("D9");}
  lcd.setCursor(2,0);   
  lcd.print(" ");  
  lcd.setCursor(3,0);   
  lcd.print("S ");  
  lcd.setCursor(5,0); 
  if ((Cursor == 0) && (blik == 1)) {lcd.print(D9C1);}
  if ((Cursor != 0)) {lcd.print(D9C1);}
  lcd.setCursor(8,0);   
  lcd.print(" ");  
  lcd.setCursor(9,0);
  if ((Cursor == 2) && (blik == 1)) {lcd.print(D9C3);}
  if ((Cursor != 2)) {lcd.print(D9C3);}
  lcd.setCursor(12,0);   
  lcd.print(" ");  
  lcd.setCursor(13,0);
  if ((Cursor == 4) && (blik == 1)) {lcd.print(D9C5);}
  if ((Cursor != 4)) {lcd.print(D9C5);}  
  lcd.setCursor(3,1);   
  lcd.print("R"); 
  lcd.setCursor(5,1); 
  if ((Cursor == 1) && (blik == 1)) {lcd.print(D9C2);}
  if ((Cursor != 1)) {lcd.print(D9C2);}
  lcd.setCursor(8,1);   
  lcd.print(" ");  
  lcd.setCursor(9,1);
  if ((Cursor == 3) && (blik == 1)) {lcd.print(D9C4);}
  if ((Cursor != 3)) {lcd.print(D9C4);}
  lcd.setCursor(12,1);   
  lcd.print(" ");  
  lcd.setCursor(13,1);
  if ((Cursor == 5) && (blik == 1)) {lcd.print(D9C6);}
  if ((Cursor != 5)) {lcd.print(D9C6);}
}}

void pag_D10(){
  if (refr2 == 1){
  lcd.clear();
  lcd.setCursor(0,0);
  if ((blik == 1)) {lcd.print("D10");}
  lcd.setCursor(2,0);   
  lcd.print("");  
  lcd.setCursor(3,0);   
  lcd.print("S ");  
  lcd.setCursor(5,0); 
  if ((Cursor == 0) && (blik == 1)) {lcd.print(D10C1);}
  if ((Cursor != 0)) {lcd.print(D10C1);}
  lcd.setCursor(8,0);   
  lcd.print(" ");  
  lcd.setCursor(9,0);
  if ((Cursor == 2) && (blik == 1)) {lcd.print(D10C3);}
  if ((Cursor != 2)) {lcd.print(D10C3);}
  lcd.setCursor(12,0);   
  lcd.print(" ");  
  lcd.setCursor(13,0);
  if ((Cursor == 4) && (blik == 1)) {lcd.print(D10C5);}
  if ((Cursor != 4)) {lcd.print(D10C5);}  
  lcd.setCursor(3,1);   
  lcd.print("R"); 
  lcd.setCursor(5,1); 
  if ((Cursor == 1) && (blik == 1)) {lcd.print(D10C2);}
  if ((Cursor != 1)) {lcd.print(D10C2);}
  lcd.setCursor(8,1);   
  lcd.print(" ");  
  lcd.setCursor(9,1);
  if ((Cursor == 3) && (blik == 1)) {lcd.print(D10C4);}
  if ((Cursor != 3)) {lcd.print(D10C4);}
  lcd.setCursor(12,1);   
  lcd.print(" ");  
  lcd.setCursor(13,1);
  if ((Cursor == 5) && (blik == 1)) {lcd.print(D10C6);}
  if ((Cursor != 5)) {lcd.print(D10C6);}
}}

void pag_ciclo(){
 if (refr2 == 1){
  lcd.clear();
  lcd.setCursor(0,0);
  if ((blik == 1)) {lcd.print("cycle in seconds");} 
  lcd.setCursor(6,1);  
  lcd.print(ciclo);
  if (puls4 == 1) {pag = 0; pagciclo = 0;}
  
}}

void pag_default(){
 if (refr2 == 1){
  lcd.clear();
  lcd.setCursor(0,0);
  if ((ok == 0)) {lcd.print("Default values?");lcd.setCursor(0,1);lcd.print("SI=1 NO=0 ");lcd.setCursor(11,1);lcd.print(incrdefault);}
  if ((ok == 1)) {lcd.print("Please wait I'm ");lcd.setCursor(0,1);lcd.print(" restoring");delay(3000);Riavvia();} 
  
   
  
  if (puls4 == 1) {pag = 0; pagdefault = 0;}
  
  
}}

void mappature(){
 MA1C1 = A1C1*ciclo/risolution;
 MA1C2 = A1C2*ciclo/risolution;
 MA1C3 = A1C3*ciclo/risolution;
 MA1C4 = A1C4*ciclo/risolution;
 //___________________
 MA2C1 = A2C1*ciclo/risolution;
 MA2C2 = A2C2*ciclo/risolution;
 MA2C3 = A2C3*ciclo/risolution;
 MA2C4 = A2C4*ciclo/risolution;
 //___________________
 MA3C1 = A3C1*ciclo/risolution;
 MA3C2 = A3C2*ciclo/risolution;
 MA3C3 = A3C3*ciclo/risolution;
 MA3C4 = A3C4*ciclo/risolution;
 //___________________
 MA4C1 = A4C1*ciclo/risolution;
 MA4C2 = A4C2*ciclo/risolution;
 MA4C3 = A4C3*ciclo/risolution;
 MA4C4 = A4C4*ciclo/risolution;
 //___________________
 MA5C1 = A5C1*ciclo/risolution;
 MA5C2 = A5C2*ciclo/risolution;
 MA5C3 = A5C3*ciclo/risolution;
 MA5C4 = A5C4*ciclo/risolution;
 //___________________
 MA6C1 = A6C1*ciclo/risolution;
 MA6C2 = A6C2*ciclo/risolution;
 MA6C3 = A6C3*ciclo/risolution;
 MA6C4 = A6C4*ciclo/risolution;
 //___________________  
 MD1C1 = D1C1*ciclo/risolution;
 MD1C2 = D1C2*ciclo/risolution;
 MD1C3 = D1C3*ciclo/risolution;
 MD1C4 = D1C4*ciclo/risolution;
 MD1C5 = D1C5*ciclo/risolution;
 MD1C6 = D1C6*ciclo/risolution;
 //___________________
 MD2C1 = D2C1*ciclo/risolution;
 MD2C2 = D2C2*ciclo/risolution;
 MD2C3 = D2C3*ciclo/risolution;
 MD2C4 = D2C4*ciclo/risolution;
 MD2C5 = D2C5*ciclo/risolution;
 MD2C6 = D2C6*ciclo/risolution;
 //___________________
 MD3C1 = D3C1*ciclo/risolution;
 MD3C2 = D3C2*ciclo/risolution;
 MD3C3 = D3C3*ciclo/risolution;
 MD3C4 = D3C4*ciclo/risolution;
 MD3C5 = D3C5*ciclo/risolution;
 MD3C6 = D3C6*ciclo/risolution;
 //___________________
 MD4C1 = D4C1*ciclo/risolution;
 MD4C2 = D4C2*ciclo/risolution;
 MD4C3 = D4C3*ciclo/risolution;
 MD4C4 = D4C4*ciclo/risolution;
 MD4C5 = D4C5*ciclo/risolution;
 MD4C6 = D4C6*ciclo/risolution;
 //___________________
 MD5C1 = D5C1*ciclo/risolution;
 MD5C2 = D5C2*ciclo/risolution;
 MD5C3 = D5C3*ciclo/risolution;
 MD5C4 = D5C4*ciclo/risolution;
 MD5C5 = D5C5*ciclo/risolution;
 MD5C6 = D5C6*ciclo/risolution;
 //___________________
 MD6C1 = D6C1*ciclo/risolution;
 MD6C2 = D6C2*ciclo/risolution;
 MD6C3 = D6C3*ciclo/risolution;
 MD6C4 = D6C4*ciclo/risolution;
 MD6C5 = D6C5*ciclo/risolution;
 MD6C6 = D6C6*ciclo/risolution;
 //___________________
 MD7C1 = D7C1*ciclo/risolution;
 MD7C2 = D7C2*ciclo/risolution;
 MD7C3 = D7C3*ciclo/risolution;
 MD7C4 = D7C4*ciclo/risolution;
 MD7C5 = D7C5*ciclo/risolution;
 MD7C6 = D7C6*ciclo/risolution;
 //___________________
 MD8C1 = D8C1*ciclo/risolution;
 MD8C2 = D8C2*ciclo/risolution;
 MD8C3 = D8C3*ciclo/risolution;
 MD8C4 = D8C4*ciclo/risolution;
 MD8C5 = D8C5*ciclo/risolution;
 MD8C6 = D8C6*ciclo/risolution;
 //___________________
 MD9C1 = D9C1*ciclo/risolution;
 MD9C2 = D9C2*ciclo/risolution;
 MD9C3 = D9C3*ciclo/risolution;
 MD9C4 = D9C4*ciclo/risolution;
 MD9C5 = D9C5*ciclo/risolution;
 MD9C6 = D9C6*ciclo/risolution;
 //___________________
 MD10C1 = D10C1*ciclo/risolution;
 MD10C2 = D10C2*ciclo/risolution;
 MD10C3 = D10C3*ciclo/risolution;
 MD10C4 = D10C4*ciclo/risolution;
 MD10C5 = D10C5*ciclo/risolution;
 MD10C6 = D10C6*ciclo/risolution;
}
void regole(){
  if (A1C1 == ciclo){A1C1 = ciclo - 1;}
  if (A1C2 == ciclo){A1C2 = ciclo - 1;}
  if (A1C3 == ciclo){A1C3 = ciclo - 1;}
  if (A1C4 == ciclo){A1C4 = ciclo - 1;}

  if (A2C1 == ciclo){A2C1 = ciclo - 1;}
  if (A2C2 == ciclo){A2C2 = ciclo - 1;}
  if (A2C3 == ciclo){A2C3 = ciclo - 1;}
  if (A2C4 == ciclo){A2C4 = ciclo - 1;}

  if (A3C1 == ciclo){A3C1 = ciclo - 1;}
  if (A3C2 == ciclo){A3C2 = ciclo - 1;}
  if (A3C3 == ciclo){A3C3 = ciclo - 1;}
  if (A3C4 == ciclo){A3C4 = ciclo - 1;}

  if (A4C1 == ciclo){A4C1 = ciclo - 1;}
  if (A4C2 == ciclo){A4C2 = ciclo - 1;}
  if (A4C3 == ciclo){A4C3 = ciclo - 1;}
  if (A4C4 == ciclo){A4C4 = ciclo - 1;}

  if (A5C1 == ciclo){A5C1 = ciclo - 1;}
  if (A5C2 == ciclo){A5C2 = ciclo - 1;}
  if (A5C3 == ciclo){A5C3 = ciclo - 1;}
  if (A5C4 == ciclo){A5C4 = ciclo - 1;}

  if (A6C1 == ciclo){A6C1 = ciclo - 1;}
  if (A6C2 == ciclo){A6C2 = ciclo - 1;}
  if (A6C3 == ciclo){A6C3 = ciclo - 1;}
  if (A6C4 == ciclo){A6C4 = ciclo - 1;}
}

void loop() {
  if (pag ==0){Cursor = 0; Cursor2 = 0;}
  
  if (Afad1 < 0){Afad1 = 0;}
  if (Afad2 < 0){Afad2 = 0;}
  if (Afad3 < 0){Afad3 = 0;}
  if (Afad4 < 0){Afad4 = 0;}
  if (Afad5 < 0){Afad5 = 0;}
  if (Afad6 < 0){Afad6 = 0;}
  //___________________
  analogWrite(Ana1, Afad1);
  analogWrite(Ana2, Afad2);
  analogWrite(Ana3, Afad3);
  analogWrite(Ana4, Afad4);
  analogWrite(Ana5, Afad5);
  analogWrite(Ana6, Afad6);
 
  if (outD1 == 1){digitalWrite(Dig1, HIGH);} else {digitalWrite(Dig1, LOW);}
  if (outD2 == 1){digitalWrite(Dig2, HIGH);} else {digitalWrite(Dig2, LOW);}
  if (outD3 == 1){digitalWrite(Dig3, HIGH);} else {digitalWrite(Dig3, LOW);}
  if (outD4 == 1){digitalWrite(Dig4, HIGH);} else {digitalWrite(Dig4, LOW);}
  if (outD5 == 1){digitalWrite(Dig5, HIGH);} else {digitalWrite(Dig5, LOW);}
  if (outD6 == 1){digitalWrite(Dig6, HIGH);} else {digitalWrite(Dig6, LOW);}
  if (outD7 == 1){digitalWrite(Dig7, HIGH);} else {digitalWrite(Dig7, LOW);}
  if (outD8 == 1){digitalWrite(Dig8, HIGH);} else {digitalWrite(Dig8, LOW);}
  if (outD9 == 1){digitalWrite(Dig9, HIGH);} else {digitalWrite(Dig9, LOW);}
  if (outD10 == 1){digitalWrite(Dig10, HIGH);} else {digitalWrite(Dig10, LOW);}
  
  if ((puls1 == 1) || (puls2 == 1) ||(puls3 == 1) ||(puls4 == 1) ||(puls5 == 1)) {digitalWrite( pin_BL, HIGH);pm3 = millis();}
  if (refr3 == 1) {digitalWrite(pin_BL, LOW);  pag = 0;}

  
  if (puls4 == 1 && (refr2 == 1 )) {Cursor++;}
  if (Cursor > 5){Cursor = 0;}
 

 if (puls4 == 1 && (refr2 == 1 )) {Cursor2++;}
  if (Cursor2 > 3){Cursor2 = 0;}
  
  if (millis() - pm0 > intervallo0) {pm0 = millis();refr0 = 1;}
  else {refr0 = 0;}  
 if (millis() - pm1 > intervallo1) {pm1 = millis();refr1 = 1;}
  else {refr1 = 0;}
  if (millis() - pm2 > intervallo2) {pm2 = millis();refr2 = 1;}
  else {refr2 = 0;}
  if (millis() - pm3 > intervallo3) {pm3 = millis();refr3 = 1;}
  else {refr3 = 0;}
  
  incrementi_pagine();
  increm_A1();
  increm_A2();
  increm_A3();
  increm_A4();
  increm_A5();
  increm_A6();
  increm_D1();
  increm_D2();
  increm_D3();
  increm_D4();
  increm_D5();
  increm_D6();
  increm_D7();
  increm_D8();
  increm_D9();
  increm_D10();
  regole();
  mappature();
  caratpers();
  incr_val_ciclo();
  incr_val_default();

  
  if (pag == 0) {pag_0();}
  if (pag == 1) {pag_A1();}
  if (pag == 2) {pag_A2();}
  if (pag == 3) {pag_A3();}
  if (pag == 4) {pag_A4();}
  if (pag == 5) {pag_A5();}
  if (pag == 6) {pag_A6();}
  if (pag == 7) {pag_D1();}
  if (pag == 8) {pag_D2();}
  if (pag == 9) {pag_D3();}
  if (pag == 10) {pag_D4();}
  if (pag == 11) {pag_D5();}
  if (pag == 12) {pag_D6();}
  if (pag == 13) {pag_D7();}
  if (pag == 14) {pag_D8();}
  if (pag == 15) {pag_D9();}
  if (pag == 16) {pag_D10();}
  if (pagciclo == 1) {pag_ciclo();}
  if (pagdefault == 1) {pag_default();}    
  if (refr1 == 1){C0++;}
  if (C0 >= ciclo) {C0=0;}  
  
  if (refr0 == 1){blik++;}
  if (blik > 1) {blik = 0;}
  if ((analogRead(A0) == 0) && (analogRead(A0) < 60)) {puls1 = 1;} else {puls1 = 0;}
  if ((analogRead(A0) > 60) && (analogRead(A0) < 200)) {puls2 = 1;} else {puls2 = 0;}
  if ((analogRead(A0) > 200) && (analogRead(A0) < 400)) {puls3 = 1;} else {puls3 = 0;}
  if ((analogRead(A0) > 400) && (analogRead(A0) < 600)) {puls4 = 1;} else {puls4 = 0;}
  if ((analogRead(A0) > 600) && (analogRead(A0) < 800)) {puls5 = 1;} else {puls5 = 0;}

  //________________________OUT ANALOG___________________________________________________________________________
  
  //________________________A1______________________
  if (C0 == MA1C1){aa1 = 1;}
  if (C0 == MA1C2){aa1 = 0;}    
  if ((aa1 == 1) && (refr1 == 1)) {fad1++;}
  if (C0 == MA1C3){aa2 = 1; fad1 = aa3;}
  if (C0 == MA1C4){aa2 = 0;}    
  
  if ((aa2 == 1) && (refr1 == 1)){fad1--;}  
  if ((aa1 == 1) && (aa2 == 0)) {aa3 =MA1C2-MA1C1;}
  
  if ((aa2 == 1) && (aa1 == 0) && (MA1C4 > MA1C3)) {aa3 = MA1C4-MA1C3-1;}
  if ((aa2 == 1) && (aa1 == 0) && (MA1C3 > MA1C4)) {aa3 = ciclo - MA1C3 + MA1C4 - 1;}
  Afad1 = map(fad1,0,aa3,0,255);

  //________________________A2______________________
  if (C0 == MA2C1){ba1 = 1;}
  if (C0 == MA2C2){ba1 = 0;}    
  if ((ba1 == 1) && (refr1 == 1)) {fad2++;}
  if (C0 == MA2C3){ba2 = 1; fad2 = ba3;}
  if (C0 == MA2C4){ba2 = 0;}    
  
  if ((ba2 == 1) && (refr1 == 1)){fad2--;}  
  if ((ba1 == 1) && (ba2 == 0)) {ba3 = MA2C2-MA2C1;}
  
  if ((ba2 == 1) && (ba1 == 0) && (MA2C4 > MA2C3)) {ba3 = MA2C4-MA2C3-1;}
  if ((ba2 == 1) && (ba1 == 0) && (MA2C3 > MA2C4)) {ba3 = ciclo - MA2C3 + MA2C4 - 1;}
  Afad2 = map(fad2,0,ba3,0,255);

//________________________A3______________________
  if (C0 == MA3C1){ca1 = 1;}
  if (C0 == MA3C2){ca1 = 0;}    
  if ((ca1 == 1) && (refr1 == 1)) {fad3++;}
  if (C0 == MA3C3){ca2 = 1; fad3 = ca3;}
  if (C0 == MA3C4){ca2 = 0;}    
  
  if ((ca2 == 1) && (refr1 == 1)){fad3--;}  
  if ((ca1 == 1) && (ca2 == 0)) {ca3 = MA3C2-MA3C1;}
  
  if ((ca2 == 1) && (ca1 == 0) && (MA3C4 > MA3C3)) {ca3 = MA3C4-MA3C3-1;}
  if ((ca2 == 1) && (ca1 == 0) && (MA3C3 > MA3C4)) {ca3 = ciclo - MA3C3 + MA3C4 - 1;}
  Afad3 = map(fad3,0,ca3,0,255);

  //________________________A4______________________
  if (C0 == MA4C1){da1 = 1;}
  if (C0 == MA4C2){da1 = 0;}    
  if ((da1 == 1) && (refr1 == 1)) {fad4++;}
  if (C0 == MA4C3){da2 = 1; fad4 = da3;}
  if (C0 == MA4C4){da2 = 0;}    
  
  if ((da2 == 1) && (refr1 == 1)){fad4--;}  
  if ((da1 == 1) && (da2 == 0)) {da3 = MA4C2-MA4C1;}
  
  if ((da2 == 1) && (da1 == 0) && (MA4C4 > MA4C3)) {da3 = MA4C4-MA4C3-1;}
  if ((da2 == 1) && (da1 == 0) && (MA4C3 > MA4C4)) {da3 = ciclo - MA4C3 + MA4C4 - 1;}
  Afad4 = map(fad4,0,da3,0,255);

  //________________________A5______________________
  if (C0 == MA5C1){ea1 = 1;}
  if (C0 == MA5C2){ea1 = 0;}    
  if ((ea1 == 1) && (refr1 == 1)) {fad5++;}
  if (C0 == MA5C3){ea2 = 1; fad5 = ea3;}
  if (C0 == MA5C4){ea2 = 0;}    
  
  if ((ea2 == 1) && (refr1 == 1)){fad5--;}  
  if ((ea1 == 1) && (ea2 == 0)) {ea3 = MA5C2-MA5C1;}
  
  if ((ea2 == 1) && (ea1 == 0) && (MA5C4 > MA5C3)) {ea3 = MA5C4-MA5C3-1;}
  if ((ea2 == 1) && (ea1 == 0) && (MA5C3 > MA5C4)) {ea3 = ciclo - MA5C3 + MA5C4 - 1;}
  Afad5 = map(fad5,0,ea3,0,255);

  //________________________A6______________________
  if (C0 == MA6C1){fa1 = 1;}
  if (C0 == MA6C2){fa1 = 0;}    
  if ((fa1 == 1) && (refr1 == 1)) {fad6++;}
  if (C0 == MA6C3){fa2 = 1; fad6 = fa3;}
  if (C0 == MA6C4){fa2 = 0;}    
  
  if ((fa2 == 1) && (refr1 == 1)){fad6--;}  
  if ((fa1 == 1) && (fa2 == 0)) {fa3 = MA6C2-MA6C1;}
  
  if ((fa2 == 1) && (fa1 == 0) && (MA6C4 > MA6C3)) {fa3 = MA6C4-MA6C3-1;}
  if ((fa2 == 1) && (fa1 == 0) && (MA6C3 > MA6C4)) {fa3 = ciclo - MA6C3 + MA6C4 - 1;}
  Afad6 = map(fad6,0,fa3,0,255);
  //________________________OUT DIGITAL___________________________________________________________________________
  if ((C0 >= MD1C1 && C0 < MD1C2)||(C0 >= MD1C3 && C0 < MD1C4)||(C0 >= MD1C5 && C0 < MD1C6)){outD1 = 1;} else {outD1 = 0;}      
  if ((C0 >= MD2C1 && C0 < MD2C2)||(C0 >= MD2C3 && C0 < MD2C4)||(C0 >= MD2C5 && C0 < MD2C6)){outD2 = 1;} else {outD2 = 0;}    
  if ((C0 >= MD3C1 && C0 < MD3C2)||(C0 >= MD3C3 && C0 < MD3C4)||(C0 >= MD3C5 && C0 < MD3C6)){outD3 = 1;} else {outD3 = 0;}    
  if ((C0 >= MD4C1 && C0 < MD4C2)||(C0 >= MD4C3 && C0 < MD4C4)||(C0 >= MD4C5 && C0 < MD4C6)){outD4 = 1;} else {outD4 = 0;}    
  if ((C0 >= MD5C1 && C0 < MD5C2)||(C0 >= MD5C3 && C0 < MD5C4)||(C0 >= MD5C5 && C0 < MD5C6)){outD5 = 1;} else {outD5 = 0;}    
  if ((C0 >= MD6C1 && C0 < MD6C2)||(C0 >= MD6C3 && C0 < MD6C4)||(C0 >= MD6C5 && C0 < MD6C6)){outD6 = 1;} else {outD6 = 0;}
  if ((C0 >= MD7C1 && C0 < MD7C2)||(C0 >= MD7C3 && C0 < MD7C4)||(C0 >= MD7C5 && C0 < MD7C6)){outD7 = 1;} else {outD7 = 0;}    
  if ((C0 >= MD8C1 && C0 < MD8C2)||(C0 >= MD8C3 && C0 < MD8C4)||(C0 >= MD8C5 && C0 < MD8C6)){outD8 = 1;} else {outD8 = 0;}    
  if ((C0 >= MD9C1 && C0 < MD9C2)||(C0 >= MD9C3 && C0 < MD9C4)||(C0 >= MD9C5 && C0 < MD9C6)){outD9 = 1;} else {outD9 = 0;}    
  if ((C0 >= MD10C1 && C0 < MD10C2)||(C0 >= MD10C3 && C0 < MD10C4)||(C0 >= MD10C5 && C0 < MD10C6)){outD10 = 1;} else {outD10 = 0;}
  
  
  
  
}
