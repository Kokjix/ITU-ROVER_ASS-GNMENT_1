#include <Wire.h>

//char Encoder[19] = {'S', '0', '1', '2', '2', '1','2','0','1','1','0','1','9','0','1','4','7', 'F'};
int MotorVel[4];
int MotorRot[4];
int split[12];
char b[3];
String str;
char Encoder[7] = {'S', '0', '0', '0', '0', 'F'};

void numberGenVel(int motvel[4]){
  for(int i = 0; i < 4; i++){
    motvel[i] = random(0, 256);
    
  }
  
}

void numberGenRot(int rot[4]){
  for(int i = 0; i < 4; i++){
    rot[i] = random(0, 2);
    
  }
  
}


void setup() {
  Serial.begin(9600);

}

void loop() {
  numberGenRot(MotorRot);
  numberGenVel(MotorVel);
  int a = MotorVel[0];
  //Serial.println(MotorVel[2]);
  str = String(MotorVel[0]);
  str.toCharArray(b, 4);
  
  

if (a < 100 && a>= 10)
  {
       
  
     Encoder[2] = '0';
     Encoder[3] = b[0];
     Encoder[4] = b[1];

  } 
  if (a < 10)
  {      
  
      Encoder[2] = '0';
      Encoder[3] = '0';
      Encoder[4] = b[0];
  
  }
  if(a >= 100){
       
       
       Encoder[2] = b[0];
       Encoder[3] = b[1];
       Encoder[4] = b[2];

  }
  
  
  
  
  
  Serial.println(Encoder);
  /*
  char rot0 = MotorRot[0];
  char rot1 = MotorRot[1];
  char rot2 = MotorRot[2];
  char rot3 = MotorRot[3];
  
  Encoder[1] += rot0;
  Encoder[3] += rot1;
  Encoder[5] += rot2;
  Encoder[7] += rot3;
  
  Encoder[2] += vel0;
  Encoder[4] += vel1;
  Encoder[6] += vel2;
  Encoder[8] += vel3;
  
    for (int i = 0; i < 10; i++)
    {
        Serial.print(Encoder[i]);
       
    }
    
       Serial.println();
       delay(1000);
  
  */
 

}