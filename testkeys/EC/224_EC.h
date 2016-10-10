/**
 *	@file    224_EC.h
 *	@version $Format:%h%d$
 *
 *	Auto generated from PEM file.
 */
/*
	Auto generated X.509 certificate as binary DER.
Certificate:
    Data:
        Version: 3
        Serial Number:
            21:34
        Issuer: CN=MatrixSSL Sample CA (Elliptic curve secp224r1), C=US, ST=WA, L=Seattle, O=Inside Secure Corporation, OU=Test
        Validity:
            Not Before: 2014/03/13
            Not After : 2017/03/12
        Subject: CN=MatrixSSL Sample Cert (Elliptic curve secp224r1), C=US, ST=WA, L=Seattle, O=Inside Secure Corporation, OU=Test
        Subject Public Key Info:
            Public Key Algorithm: id-ecPublicKey
                Public-Key: (224 bit)
                pub:
                    4b:f5:2a:c4:6e:b9:22:8c:a5:77:16:74:74:56:26:b8:
                    c8:0b:18:0e:2c:a0:3f:45:bf:3f:91:20
                    bc:f0:bb:8d:9d:d9:40:7a:3e:96:e8:31:81:1a:da:45:
                    bd:4b:cc:ea:6b:11:5f:bf:f3:32:cf:fa
                ASN1 OID: secp224r1
        X509v3 extensions:
            X509v3 Subject Alternative Name: DNS
                localhost
            X509v3 Subject Alternative Name: iPAddress
                127.0.0.1
            X509v3 Basic Constraints:
                CA:FALSE
            X509v3 Key Usage: 0x0
            X509v3 Extended Key Usage: 0x6
                TLS WWW server authentication
                TLS WWW client authentication
            X509v3 Subject Key Identifier:
                5a:bb:e1:b6:b6:1f:fe:66:27:b7:51:42:40:6a:d8:21:
                bc:e5:8f:b3
            X509v3 Authority Key Identifier:
                c1:2f:ad:c4:d5:01:f8:91:e2:cf:c1:be:e6:0b:22:e7:
                2d:3b:5b:d8
    Signature Algorithm: ecdsa-with-SHA256
        30:3d:02:1d:00:da:df:02:3f:bb:3d:e8:40:d8:91:0e:
        a8:b7:bc:af:98:24:9e:91:7a:7c:67:6b:fb:b3:04:68:
        a7:02:1c:50:1d:81:1d:57:92:46:d3:04:f1:2d:a2:25:
        00:43:74:7b:68:57:53:85:f3:be:32:91:c7:70:b0
*/
#define EC224_SIZE	671
const static unsigned char EC224[EC224_SIZE] =
	"\x30\x82\x02\x9b\x30\x82\x02\x49\xa0\x03\x02\x01\x02\x02\x02\x21"
	"\x34\x30\x0a\x06\x08\x2a\x86\x48\xce\x3d\x04\x03\x02\x30\x81\x98"
	"\x31\x0b\x30\x09\x06\x03\x55\x04\x06\x13\x02\x55\x53\x31\x0b\x30"
	"\x09\x06\x03\x55\x04\x08\x0c\x02\x57\x41\x31\x10\x30\x0e\x06\x03"
	"\x55\x04\x07\x0c\x07\x53\x65\x61\x74\x74\x6c\x65\x31\x22\x30\x20"
	"\x06\x03\x55\x04\x0a\x0c\x19\x49\x6e\x73\x69\x64\x65\x20\x53\x65"
	"\x63\x75\x72\x65\x20\x43\x6f\x72\x70\x6f\x72\x61\x74\x69\x6f\x6e"
	"\x31\x0d\x30\x0b\x06\x03\x55\x04\x0b\x0c\x04\x54\x65\x73\x74\x31"
	"\x37\x30\x35\x06\x03\x55\x04\x03\x0c\x2e\x4d\x61\x74\x72\x69\x78"
	"\x53\x53\x4c\x20\x53\x61\x6d\x70\x6c\x65\x20\x43\x41\x20\x28\x45"
	"\x6c\x6c\x69\x70\x74\x69\x63\x20\x63\x75\x72\x76\x65\x20\x73\x65"
	"\x63\x70\x32\x32\x34\x72\x31\x29\x30\x1e\x17\x0d\x31\x34\x30\x33"
	"\x31\x33\x32\x33\x32\x30\x34\x30\x5a\x17\x0d\x31\x37\x30\x33\x31"
	"\x32\x32\x33\x32\x30\x34\x30\x5a\x30\x81\x9a\x31\x0b\x30\x09\x06"
	"\x03\x55\x04\x06\x13\x02\x55\x53\x31\x0b\x30\x09\x06\x03\x55\x04"
	"\x08\x0c\x02\x57\x41\x31\x10\x30\x0e\x06\x03\x55\x04\x07\x0c\x07"
	"\x53\x65\x61\x74\x74\x6c\x65\x31\x22\x30\x20\x06\x03\x55\x04\x0a"
	"\x0c\x19\x49\x6e\x73\x69\x64\x65\x20\x53\x65\x63\x75\x72\x65\x20"
	"\x43\x6f\x72\x70\x6f\x72\x61\x74\x69\x6f\x6e\x31\x0d\x30\x0b\x06"
	"\x03\x55\x04\x0b\x0c\x04\x54\x65\x73\x74\x31\x39\x30\x37\x06\x03"
	"\x55\x04\x03\x0c\x30\x4d\x61\x74\x72\x69\x78\x53\x53\x4c\x20\x53"
	"\x61\x6d\x70\x6c\x65\x20\x43\x65\x72\x74\x20\x28\x45\x6c\x6c\x69"
	"\x70\x74\x69\x63\x20\x63\x75\x72\x76\x65\x20\x73\x65\x63\x70\x32"
	"\x32\x34\x72\x31\x29\x30\x4e\x30\x10\x06\x07\x2a\x86\x48\xce\x3d"
	"\x02\x01\x06\x05\x2b\x81\x04\x00\x21\x03\x3a\x00\x04\x4b\xf5\x2a"
	"\xc4\x6e\xb9\x22\x8c\xa5\x77\x16\x74\x74\x56\x26\xb8\xc8\x0b\x18"
	"\x0e\x2c\xa0\x3f\x45\xbf\x3f\x91\x20\xbc\xf0\xbb\x8d\x9d\xd9\x40"
	"\x7a\x3e\x96\xe8\x31\x81\x1a\xda\x45\xbd\x4b\xcc\xea\x6b\x11\x5f"
	"\xbf\xf3\x32\xcf\xfa\xa3\x81\x89\x30\x81\x86\x30\x09\x06\x03\x55"
	"\x1d\x13\x04\x02\x30\x00\x30\x1d\x06\x03\x55\x1d\x0e\x04\x16\x04"
	"\x14\x5a\xbb\xe1\xb6\xb6\x1f\xfe\x66\x27\xb7\x51\x42\x40\x6a\xd8"
	"\x21\xbc\xe5\x8f\xb3\x30\x1f\x06\x03\x55\x1d\x23\x04\x18\x30\x16"
	"\x80\x14\xc1\x2f\xad\xc4\xd5\x01\xf8\x91\xe2\xcf\xc1\xbe\xe6\x0b"
	"\x22\xe7\x2d\x3b\x5b\xd8\x30\x1d\x06\x03\x55\x1d\x25\x04\x16\x30"
	"\x14\x06\x08\x2b\x06\x01\x05\x05\x07\x03\x01\x06\x08\x2b\x06\x01"
	"\x05\x05\x07\x03\x02\x30\x1a\x06\x03\x55\x1d\x11\x04\x13\x30\x11"
	"\x82\x09\x6c\x6f\x63\x61\x6c\x68\x6f\x73\x74\x87\x04\x7f\x00\x00"
	"\x01\x30\x0a\x06\x08\x2a\x86\x48\xce\x3d\x04\x03\x02\x03\x40\x00"
	"\x30\x3d\x02\x1d\x00\xda\xdf\x02\x3f\xbb\x3d\xe8\x40\xd8\x91\x0e"
	"\xa8\xb7\xbc\xaf\x98\x24\x9e\x91\x7a\x7c\x67\x6b\xfb\xb3\x04\x68"
	"\xa7\x02\x1c\x50\x1d\x81\x1d\x57\x92\x46\xd3\x04\xf1\x2d\xa2\x25"
	"\x00\x43\x74\x7b\x68\x57\x53\x85\xf3\xbe\x32\x91\xc7\x70\xb0";
