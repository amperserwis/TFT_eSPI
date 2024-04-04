// LOLIN TFT 0.85 shield for C3 mini/pico
#define USER_SETUP_ID 401

#define GC9A01_DRIVER     // Configure all registers

#define TFT_WIDTH  128
#define TFT_HEIGHT 128

// #define TFT_RGB_ORDER TFT_RGB  // Colour order Red-Green-Blue
//#define TFT_RGB_ORDER TFT_BGR  // Colour order Blue-Green-Red

// #define TFT_INVERSION_ON
//#define TFT_INVERSION_OFF
#define TFT_BACKLIGHT_ON 1
#define CGRAM_OFFSET


#define TFT_BL     7   // LED back-light
// #define TFT_BL     -1  // Disconnect 'BL' jumper, LED back-light always ON
#define TFT_MISO   0   // Not connected
#define TFT_MOSI   4
#define TFT_SCLK   1
#define TFT_CS     2 
#define TFT_DC     5
#define TFT_RST    -1 // TFT's RST -- LOLIN board's EN
// #define TFT_RST    6 //D4(IO6) 

#define LOAD_GLCD   // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
#define LOAD_FONT2  // Font 2. Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
#define LOAD_FONT4  // Font 4. Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
#define LOAD_FONT6  // Font 6. Large 48 pixel font, needs ~2666 bytes in FLASH, only characters 1234567890:-.apm
#define LOAD_FONT7  // Font 7. 7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters 1234567890:.
#define LOAD_FONT8  // Font 8. Large 75 pixel font needs ~3256 bytes in FLASH, only characters 1234567890:-.
//#define LOAD_FONT8N // Font 8. Alternative to Font 8 above, slightly narrower, so 3 digits fit a 160 pixel TFT
#define LOAD_GFXFF  // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom fonts

#define SMOOTH_FONT


// #define SPI_FREQUENCY  27000000
#define SPI_FREQUENCY  40000000

#define SPI_READ_FREQUENCY  20000000

#define SPI_TOUCH_FREQUENCY  2500000

// #define SUPPORT_TRANSACTIONS