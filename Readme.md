# Arduino To Cpp
### ����͉��H
Arduino����̃\�[�X�R�[�h��C++�Ƃ݂Ȃ���GCC�ȂǂŃR���p�C���ł���悤�ɂ��邱�Ƃ�ړI�Ƃ����v���W�F�N�g�B

�l�I��Arduino�̋�����PC�ōČ��������������߂ɍ쐬���J�n�����B  
(Arduino���茳�ɂȂ���ԂŁAArduino����������Ȃ���΂����Ȃ��Ȃ����̂�)

### �g�p���@
**�t�@�C���ɂ��̃��|�W�g������``ArduinoToCpp.hpp``��include���邾��**

include�����ꍇ�ł��AArduino IDE�ŃR���p�C���ł���͂��ł��B  
gcc�ȂǂŃR���p�C������ꍇ�A�g���q��ύX���Ȃ��ƃR���p�C���ł��Ȃ��\��������܂��B

### ���ӎ���
* �߂�l�E������Arduino�̕W���֐��ƈقȂ�\��������܂��B
* ����m�F���s���Ă��Ȃ��֐�������܂��B
* ���(Mr-Ojii)�͂��̃v���O�����𗘗p�������������Q�E���ɂ��āA�S���̐ӔC�𕉂�Ȃ����̂Ƃ��܂��B

### ������


|        �֐���        |����                                            |
|:--------------------:|:-----------------------------------------------|
|        pinMode       |�������܂���                                    |
|     digitalWrite     |�������܂���                                    |
|      digitalRead     |HIGH��Ԃ��܂�                                  |
|      analogWrite     |�������܂���                                    |
|      analogRead      |1023��Ԃ��܂�                                  |
|    analogReference   |�������܂���                                    |
| analogReadResolutions|�������܂���                                    |
|analogWriteResolutions|�������܂���                                    |
|        millis        |�v���O�������J�n����Ă���̃~���b��Ԃ��܂�    |
|        micros        |�v���O�������J�n����Ă���̃}�C�N���b��Ԃ��܂�|
|         delay        |�v���O�������w��~���b�����~�߂܂�              |
|  delayMicroseconds   |�v���O�������w��}�C�N���b�����~�߂܂�          |
|     Serial.begin     |�������܂���                                    |
|      Serial.end      |�������܂���                                    |
|   Serial.available   |0��Ԃ��܂�                                     |
|      Serial.read     |���p�X�y�[�X��Ԃ��܂�                          |
|      Serial.peek     |���p�X�y�[�X��Ԃ��܂�                          |
|     Serial.flush     |�������܂���                                    |
|     Serial.print     |�w�肳�ꂽ���̂�W���o�͂��܂�                  |
|    Serial.println    |�w�肳�ꂽ���̂�W���o�͂��A���s���܂�          |
|     Serial.write     |0��Ԃ��܂�                                     |


### Changelog
�����ł� **������** �Ƃ́A���O�̂ݎ������A���g���������Ȃ����Ƃ��w�����ƂƂ���B

* 2020/11/26 �֐��̎���
  + analogReference�̉�����
  + analogReadResolutions�̉�����
  + analogWriteResolutions�̉�����
  + millis�̎���
  + micros�̎���

* 2020/11/25 �֐��̎���  
  + pinMode�̉�����
  + digitalWrite�̉�����
  + digitalRead�̉�����
  + analogWrite�̉�����
  + analogRead�̉�����
  + delay�̎���
  + delayMicroseconds�̎���
  + Serial.begin�̉�����
  + Serial.end�̉�����
  + Serial.available�̉�����
  + Serial.read�̉�����
  + Serial.peek�̉�����
  + Serial.flush�̉�����
  + Serial.print�̎���
  + Serial.println�̎���
  + Serial.write�̉�����  
  + OUTPUT/INPUT�̒�`
  + HIGH/LOW�̒�`
  + ���C�Z���X�̒ǉ�

* 2020/11/24 ����J�n�@�\�z���ł߂�