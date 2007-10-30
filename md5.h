#ifndef _MD5_H_
#define _MD5_H_

#ifdef __APPLE__
#include <openssl/md5.h>

void MD5Init(MD5_CTX *);
void MD5Update(MD5_CTX *, const unsigned char *, unsigned int);
void MD5Final(unsigned char [16], MD5_CTX *);
char *MD5End(MD5_CTX *, char *);
char *MD5File(const char *, char *);
char *MD5FileChunk(const char *, char *, off_t, off_t);
char *MD5Data(const unsigned char *, unsigned int, char *);
#else /* !__APPLE__ */
#include <sys/md5.h>
#endif /* __APPLE__ */

#endif /* _MD5_H_ */
