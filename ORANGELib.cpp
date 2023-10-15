#include "ORANGELib.h"

ORANGELib::ORANGELib(uint8_t lcd_Addr,uint8_t lcd_cols,uint8_t lcd_rows) : lcd(lcd_Addr,lcd_cols,lcd_rows) {
  // Create your custom characters here...
  lcd.createChar(1,White);
  lcd.createChar(2,Corner1); 
    lcd.createChar(3,Corner2); 
      lcd.createChar(4,Corner3); 
        lcd.createChar(5,Corner4); 
          lcd.createChar(6,G3); 
            lcd.createChar(7,G2);
            lcd.createChar(8,G2U); 
  // ...and so on for the rest of your custom characters
}

void ORANGELib::displayORANGE() {
  lcd.begin();
  lcd.clear();
  
  O();
  R();
  A();
  N();
  G();
  E();
}

void ORANGELib::O() {
   // Code for displaying 'O'...
   lcd.setCursor(0,0);
     lcd.write(byte(2));
     
  lcd.setCursor(1,0);
     lcd.write(byte(1));

     lcd.setCursor(2,0);
     lcd.write(byte(3));
     
  lcd.setCursor(0,1);
     lcd.write(byte(1));

     lcd.setCursor(0,2);
     lcd.write(byte(1));
     
  lcd.setCursor(0,3);
     lcd.write(byte(4));

     lcd.setCursor(2,3);
     lcd.write(byte(5));
     
  lcd.setCursor(1,3);
     lcd.write(byte(1));

     lcd.setCursor(2,2);
     lcd.write(byte(1));
     
  lcd.setCursor(2,1);
     lcd.write(byte(1));
  
}

void ORANGELib::R() {
   // Code for displaying 'R'...
   lcd.setCursor(3,0);
     lcd.write(byte(2));
     
  lcd.setCursor(4,0);
     lcd.write(byte(1));

     lcd.setCursor(5,0);
     lcd.write(byte(3));
     
  lcd.setCursor(3,1);
     lcd.write(byte(1));

     lcd.setCursor(3,2);
     lcd.write(byte(1));
     
  lcd.setCursor(3,3);
     lcd.write(byte(4));

     lcd.setCursor(5,1);
     lcd.write(byte(5));
     
  lcd.setCursor(4,2);
     lcd.write(byte(1));

     lcd.setCursor(5,3);
     lcd.write(byte(5));
}

void ORANGELib::A() {
   // Code for displaying 'A'...
   lcd.setCursor(7,0);
     lcd.write(byte(1));
     


     
  lcd.setCursor(6,1);
     lcd.write(byte(1));

     lcd.setCursor(6,2);
     lcd.write(byte(1));
     
  lcd.setCursor(6,3);
     lcd.write(byte(4));

     lcd.setCursor(7,2);
     lcd.write(byte(1));
     
  lcd.setCursor(8,1);
     lcd.write(byte(1));

     lcd.setCursor(8,2);
     lcd.write(byte(1));
     
         lcd.setCursor(8,3);
     lcd.write(byte(5));
}

void ORANGELib::N() {
   // Code for displaying 'N'...
     lcd.setCursor(9,0);
     lcd.write(byte(2));
     
  lcd.setCursor(9,1);
     lcd.write(byte(1));

     lcd.setCursor(9,2);
     lcd.write(byte(1));
     
  lcd.setCursor(9,3);
     lcd.write(byte(4));

     lcd.setCursor(10,1);
     lcd.write(byte(1));
     
  lcd.setCursor(11,2);
     lcd.write(byte(1));

     lcd.setCursor(12,0);
     lcd.write(byte(3));
     
  lcd.setCursor(12,1);
     lcd.write(byte(1));

     lcd.setCursor(12,2);
     lcd.write(byte(1));
     
         lcd.setCursor(12,3);
     lcd.write(byte(5));
}

void ORANGELib::G() {
   // Code for displaying 'G'...
   lcd.setCursor(13,0);
     lcd.write(byte(2));
     
  lcd.setCursor(14,0);
     lcd.write(byte(1));

     lcd.setCursor(15,0);
     lcd.write(byte(1));
     
  lcd.setCursor(16,0);
     lcd.write(byte(3));

     lcd.setCursor(13,1);
     lcd.write(byte(1));
     
  lcd.setCursor(13,2);
     lcd.write(byte(1));

     lcd.setCursor(13,3);
     lcd.write(byte(4));
     
  lcd.setCursor(14,3);
     lcd.write(byte(1));

     lcd.setCursor(15,3);
     lcd.write(byte(1));
     
         lcd.setCursor(16,2);
     lcd.write(byte(1));
     
             lcd.setCursor(15,2);
     lcd.write(byte(6));
     
     lcd.setCursor(16,3);
     lcd.write(byte(5));

     lcd.setCursor(16,1);
     lcd.write(byte(7));

     lcd.setCursor(15,1);
     lcd.write(byte(7));
}
   void ORANGELib::E() {
   // Code for displaying 'G'...
   lcd.setCursor(17,0);
     lcd.write(byte(2));
     
  lcd.setCursor(18,0);
     lcd.write(byte(1));

     lcd.setCursor(19,0);
     lcd.write(byte(3));
     

     lcd.setCursor(17,1);
     lcd.write(byte(1));
     
  lcd.setCursor(17,2);
     lcd.write(byte(1));

     lcd.setCursor(17,3);
     lcd.write(byte(4));
     
  lcd.setCursor(18,3);
     lcd.write(byte(1));

     lcd.setCursor(19,3);
     lcd.write(byte(5));
     
  lcd.setCursor(18,1);
     lcd.write(byte(7));

     lcd.setCursor(19,1);
     lcd.write(byte(7));

       lcd.setCursor(18,2);
     lcd.write(byte(8));

     lcd.setCursor(19,2);
     lcd.write(byte(8));
   }
