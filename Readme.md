# Arduino To Cpp
### これは何？
Arduino言語のソースコードをC++とみなしてGCCなどでコンパイルできるようにすることを目的としたプロジェクト。

個人的にArduinoの挙動をPCで再現したかったために作成を開始した。  
(Arduinoが手元にない状態で、Arduino言語を書かなければいけなくなったので)

### 使用方法
**ファイルにこのリポジトリ内の``ArduinoToCpp.hpp``をincludeするだけ**

includeした場合でも、Arduino IDEでコンパイルできるはずです。  
gccなどでコンパイルする場合、拡張子を変更しないとコンパイルできない可能性があります。

### 注意事項
* 戻り値・引数がArduinoの標準関数と異なる可能性があります。
* 動作確認を行っていない関数があります。
* 作者(Mr-Ojii)はこのプログラムを利用し発生した損害・問題について、全くの責任を負わないものとします。

### 実装状況


|        関数名        |説明                                            |
|:--------------------:|:-----------------------------------------------|
|        pinMode       |何もしません                                    |
|     digitalWrite     |何もしません                                    |
|      digitalRead     |HIGHを返します                                  |
|      analogWrite     |何もしません                                    |
|      analogRead      |1023を返します                                  |
|    analogReference   |何もしません                                    |
| analogReadResolutions|何もしません                                    |
|analogWriteResolutions|何もしません                                    |
|        millis        |プログラムが開始されてからのミリ秒を返します    |
|        micros        |プログラムが開始されてからのマイクロ秒を返します|
|         delay        |プログラムを指定ミリ秒だけ止めます              |
|  delayMicroseconds   |プログラムを指定マイクロ秒だけ止めます          |
|     Serial.begin     |何もしません                                    |
|      Serial.end      |何もしません                                    |
|   Serial.available   |0を返します                                     |
|      Serial.read     |半角スペースを返します                          |
|      Serial.peek     |半角スペースを返します                          |
|     Serial.flush     |何もしません                                    |
|     Serial.print     |指定されたものを標準出力します                  |
|    Serial.println    |指定されたものを標準出力し、改行します          |
|     Serial.write     |0を返します                                     |


### Changelog
ここでの **仮実装** とは、名前のみ実装し、中身を実装しないことを指すこととする。

* 2020/11/26 関数の実装
  + analogReferenceの仮実装
  + analogReadResolutionsの仮実装
  + analogWriteResolutionsの仮実装
  + millisの実装
  + microsの実装

* 2020/11/25 関数の実装  
  + pinModeの仮実装
  + digitalWriteの仮実装
  + digitalReadの仮実装
  + analogWriteの仮実装
  + analogReadの仮実装
  + delayの実装
  + delayMicrosecondsの実装
  + Serial.beginの仮実装
  + Serial.endの仮実装
  + Serial.availableの仮実装
  + Serial.readの仮実装
  + Serial.peekの仮実装
  + Serial.flushの仮実装
  + Serial.printの実装
  + Serial.printlnの実装
  + Serial.writeの仮実装  
  + OUTPUT/INPUTの定義
  + HIGH/LOWの定義
  + ライセンスの追加

* 2020/11/24 製作開始　構想を固める