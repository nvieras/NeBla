#include <SoftwareSerial.h>



#include <SD.h>
#include <Wire.h>
#include <RTClib.h>
RTC_DS3231 RTC;
int UVOUT = A3; //Output from the sensor
int REF_3V3 = A2; //3.3V power on the Arduino board

File myFile;
void setup()
{
  RTC.begin(); // Inicia la comunicación con el RTC
//RTC.adjust(DateTime(2019,07,21, 03,24,00)); // Establece la fecha y hora (Comentar una vez establecida la hora)
  pinMode(UVOUT, INPUT);
  pinMode(REF_3V3, INPUT);
  Serial.begin(115200);
     // setTime(22,52,00,02,06,2019);
  Serial.begin(9600);
  Serial.println("Iniciando SD ...");
  if (!SD.begin(4)) {
    Serial.println("SIN SD");
    return;
  }
  Serial.println("inicializacion exitosa");
}


void loop()
{
  DateTime now = RTC.now(); // Obtiene la fecha y hora del RTC
   myFile = SD.open("datalog.txt", FILE_WRITE);//abrimos  el archivo
        int uvLevel = averageAnalogRead(UVOUT);
        int refLevel = averageAnalogRead(REF_3V3);
        float outputVoltage = 3.3 / refLevel * uvLevel;  //ojo float
        float uvIntensity = mapfloat(outputVoltage, 0.99, 2.9, 0.0, 15.0);  //ojo float
     if (myFile) { 
         myFile.print("Fecha: ");
       myFile.print(now.day()); // Dia
      myFile.print(+ "/") ;
     myFile.print(now.month()); // Mes
      myFile.print(+ "/") ;
      myFile.print(now.year()); // Año
      myFile.print( " ") ;
     myFile.print(now.hour()); // Horas 
      myFile.print(+ ":") ;
      myFile.print(now.minute()); // Minutos
      myFile.print(":") ;
      myFile.print(now.second()); // Segundos
      
        myFile.print(",ML8511 output: ");
        myFile.print(uvLevel);
        myFile.print(",ML8511 voltage: ");
        myFile.print(outputVoltage);
        myFile.print(",UV Intensity (mW/cm^2): ");
        myFile.println(uvIntensity);
        
        myFile.close(); //cerramos el archivo
        
                    
  } else {
    Serial.println("Sin Tarjeta SD solo se mostraran en el telefono");
  }

  
  
  delay(100);
   // Serial.print("Fecha: ");              //codigo que se enlaza al bluetooth
      String senddata =  String(outputVoltage, 2) + "=" + String(uvIntensity, 2) + "#";
      
      Serial.print(senddata);
      Serial.println();
      
      //Serial.print(senddata);
      //Serial.print(+ "[") ;
      //Serial.print(now.year()); 
      //Serial.print(+ "-") ;
      //Serial.print(now.month());
     // Serial.print(+ "-") ;
     // Serial.print(now.day());
     // Serial.print( " ") ;
     // Serial.print(now.hour());  
    //  Serial.print(+ ":") ;
    //  Serial.print(now.minute());
    //  Serial.print(":") ;
    //  Serial.print(now.second());
    //  Serial.print(+ "]") ;
         //Serial.print(",ML8511 output: ");
        // Serial.print(uvLevel);
        // Serial.print(" ML8511 voltage: ");
   //      Serial.print(+ "[") ;
   //      Serial.print(outputVoltage);
   //      Serial.print(+ "]") ;
        // Serial.print(" UV Intensity (mW/cm^2): ");
    //    Serial.print(+ "[") ;
    //     Serial.print(uvIntensity);
    //     Serial.print(+ "]") ;  
         delay(1000);  
         //delay(600000);
         //Serial.read();
 
}

int averageAnalogRead(int pinToRead)
{
  byte numberOfReadings = 8;
  unsigned int runningValue = 0; 
  for(int x = 0 ; x < numberOfReadings ; x++)
    runningValue += analogRead(pinToRead);
  runningValue /= numberOfReadings;
  return(runningValue);  
}
//The Arduino Map function but for floats
float mapfloat(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
