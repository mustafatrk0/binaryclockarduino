#include <LiquidCrystal.h>
#include <virtuabotixRTC.h>
#include <Adafruit_Sensor.h>

/* RTC pins defined */
int CLK = 6;
int DATA = 7;
int RST = 8;

/* LDC I2C pins defined */
int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
virtuabotixRTC saat(CLK,DATA,RST);

byte dolgu[8] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}; //Means 1 in binary on the screen.
byte clr[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0, 0x00};    //Means 0 in binary on the screen.

void setup() {

  lcd.begin(16, 2); //LCD start communication
  //saat.setDS1302Time(50,57,22,4,4,1,2022); //RTC time calibration
  lcd.createChar(1,dolgu); //Create character 1 in binary
  lcd.createChar(0,clr);   //Create character 0 in binary
}

void loop() {
  
  saat.updateTime();
  lcd.clear(); //LCD cleared

  /* Binary number defined for clock */
  if(saat.hours == 1){
    lcd.setCursor(15,0); 
    lcd.write(byte(1));
    }
  else if(saat.hours == 2){
    lcd.setCursor(14,0);
    lcd.write(byte(1));
    lcd.setCursor(15,0);
    lcd.write(byte(0));
    }
   else if(saat.hours == 3){
    lcd.setCursor(14,0);
    lcd.write(byte(1));
    lcd.setCursor(15,0);
    lcd.write(byte(1));
    }
    else if(saat.hours == 4){
     lcd.setCursor(13,0);
     lcd.write(byte(1));
     lcd.setCursor(14,0);
     lcd.write(byte(0));
     lcd.setCursor(15,0);
     lcd.write(byte(0));
    }
    else if(saat.hours == 5){
     lcd.setCursor(13,0);
     lcd.write(byte(1));
     lcd.setCursor(14,0);
     lcd.write(byte(0));
     lcd.setCursor(15,0);
     lcd.write(byte(1));
    }
    else if(saat.hours == 6){
     lcd.setCursor(13,0);
     lcd.write(byte(1));
     lcd.setCursor(14,0);
     lcd.write(byte(1));
     lcd.setCursor(15,0);
     lcd.write(byte(0));
    }
    else if(saat.hours == 7){
     lcd.setCursor(13,0);
     lcd.write(byte(1));
     lcd.setCursor(14,0);
     lcd.write(byte(1));
     lcd.setCursor(15,0);
     lcd.write(byte(1));
    }
    else if(saat.hours == 8){
     lcd.setCursor(12,0);
     lcd.write(byte(1));
     lcd.setCursor(13,0);
     lcd.write(byte(0));
     lcd.setCursor(14,0);
     lcd.write(byte(0));
     lcd.setCursor(15,0);
     lcd.write(byte(0));
    }
    else if(saat.hours == 9){
     lcd.setCursor(12,0);
     lcd.write(byte(1));
     lcd.setCursor(13,0);
     lcd.write(byte(0));
     lcd.setCursor(14,0);
     lcd.write(byte(0));
     lcd.setCursor(15,0);
     lcd.write(byte(1));
    }
    else if(saat.hours == 10){
     lcd.setCursor(12,0);
     lcd.write(byte(1));
     lcd.setCursor(13,0);
     lcd.write(byte(0));
     lcd.setCursor(14,0);
     lcd.write(byte(1));
     lcd.setCursor(15,0);
     lcd.write(byte(0));
    }
    else if(saat.hours == 11){
     lcd.setCursor(12,0);
     lcd.write(byte(1));
     lcd.setCursor(13,0);
     lcd.write(byte(0));
     lcd.setCursor(14,0);
     lcd.write(byte(1));
     lcd.setCursor(15,0);
     lcd.write(byte(1));
    }
   else if(saat.hours == 12){
     lcd.setCursor(12,0);
     lcd.write(byte(1));
     lcd.setCursor(13,0);
     lcd.write(byte(1));
     lcd.setCursor(14,0);
     lcd.write(byte(0));
     lcd.setCursor(15,0);
     lcd.write(byte(0));
    }
    else if(saat.hours == 13){
     lcd.setCursor(12,0);
     lcd.write(byte(1));
     lcd.setCursor(13,0);
     lcd.write(byte(1));
     lcd.setCursor(14,0);
     lcd.write(byte(0));
     lcd.setCursor(15,0);
     lcd.write(byte(1));
    }
    else if(saat.hours == 14){
     lcd.setCursor(12,0);
     lcd.write(byte(1));
     lcd.setCursor(13,0);
     lcd.write(byte(1));
     lcd.setCursor(14,0);
     lcd.write(byte(1));
     lcd.setCursor(15,0);
     lcd.write(byte(0));
    }
    else if(saat.hours == 15){
     lcd.setCursor(12,0);
     lcd.write(byte(1));
     lcd.setCursor(13,0);
     lcd.write(byte(1));
     lcd.setCursor(14,0);
     lcd.write(byte(1));
     lcd.setCursor(15,0);
     lcd.write(byte(1));
    }
    else if(saat.hours == 16){
     lcd.setCursor(11,0);
     lcd.write(byte(1));
     lcd.setCursor(12,0);
     lcd.write(byte(0));
     lcd.setCursor(13,0);
     lcd.write(byte(0));
     lcd.setCursor(14,0);
     lcd.write(byte(0));
     lcd.setCursor(15,0);
     lcd.write(byte(0));
    }
    else if(saat.hours == 17){
     lcd.setCursor(11,0);
     lcd.write(byte(1));
     lcd.setCursor(12,0);
     lcd.write(byte(0));
     lcd.setCursor(13,0);
     lcd.write(byte(0));
     lcd.setCursor(14,0);
     lcd.write(byte(0));
     lcd.setCursor(15,0);
     lcd.write(byte(1));
    }
    else if(saat.hours == 18){
     lcd.setCursor(11,0);
     lcd.write(byte(1));
     lcd.setCursor(12,0);
     lcd.write(byte(0));
     lcd.setCursor(13,0);
     lcd.write(byte(0));
     lcd.setCursor(14,0);
     lcd.write(byte(1));
     lcd.setCursor(15,0);
     lcd.write(byte(0));
    }
    else if(saat.hours == 19){
     lcd.setCursor(11,0);
     lcd.write(byte(1));
     lcd.setCursor(12,0);
     lcd.write(byte(0));
     lcd.setCursor(13,0);
     lcd.write(byte(0));
     lcd.setCursor(14,0);
     lcd.write(byte(1));
     lcd.setCursor(15,0);
     lcd.write(byte(1));
    }
    else if(saat.hours == 20){
     lcd.setCursor(11,0);
     lcd.write(byte(1));
     lcd.setCursor(12,0);
     lcd.write(byte(0));
     lcd.setCursor(13,0);
     lcd.write(byte(1));
     lcd.setCursor(14,0);
     lcd.write(byte(0));
     lcd.setCursor(15,0);
     lcd.write(byte(0));
    }
    else if(saat.hours == 21){
     lcd.setCursor(11,0);
     lcd.write(byte(1));
     lcd.setCursor(12,0);
     lcd.write(byte(0));
     lcd.setCursor(13,0);
     lcd.write(byte(1));
     lcd.setCursor(14,0);
     lcd.write(byte(0));
     lcd.setCursor(15,0);
     lcd.write(byte(1));
    }
    else if(saat.hours == 22){
     lcd.setCursor(11,0);
     lcd.write(byte(1));
     lcd.setCursor(12,0);
     lcd.write(byte(0));
     lcd.setCursor(13,0);
     lcd.write(byte(1));
     lcd.setCursor(14,0);
     lcd.write(byte(1));
     lcd.setCursor(15,0);
     lcd.write(byte(0));
    }
    else if(saat.hours == 23){
     lcd.setCursor(11,0);
     lcd.write(byte(1));
     lcd.setCursor(12,0);
     lcd.write(byte(0));
     lcd.setCursor(13,0);
     lcd.write(byte(1));
     lcd.setCursor(14,0);
     lcd.write(byte(1));
     lcd.setCursor(15,0);
     lcd.write(byte(0));
    }
    else if(saat.hours == 0){
     lcd.setCursor(11,0);
     lcd.write(byte(0));
     lcd.setCursor(12,0);
     lcd.write(byte(0));
     lcd.setCursor(13,0);
     lcd.write(byte(0));
     lcd.setCursor(14,0);
     lcd.write(byte(0));
     lcd.setCursor(15,0);
     lcd.write(byte(0));
    }
    /* Binary number defined for minutes */

  if(saat.minutes == 1){
    lcd.setCursor(15,1);
    lcd.write(byte(1));
    }
  else if(saat.minutes == 2){
    lcd.setCursor(14,1);
    lcd.write(byte(1));
    lcd.setCursor(15,1);
    lcd.write(byte(0));
    }
   else if(saat.minutes == 3){
    lcd.setCursor(14,1);
    lcd.write(byte(1));
    lcd.setCursor(15,1);
    lcd.write(byte(1));
    }
    else if(saat.minutes == 4){
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 5){
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 6){
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 7){
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 8){
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 9){
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 10){
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 11){
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
   else if(saat.minutes == 12){
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 13){
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 14){
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 15){
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 16){
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(0));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 17){
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(0));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 18){
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(0));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 19){
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(0));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 20){
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(0));
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 21){
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(0));
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 22){
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(0));
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 23){
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(0));
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 24){
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 25){
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 26){
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 27){
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 28){
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 29){
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 30){
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 31){
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 32){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(0));
     lcd.setCursor(12,1);
     lcd.write(byte(0));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 33){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(0));
     lcd.setCursor(12,1);
     lcd.write(byte(0));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 34){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(0));
     lcd.setCursor(12,1);
     lcd.write(byte(0));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 35){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(0));
     lcd.setCursor(12,1);
     lcd.write(byte(0));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 36){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(0));
     lcd.setCursor(12,1);
     lcd.write(byte(0));
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 37){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(0));
     lcd.setCursor(12,1);
     lcd.write(byte(0));
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 38){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(0));
     lcd.setCursor(12,1);
     lcd.write(byte(0));
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 39){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(0));
     lcd.setCursor(12,1);
     lcd.write(byte(0));
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 40){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(0));
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 41){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(0));
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 42){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(0));
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 43){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(0));
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 44){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(0));
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 45){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(0));
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 46){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(0));
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 47){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(0));
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 48){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(0));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 49){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(0));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 50){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(0));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 51){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(0));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 52){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(0));
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 53){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(0));
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 54){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(0));
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 55){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(0));
     lcd.setCursor(13,1);
     lcd.write(byte(1));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 56){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 57){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 58){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    else if(saat.minutes == 59){
     lcd.setCursor(10,1);
     lcd.write(byte(1));
     lcd.setCursor(11,1);
     lcd.write(byte(1));
     lcd.setCursor(12,1);
     lcd.write(byte(1));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(1));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
    else if(saat.minutes == 0){
     lcd.setCursor(10,1);
     lcd.write(byte(0));
     lcd.setCursor(11,1);
     lcd.write(byte(0));
     lcd.setCursor(12,1);
     lcd.write(byte(0));
     lcd.setCursor(13,1);
     lcd.write(byte(0));
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(0));
    }
    /* normal clock */
  lcd.setCursor(0,0);                                  
  lcd.print(saat.dayofmonth);                          
  lcd.print("/");
  lcd.print(saat.month);                               
  lcd.print("/");
  lcd.print(saat.year);                                
  lcd.setCursor(0, 1);                                  
  lcd.print(saat.hours);                               
  lcd.print(":");
  lcd.print(saat.minutes);                               
  lcd.print(":");
  lcd.print(saat.seconds);                             
  delay(1000);
  
}
