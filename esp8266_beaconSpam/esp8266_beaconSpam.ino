/*
  ===========================================
       Copyright (c) 2018 Stefan Kremser
              github.com/spacehuhn
  ===========================================
*/

// ===== Settings ===== //
const uint8_t channels[] = {1, 6, 11}; // used Wi-Fi channels (available: 1-14)
const bool wpa2 = false; // WPA2 networks
const bool appendSpaces = true; // makes all SSIDs 32 characters long to improve performance

/*
  SSIDs:
  - don't forget the \n at the end of each SSID!
  - max. 32 characters per SSID
  - don't add duplicates! You have to change one character at least
*/
const char ssids[] PROGMEM = {
  "Mom Use This One\n"
  "Abraham Linksys\n"
  "Benjamin FrankLAN\n"
  "Martin Router King\n"
  "John Wilkes Bluetooth\n"
  "Pretty Fly for a Wi-Fi\n"
  "Bill Wi the Science Fi\n"
  "I Believe Wi Can Fi\n"
  "Tell My Wi-Fi Love Her\n"
  "No More Mister Wi-Fi\n"
  "LAN Solo\n"
  "The LAN Before Time\n"
  "Silence of the LANs\n"
  "House LANister\n"
  "Winternet Is Coming\n"
  "Ping’s Landing\n"
  "The Ping in the North\n"
  "This LAN Is My LAN\n"
  "Get Off My LAN\n"
  "The Promised LAN\n"
  "The LAN Down Under\n"
  "FBI Surveillance Van 4\n"
  "Area 51 Test Site\n"
  "Drive-By Wi-Fi\n"
  "Planet Express\n"
  "Wu Tang LAN\n"
  "Darude LANstorm\n"
  "Never Gonna Give You Up\n"
  "Hide Yo Kids, Hide Yo Wi-Fi\n"
  "Loading…\n"
  "Searching…\n"
  "VIRUS.EXE\n"
  "Virus-Infected Wi-Fi\n"
  "Starbucks Wi-Fi\n"
  "Text ###-#### for Password\n"
  "Yell ____ for Password\n"
  "The Password Is 1234\n"
  "Free Public Wi-Fi\n"
  "No Free Wi-Fi Here\n"
  "Get Your Own Damn Wi-Fi\n"
  "It Hurts When IP\n"
  "Dora the Internet Explorer\n"
  "404 Wi-Fi Unavailable\n"
  "Porque-Fi\n"
  "Titanic Syncing\n"
  "Test Wi-Fi Please Ignore\n"
  "Drop It Like It’s Hotspot\n"
  "Life in the Fast LAN\n"
  "The Creep Next Door\n"
  "Ye Olde Internet\n"
  "c://virus.exe\n"
"Virus\n"
"Infected Connection\n"
"No Free Stuff\n"
"404 Wi-Fi Not Found\n"
"Get yourself a Life Man!\n"
"No More Free Stuff\n"
"Searching For WiFi? Keep Searching\n"
"No Free WiFi\n"
"Get Lost\n"
"Don’t Even Think to Connect\n"
"Move Bitch\n"
"Help, I’m Trapped in a Router!\n"
"Pretty Fly for a Wi-Fi\n"
"You Are Not Secure\n"
"Hackers DAN\n"
"Very Slow Internet\n"
"My Own Damn Internet\n"
"Personal Property\n"
"Baap Ka Maal\n"
"Get Off My LAN\n"
"Unsecured\n"
"FBI Surveillance\n"
"Under Radar of FBI\n"
"Go To Hell\n"
"I hate my Wi-Fi\n"
"My LAN My Rule\n"
"Password Stealer\n"
"Your PC will be Hacked\n"
"Spam Connection\n"
"Virus Headquarter\n"
"Connect on your Own Risk\n"
"Instant Virus Infection\n"
"Move on Bitch\n"
"Network Full Of Virus\n"
"Trojan.exe\n"
"Virus Detected\n"
"You can’t hack Me\n"
"Hack Me If you can\n"
"I can Read Your Emails\n"
"Network Not Found\n"
"Prohibited Connection\n"
"You are under Attack\n"
"War of WiFi\n"
"Virus Detected!!\n"
"Delete Data\n"
"Hard Drive Format in Progress\n"
"World Wide WiFi\n"
"Game of WiFi\n"
"The WiFi Fever\n"
"Stealth Protection\n"
"123123\n"
"I can See you\n"
"Horny Connection\n"
"Children are not Allowed\n"
"Above 18 LAN\n"
"Tell Your Dad to Buy one WiFi\n"
"Recharge and Use\n"
"You are under Attack\n"
"Virus Squad\n"
"Virus Army\n"
"Pay & Use\n"
"Take Permission from your Dad\n"
"my wife is out of town\n"
"Don’t enter my wife is in home\n"
"Grow Up Kid\n"
"The Airplane Fart Bandit\n"
"I am Under Your Bed\n"
"Blow me for password\n"
"Every day I’m Buffering\n"
"I am Watching You\n"
"Moving with your Mom\n"
"Yell “EggRoll” for Password\n"
"God Knows U R Using my Data\n"
"Two Girls One Router\n"
"It Will Cost You\n"
"Karma is Bitch\n"
"Wu-Tang LAN\n"
"GetOffMyLawn\n"
"Will You marry me?\n"
"It Hurts When IP\n"
"Press any key to connect\n"
"Scratch the Screen to Connect\n"
"Scratch Here\n"
"Test Wi-Fi Please Ignore\n"
"Warning! Malware Detected\n"
"Free Public Wi-Fi\n"
"Connection Lost\n"
"Click Here\n"
"Top Secret Network\n"
"Searching……………\n"
"Dark Night Rises\n"
"Wi-Fi is in the air\n"
"The Creep Next Door\n"
"Loading…\n"
"Ping’s Landing\n"
"Benjamin FrankLAN\n"
"Get Well Soon\n"
"Join the League\n"
"Gangster\n"
"FB Password Hacker\n"
"Insta Password Hacker\n"
"Hackers League\n"
"League of WiFi\n"
"Fear of Death\n"
"Fantastic WiFi\n"
"Accept_virus\n"
"Pay your Rent First\n"
"Sorry, you can’t use this\n"
"Only for Adults\n"
"Adults only\n"
"You are Under 18\n"
"Study First\n"
"You can’t Beat me\n"
"You can’t afford this\n"
"Will you be my WiFi?\n"
"Make WiFi Happy\n"
"WiFi: Infinity War\n"
"Area 51 Test Site\n"
"The Promised LAN\n"
"This LAN Is My LAN\n"
"Abraham Linksys\n"
"I am the Internet, AMA\n"
"Pirates of WiFi\n"
"Password is You\n"
"WI-FIght the inevitable?\n"
"No More Mister Wi-Fi\n"
"LAN Solo\n"
"Stay in Your LAN\n"
"Don’t Touch my LAN\n"
"The LAN Down Under\n"
"You are the Password\n"
"Your WiFi is in another Castle\n"
"You can’t Hackme\n"
"BandwidthRain\n"
"Error: Can’t Connect\n"
"BatLAN and Robin\n"
"Click Here For Viruses\n"
"Does This Look Infected?\n"
"Fight for the Wi-Fi\n"
"Breaking the Wi-Fi\n"
"Don’t Even Tri this Wi-Fi\n"
"IP All Over Your House\n"
"ThisIsABomb\n"
"You are under Surveillance\n"
"We are legion, scriptkids beware\n"
"Let the WORD of the NERD be HEARD\n"
"Alien_Invasion_Network\n"
"Marvel Group\n"
"Meat is Murder\n"
"Password is Password\n"
"Milk Make the Cookie Wet\n"
"Funny, It Worked Last Time\n"
"I now declare you MAN & WiFi\n"
"GirlsGoneWireless\n"
"This is a Meth LAB\n"
"Who is your Daddy now?\n"
"Not Your Dad’s Property\n"
"Don’t even Think to Connect\n"
"I am Using it\n"
"Don’t even try it\n"
"Don’t Snoop\n"
"Hogsmeade\n"
"Enter the Dragon’s Network\n"
"First Pay then Use\n"
"Feel Like Flying\n"
"No Free So Get Stuffed\n"
"Pole Searching For a Hole\n"
"Not For Noobs\n"
"Pole Searching For a Hole\n"
"Quit Using My Wi-Fi\n"
"I hate my neighbor\n"
"No One can Save you Now\n"
"Risk is Real\n"
"99 problems but WiFi ain’t one\n"
"Please Use me\n"
"Click Here To Brick Your Phone\n"
"Pay $5 per Hour\n"
"I love your Daughter\n"
"I Like your Mom\n"
"Go, Sleep Baby,\n"
"Wake up Boy\n"
"I am a StarBoy\n"
"Love me Like You Do\n"
"My Neighbors Suck\n"
"You Sucks\n"
"Never Give Up\n"
"Live Life King Size\n"
"Never Give Up\n"
"Keep Moving\n"
"No Looking Back\n"
"Never Break Down\n"
"Life is great\n"
"Keep Hustling\n"
"Keep Struggling\n"
"Dreams are Real\n"
"Keep burning Fire in Heart\n"
"Yes! You Can\n"
"Make Life Worth Telling Story\n"
"Life is Beautiful\n"
"Don’t Waste your Time\n"
"Time is Money\n"
"Time is Gold\n"
"Work 24×7\n"
"Dreams May Comes True\n"
"Achieve your Goal\n"
"Never Ever Say Give up\n"
"Connect The Dots\n"
"Touch the Sky with Glory\n"
"keep going\n"
"Knowledge is Currency\n"
"Believe in yourself\n"
"Learn from yesterday\n"
"Live for today\n"
"Hope for tomorrow\n"
"Don’t be afraid\n"
"You can Do it!\n"
"Just Do It!\n"
"Make it possible\n"
"Learn how to fly\n"
"Never Stop Learning\n"
"Never Stop Dreaming\n"
"Never Stop Working\n"
"Focus is Everything\n"
"Be Laser Focus\n"
"You live only once\n"
"No Regret\n"
"Hustle is life\n"
"No word for WiFi in Dothraki\n"
"Websteros Winternetfell\n"
"House LANnister\n"
"Tyrion LANnister\n"
"Baratheon of Storm’s End\n"
"WiFestores\n"
"The Night’s LAN Switch\n"
"John_Snow_Knows_Something\n"
"Browsing Strong\n"
"A Wi-Fi has no name\n"
"The Ping of the North\n"
"The Brotherhood Without LANnister\n"
"A Router of Ice and Fire\n"
"Packets Are Coming\n"
"Baratheon of Storm’s End\n"
"WiFestores\n"
"The Night’s LAN Switch\n"
"Little Fingers Whore House\n"
"Ravenclaw Common Room Wifi\n"
"The Black Link\n"
"Hogwarts Great Hall WiFi\n"
"The Triwizard Internet\n"
"Room of Requirement\n"
"Go Away You Muggluu\n"
"Magic Secure Muggle Wifi\n"
"Lord Voldemodem\n"
"The Floo Network\n"
"WiFi Guardium Leviosa\n"
"Aberto\n"
"It’s LeviOSA not LevioSAH\n"
"Lord Voldemodem\n"
"Expelliarmus Your Internet\n"
"The Patronus Charm\n"
"Ravenclaw Common Room Wifi\n"
"Alohomora Crack the Password\n"
"Wizard Always\n"
"Lord Voldemodem Gay\n"
"The Whomping Wifi\n"
"Let The Wand Choose It’s Wizard\n"
"Hogwarts School of Free WiFi\n"
"Slytherin Common Room Wifi\n"
"Hogwarts Express\n"
"The Black Link\n"
"WiFibranium\n"
"Age of Routers\n"
"Web of Spiderman\n"
"SkyeLab\n"
"WiFi Hammer\n"
"the Bifrost\n"
"ItsAllConnected\n"
"Spider LAN – Home Connecting\n"
"Ant-LAN and the WiFi\n"
"The Dark World Wide Web\n"
"Ghost Router\n"
"Guardians of the Gateway\n"
"Captain America: The WiFi Router\n"
"Punisher LAN\n"
"Ant-Lan\n"
"PhoenixForce\n"
"Agent Router\n"
"Iron LAN\n"
"It’sAllConnected\n"
"Solomon LAN\n"
"The WiFi Soldier\n"
"Browsers Assemble!\n"
"Smokin Waves\n"
"WiFi: The infinite Speed\n"
"X-Wing WiFi Fighter\n"
"Star Wars: The Last LAN\n"
"Clone Force 99\n"
"Shoretrooperr\n"
"Star Wars: A New LAN\n"
"Death Star Wireless Zone\n"
"R2D2serialpor\n"
"Astromech Droid Router Repairers\n"
"holonet\n"
"The Domino Squad\n"
"Killun WiFi Station\n"
"Concordia\n"
"Not the Wifi your looking for\n"
"WEETEEF CYU-BEE\n"
"Killun Wi-Fi Station\n"
"The Profundity SSID\n"
"Shoretrooper\n"
"Suck my force\n"
"Tantive V\n"
"holonet5\n"
"Cave Of Evil\n"
"MosEisleyEscortService\n"
"Bahrain Meteorite\n"
"Luke, I am your wifi\n"
"Aayla Secura Here\n"
"Chewbaccane\n"
"Archeon Nebula WiFi Galaxy\n"
"Zeta Class Imperial Shuttle\n"
"The Death Star GuFly you fools!\n"
"You shall not Enter\n"
"Wi-Fier Maggot\n"
"WiFisengard\n"
"Give up the Internet\n"
"Lord of the Pings\n"
"The Fellowships of the Wi-Fi\n"
"Palantir Network\n"
"Cleft of Light\n"
"Mordor\n"
"Isengard\n"
"Gondor\n"
"You have my Net And my password!\n"
"Destroy the one Wi-Fi\n"
"Never trust an open Wi-Fi\n"
"Wi-Fi Sandyman\n"
"Wi-Fi Gate-keeper\n"
"One Router to Rule Them All\n"
"Paths of the Internet\n"
"LANgorn forest\n"
"You shall not password!\n"
"Minas Morgal\n"
"PaLANtir\n"
"Your time will come you will face the same speed\n"
"Frodo’s Internet\n"
"One does not simply login to my Wi-Finner\n"
};
// ==================== //

// ===== Includes ===== //
#include <ESP8266WiFi.h>

extern "C" {
#include "user_interface.h"
  typedef void (*freedom_outside_cb_t)(uint8 status);
  int wifi_register_send_pkt_freedom_cb(freedom_outside_cb_t cb);
  void wifi_unregister_send_pkt_freedom_cb(void);
  int wifi_send_pkt_freedom(uint8 *buf, int len, bool sys_seq);
}
// ==================== //

// run-time variables
char emptySSID[32];
uint8_t channelIndex = 0;
uint8_t macAddr[6];
uint8_t wifi_channel = 1;
uint32_t currentTime = 0;
uint32_t packetSize = 0;
uint32_t packetCounter = 0;
uint32_t attackTime = 0;
uint32_t packetRateTime = 0;

// beacon frame definition
uint8_t beaconPacket[109] = {
  /*  0 - 3  */ 0x80, 0x00, 0x00, 0x00, // Type/Subtype: managment beacon frame
  /*  4 - 9  */ 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // Destination: broadcast
  /* 10 - 15 */ 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, // Source
  /* 16 - 21 */ 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, // Source

  // Fixed parameters
  /* 22 - 23 */ 0x00, 0x00, // Fragment & sequence number (will be done by the SDK)
  /* 24 - 31 */ 0x83, 0x51, 0xf7, 0x8f, 0x0f, 0x00, 0x00, 0x00, // Timestamp
  /* 32 - 33 */ 0xe8, 0x03, // Interval: 0x64, 0x00 => every 100ms - 0xe8, 0x03 => every 1s
  /* 34 - 35 */ 0x31, 0x00, // capabilities Tnformation

  // Tagged parameters

  // SSID parameters
  /* 36 - 37 */ 0x00, 0x20, // Tag: Set SSID length, Tag length: 32
  /* 38 - 69 */ 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, // SSID

  // Supported Rates
  /* 70 - 71 */ 0x01, 0x08, // Tag: Supported Rates, Tag length: 8
  /* 72 */ 0x82, // 1(B)
  /* 73 */ 0x84, // 2(B)
  /* 74 */ 0x8b, // 5.5(B)
  /* 75 */ 0x96, // 11(B)
  /* 76 */ 0x24, // 18
  /* 77 */ 0x30, // 24
  /* 78 */ 0x48, // 36
  /* 79 */ 0x6c, // 54

  // Current Channel
  /* 80 - 81 */ 0x03, 0x01, // Channel set, length
  /* 82 */      0x01,       // Current Channel

  // RSN information
  /*  83 -  84 */ 0x30, 0x18,
  /*  85 -  86 */ 0x01, 0x00,
  /*  87 -  90 */ 0x00, 0x0f, 0xac, 0x02,
  /*  91 -  92 */ 0x02, 0x00,
  /*  93 - 100 */ 0x00, 0x0f, 0xac, 0x04, 0x00, 0x0f, 0xac, 0x04, /*Fix: changed 0x02(TKIP) to 0x04(CCMP) is default. WPA2 with TKIP not supported by many devices*/
  /* 101 - 102 */ 0x01, 0x00,
  /* 103 - 106 */ 0x00, 0x0f, 0xac, 0x02,
  /* 107 - 108 */ 0x00, 0x00
};

// goes to next channel
void nextChannel() {
  if(sizeof(channels) > 1){
    uint8_t ch = channels[channelIndex];
    channelIndex++;
    if (channelIndex > sizeof(channels)) channelIndex = 0;
  
    if (ch != wifi_channel && ch >= 1 && ch <= 14) {
      wifi_channel = ch;
      wifi_set_channel(wifi_channel);
    }
  }
}

// generates random MAC
void randomMac() {
  for (int i = 0; i < 6; i++)
    macAddr[i] = random(256);
}

void setup() {
  // create empty SSID
  for (int i = 0; i < 32; i++)
    emptySSID[i] = ' ';

  // for random generator
  randomSeed(os_random());

  // set packetSize
  packetSize = sizeof(beaconPacket);
  if (wpa2) {
    beaconPacket[34] = 0x31;
  } else {
    beaconPacket[34] = 0x21;
    packetSize -= 26;
  }

  // generate random mac address
  randomMac();

  // start serial
  Serial.begin(115200);
  Serial.println();

  // get time
  currentTime = millis();

  // start WiFi
  WiFi.mode(WIFI_OFF);
  wifi_set_opmode(STATION_MODE);

  // set channel
  wifi_set_channel(channels[0]);

  // print out saved SSIDs
  Serial.println("SSIDs:");
  int i = 0;
  int len = sizeof(ssids);
  while(i < len){
    Serial.print((char)pgm_read_byte(ssids + i));
    i++;
  }
  
  Serial.println();
  Serial.println("Started \\o/");
  Serial.println();
}

void loop() {
  currentTime = millis();

  // send out SSIDs
  if (currentTime - attackTime > 100) {
    attackTime = currentTime;

    // temp variables
    int i = 0;
    int j = 0;
    int ssidNum = 1;
    char tmp;
    int ssidsLen = strlen_P(ssids);
    bool sent = false;
    
    // go to next channel
    nextChannel();

    while (i < ssidsLen) {
      // read out next SSID
      j = 0;
      do {
        tmp = pgm_read_byte(ssids + i + j);
        j++;
      } while (tmp != '\n' && j <= 32 && i + j < ssidsLen);

      uint8_t ssidLen = j - 1;
      
      // set MAC address
      macAddr[5] = ssidNum;
      ssidNum++;

      // write MAC address into beacon frame
      memcpy(&beaconPacket[10], macAddr, 6);
      memcpy(&beaconPacket[16], macAddr, 6);

      // reset SSID
      memcpy(&beaconPacket[38], emptySSID, 32);

      // write new SSID into beacon frame
      memcpy_P(&beaconPacket[38], &ssids[i], ssidLen);

      // set channel for beacon frame
      beaconPacket[82] = wifi_channel;

      // send packet
      if(appendSpaces){
        for(int k=0;k<3;k++){
          packetCounter += wifi_send_pkt_freedom(beaconPacket, packetSize, 0) == 0;
          delay(1);
        }
      }
      
      // remove spaces
      else {
        
        uint16_t tmpPacketSize = (packetSize - 32) + ssidLen; // calc size
        uint8_t* tmpPacket = new uint8_t[tmpPacketSize]; // create packet buffer
        memcpy(&tmpPacket[0], &beaconPacket[0], 38 + ssidLen); // copy first half of packet into buffer
        tmpPacket[37] = ssidLen; // update SSID length byte
        memcpy(&tmpPacket[38 + ssidLen], &beaconPacket[70], wpa2 ? 39 : 13); // copy second half of packet into buffer

        // send packet
        for(int k=0;k<3;k++){
          packetCounter += wifi_send_pkt_freedom(tmpPacket, tmpPacketSize, 0) == 0;
          delay(1);
        }

        delete tmpPacket; // free memory of allocated buffer
      }

      i += j;
    }
  }

  // show packet-rate each second
  if (currentTime - packetRateTime > 1000) {
    packetRateTime = currentTime;
    Serial.print("Packets/s: ");
    Serial.println(packetCounter);
    packetCounter = 0;
  }
}

