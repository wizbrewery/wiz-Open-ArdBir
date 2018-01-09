// sensor and lcd
OneWire ds(13);		//ds8

/*Default LCD as defined by ArdBir
#define I2C_ADDR  0x27		// Added by OSN: Define I2C Address where the PCF8574A is
#define BACKLIGHT_PIN  3	// Added by OSN: LCD backlight on/off
#define En_pin  2			// Added by OSN:
#define Rw_pin  1			// Added by OSN:
#define Rs_pin  0			// Added by OSN:
#define D4_pin  4			// Added by OSN:
#define D5_pin  5			// Added by OSN:
#define D6_pin  6			// Added by OSN:
#define D7_pin  7			// Added by OSN: */

// Data wire is plugged into pin 12 on the Arduino
#define ONE_WIRE_BUS 12

// added by wizbrery.  find the unique address's of your temp probes using i2c scanner
DeviceAddress OneThermometer = { 0x28, 0xFF, 0x61, 0x54, 0x74, 0x15, 0x03, 0xC2 };
DeviceAddress TwoThermometer = { 0x28, 0xFF, 0x33, 0x2F, 0x73, 0x15, 0x01, 0x2E };

LiquidCrystal_I2C lcd(0x27,20,4); //set the LCD address to 0x27 for a 20 chars and 4 line display

//  added by wizbrewery. Setup a oneWire instance to communicate with any OneWire devices (not just Maxim/Dallas temperature ICs)
OneWire oneWire(ONE_WIRE_BUS);
// added by wizbrewery. Pass our oneWire reference to Dallas Temperature.
DallasTemperature sensors(&oneWire);

//LiquidCrystal lcd(A4, A5, 2, 3, 4, 5);

// push button inputs
//const char Button_up    = A2;
//const char Button_dn    = A3;
//const char Button_start = A0;
//const char Button_enter = A1;
//const char Button_cPump = A4;
const byte Button_up    = 11;
const byte Button_dn    = 10;
const byte Button_start = 9;
const byte Button_enter = 8;
//const byte Button_cPump = 6;

// outputs and status LEDs
const byte Heat 		= 24; //6;
const byte Pump 		= 26;
const byte Buzz 		= 28;
//const byte cPump 		= 10;
const byte Heat_LED 	= 48;	//Added by OSN, status LED
const byte Pump_LED 	= 46;	//Added by OSN, status LED
const byte Pwr12V_LED	= 42;	//Added by OSN, status LED
const byte Pwr220V_LED	= 44;	//Added by OSN, status LED

