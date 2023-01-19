
#include <SPI.h>				// must include this here (or else IDE can't find it)
                                           
#include "PDQ_ST7735_config.h"			// PDQ: ST7735 pins and other setup for this sketch
#include <PDQ_GFX.h>				// PDQ: Core graphics library
#include <PDQ_ST7735.h>			// PDQ: Hardware-specific driver library
#include <RF24.h>
#include <RF24_config.h>
#include <nRF24L01.h>

PDQ_ST7735 tft;			// PDQ: create LCD object (using pins in "PDQ_ST7735_config.h")


float p = 3.1415926;

void setup(void) {
  Serial.begin(9600);
  Serial.print(F("Hello! ST7735 TFT Test"));

#if defined(ST7735_RST_PIN)	// reset like Adafruit does
  Serial.println(F("Using hardware reset pin"));
	FastPin<ST7735_RST_PIN>::setOutput();
	FastPin<ST7735_RST_PIN>::hi();
	FastPin<ST7735_RST_PIN>::lo();
	delay(1);
	FastPin<ST7735_RST_PIN>::hi();
#endif


  tft.begin();  
}

void loop() {

}
