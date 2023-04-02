#include <stdio.h>
#include <string.h>  // 內含 strlen() 函式

void XORCipher(char *data, char *output, char *key,
               int dataLen, int keyLen) {
  int i;
  for (i = 0; i < dataLen; i++) {
    output[i] = data[i] ^ key[i % keyLen];
    printf("%02X", output[i]);
  }
  printf("\n");
  output[i] = '\0';
}

int main() {
  char *data = "Animal Farm";  // 明文資料
  char *key = "RUN";           // 密鑰文字
  char cipher[20];             // 加密文字
  char plain[20];              // 解密文字
  int dataLen = strlen(data);  // 資料長度（不含 '\0' 結尾）
  int keyLen = strlen(key);    // 密鑰長度

  printf("XOR加密：");
  XORCipher(data, cipher, key, dataLen, keyLen);
  printf("XOR解密：");
  XORCipher(cipher, plain, key, dataLen, keyLen);
  printf("明文：%s\n", plain);
}