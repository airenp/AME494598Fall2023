#define LILYGO_WATCH_2019_WITH_TOUCH
#include <LilyGoWatch.h>

TTGOClass *ttgo;

void setup()
{
    Serial.begin(115200);
    ttgo = TTGOClass::getWatch();
    ttgo->begin();
    ttgo->openBL();

    ttgo->tft->fillScreen(TFT_WHITE);
    ttgo->tft->setTextColor(TFT_BLACK, TFT_WHITE);
    ttgo->tft->setTextFont(4);

    String name = "Ketan Choudhary";
    
    // Calculate the width and height of the text
    int16_t textWidth = ttgo->tft->textWidth(name);
    int16_t textHeight = ttgo->tft->fontHeight();

    // Calculate the x and y position to center the text
    int16_t xPosition = (ttgo->tft->width() - textWidth) / 2;
    int16_t yPosition = (ttgo->tft->height() - textHeight) / 2;

    ttgo->tft->drawString(name, xPosition, yPosition);
}

void loop()
{ 
}
