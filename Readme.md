# Arduino To Cpp
### これは何？
Arduino言語のソースコードをC++とみなしてGCCなどでコンパイルできるようにすることを目的としたプロジェクト。

個人的にArduinoの挙動をPCで再現したかったために作成を開始した。  
(Arduinoが手元にない状態で、Arduino言語を書かなければいけなくなったので)

### 使用方法
**ファイルにこの``ArduinoToCpp.hpp``をincludeするだけ**

includeした場合でも、Arduino IDEでコンパイルできるはずです。  
gccなどでコンパイルする場合、拡張子を変更しないとコンパイルできない可能性があります。

### 注意事項
* 戻り値がArduinoの型と異なる可能性があります。

### 実装状況


|      関数名      |説明                                  |
|:----------------:|:-------------------------------------|
|      pinMode     |代替として、標準出力をします          |
|   digitalWrite   |代替として、標準出力をします          |
|    digitalRead   |HIGHを返します                        |
|    analogWrite   |代替として、標準出力をします          |
|    analogRead    |1023を返します                        |
|       delay      |プログラムを指定ミリ秒だけ止めます    |
|delayMicroseconds |プログラムを指定マイクロ秒だけ止めます|
|   Serial.begin   |代替として、標準出力をします          |
|   Serial.print   |指定されたものを標準出力します        |
|  Serial.println  |指定されたものを標準出力し、改行します|


### Changelog
* 2020/11/25 第一版  
  + pinModeの仮実装
  + digitalWriteの仮実装
  + digitalReadの仮実装
  + analogWriteの仮実装
  + analogReadの仮実装
  + delayの実装
  + delayMicrosecondsの実装
  + Serial.beginの仮実装
  + Serial.printの実装
  + Serial.printlnの実装  
  + ライセンスの追加

* 2020/11/24 製作開始