
#include "pitches.h" //add Equivalent frequency for musical note
#include "themes2.h" //add Note vale and duration 


void poc()
{ 
  for (int thisNote = 0; thisNote < (sizeof(Pirates_note)/sizeof(int)); thisNote++) {

    int noteDuration = 1000 / Pirates_duration[thisNote];//convert duration to time delay
   if(thisNote%3==0){
    
   
    tone(3, Pirates_note[thisNote], noteDuration);
   }
     if(thisNote%4==0){
    
   
    tone(4, Pirates_note[thisNote], noteDuration);
   }   if(thisNote%5==0){
    
   
    tone(5, Pirates_note[thisNote], noteDuration);
   }   else{
    
   
    tone(6, Pirates_note[thisNote], noteDuration);
   } 
    int pauseBetweenNotes = noteDuration * 1.05; //Here 1.05 is tempo, increase to play it slower
    delay(pauseBetweenNotes);
    noTone(8); //stop music on pin 8 
    }
}
void loop()
{ 
  for (int thisNote = 0; thisNote < (sizeof(desp_note)/sizeof(int)); thisNote++) {

    int noteDuration = 1000 / desp_duration[thisNote];//convert duration to time delay
   if(thisNote%3==0){
    
   
    tone(3, desp_note[thisNote], noteDuration);
   }
     if(thisNote%4==0){
    
   
    tone(4, desp_note[thisNote], noteDuration);
   }   if(thisNote%5==0){
    
   
    tone(5, desp_note[thisNote], noteDuration);
   }   else{
    
   
    tone(6, desp_note[thisNote], noteDuration);
   } 
    int pauseBetweenNotes = noteDuration * 1.50; //Here 1.05 is tempo, increase to play it slower
    delay(pauseBetweenNotes);
    noTone(8); //stop music on pin 8 
    }
}

void cf()
{
  for (int thisNote = 0; thisNote < (sizeof(CrazyFrog_note)/sizeof(int)); thisNote++) {

    int noteDuration = 1000 / CrazyFrog_duration[thisNote]; //convert duration to time delay
 if(thisNote%3==0){
    
   
    tone(3, CrazyFrog_note[thisNote], noteDuration);
   }
     if(thisNote%4==0){
    
   
    tone(4, CrazyFrog_note[thisNote], noteDuration);
   }   if(thisNote%5==0){
    
   
    tone(5, CrazyFrog_note[thisNote], noteDuration);
   }   else{
    
   
    tone(6, CrazyFrog_note[thisNote], noteDuration);
   } 
    int pauseBetweenNotes = noteDuration * 1.30;//Here 1.30 is tempo, decrease to play it faster
    delay(pauseBetweenNotes);
    noTone(8); //stop music on pin 8 
    }
}

void mario()
{
    for (int thisNote = 0; thisNote < (sizeof(MarioUW_note)/sizeof(int)); thisNote++) {

    int noteDuration = 1000 / MarioUW_duration[thisNote];//convert duration to time delay
     if(thisNote%3==0){
    
   
    tone(3, MarioUW_note[thisNote], noteDuration);
   }
     if(thisNote%4==0){
    
   
    tone(4, MarioUW_note[thisNote], noteDuration);
   }   if(thisNote%5==0){
    
   
    tone(5, MarioUW_note[thisNote], noteDuration);
   }   else{
    
   
    tone(6, MarioUW_note[thisNote], noteDuration);
   } 
    int pauseBetweenNotes = noteDuration * 1.80;
    delay(pauseBetweenNotes);
    noTone(8); //stop music on pin 8 
    }
}

void ttn()
{
    for (int thisNote = 0; thisNote < (sizeof(Titanic_note)/sizeof(int)); thisNote++) {

    int noteDuration = 1000 / Titanic_duration[thisNote];//convert duration to time delay
     if(thisNote%3==0){
    
   
    tone(3, Titanic_note[thisNote], noteDuration);
   }
     if(thisNote%4==0){
    
   
    tone(4, Titanic_note[thisNote], noteDuration);
   }   if(thisNote%5==0){
    
   
    tone(5, Titanic_note[thisNote], noteDuration);
   }   else{
    
   
    tone(6, Titanic_note[thisNote], noteDuration);
   } 
    int pauseBetweenNotes = noteDuration * 2.70;
    delay(pauseBetweenNotes);
    noTone(8); //stop music on pin 8 
    }
}
void newn()
{
    for (int thisNote = 0; thisNote < (sizeof(new_note)/sizeof(int)); thisNote++) {

    int noteDuration = 1000 / new_duration[thisNote];//convert duration to time delay
     if(thisNote%3==0){
    
   
    tone(3, new_note[thisNote], noteDuration);
   }
     if(thisNote%4==0){
    
   
    tone(4, new_note[thisNote], noteDuration);
   }   if(thisNote%5==0){
    
   
    tone(5, new_note[thisNote], noteDuration);
   }   else{
    
   
    tone(6, new_note[thisNote], noteDuration);
   } 
    int pauseBetweenNotes = noteDuration * 2.70;
    delay(pauseBetweenNotes);
    noTone(8); //stop music on pin 8 
    }
}
void setup() {
 //Button 4 with internal pull up
Serial.begin(9600);
}
