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
* ���̃v���O������include���APC��œ��삵���v���O������Arduino��ł�����ɓ��삷��ƕۏ؂�����̂ł͂���܂���B
* �߂�l�E������Arduino�̕W���֐��ƈقȂ�\��������܂��B
* ����m�F���s���Ă��Ȃ��֐�������܂��B
* ���(Mr-Ojii)�͂��̃v���O�����𗘗p�������������Q�E���ɂ��āA�S���̐ӔC�𕉂�Ȃ����̂Ƃ��܂��B

### ������


|        �֐���        |����                                                     |
|:--------------------:|:--------------------------------------------------------|
|        pinMode       |pinmode�ϐ��Ƀ��[�h���i�[���܂�                          |
|     digitalWrite     |pinstate�ϐ��Ɉ����Ƃ��ēn���ꂽ��Ԃ��i�[���܂�         |
|      digitalRead     |pinstate�ϐ��Ɋi�[����Ă����Ԃ�Ԃ��܂�               |
|      analogWrite     |�������܂���                                             |
|      analogRead      |1023��Ԃ��܂�                                           |
|    analogReference   |�������܂���                                             |
| analogReadResolutions|�������܂���                                             |
|analogWriteResolutions|�������܂���                                             |
|      randomSeed      |�w�肳�ꂽ�l�𗐐������̃V�[�h�l�ɃZ�b�g���܂�           |
|        random        |�w�肳�ꂽ�l�̊Ԃ̗�����Ԃ��܂�                         |
|        millis        |�v���O�������J�n����Ă���̃~���b��Ԃ��܂�             |
|        micros        |�v���O�������J�n����Ă���̃}�C�N���b��Ԃ��܂�         |
|         delay        |�v���O�������w��~���b�����~�߂܂�                       |
|  delayMicroseconds   |�v���O�������w��}�C�N���b�����~�߂܂�                   |
|     Serial.begin     |�w�肳�ꂽ�f�[�^�]���X�s�[�h������ϐ��ɃZ�b�g���܂�     |
|      Serial.end      |�f�[�^�]���X�s�[�h�i�[�p�ϐ������������܂�               |
|   Serial.available   |0��Ԃ��܂�                                              |
|      Serial.read     |���p�X�y�[�X��Ԃ��܂�                                   |
|      Serial.peek     |���p�X�y�[�X��Ԃ��܂�                                   |
|     Serial.flush     |�������܂���                                             |
|     Serial.print     |�w�肳�ꂽ���̂�W���o�͂��܂�                           |
|    Serial.println    |�w�肳�ꂽ���̂�W���o�͂��A���s���܂�                   |
|     Serial.write     |0��Ԃ��܂�                                              |


### Changelog
�����ł� **������** �Ƃ́A���O�̂ݎ������A���g���������Ȃ����Ƃ��w�����ƂƂ���B

* 2020/11/28 �֐��̎���
  + pinMode�̎���
  + digitalWrite�̎���
  + digitalRead�̎���
  + randomSeed�̎���
  + random�̎���

* 2020/11/26 �֐��̎���
  + analogReference�̉�����
  + analogReadResolutions�̉�����
  + analogWriteResolutions�̉�����
  + millis�̎���
  + micros�̎���
  + Serial.begin�̎���
  + Serial.end�̎���

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

* 2020/11/24 ����J�n �\�z���ł߂�