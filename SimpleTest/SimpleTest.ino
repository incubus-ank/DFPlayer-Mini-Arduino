#include <SoftwareSerial.h>
#include <DFPlayer_Mini_Mp3.h>

SoftwareSerial mySerial(10, 11); //Подключение софтсериал порта

void setup () {
  Serial.begin (9600);
  mySerial.begin (9600);
  mp3_set_serial (mySerial); // Сериал порт для общения
  delay(1); //Задержка для выставления громкости
  mp3_set_volume (20); //Громкость 0-30
  mp3_set_EQ(0); // Режим эквалайзера (0 — Normal, 1 — Pop, 2 — Rock, 3 — Jazz, 4 — Classic, 5 — Bass)
}

void loop () {        
  mp3_play (1); //Включить трек 0001
  delay (6000);
  mp3_next ();  //Влючить следующий трек
  delay (6000);
  mp3_prev ();  //Предыдущий следующий трек
  delay (6000);
  mp3_play (3);
  delay (6000);
  // mp3_pause();       // Пауза
  // mp3_stop();        // Стоп
  // mp3_random_play(); // Случайный трек
  // mp3_reset();       // Перезагрузка
  // mp3_sleep();       // Сон
}
