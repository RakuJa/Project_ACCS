#ifndef MACROS
#define MACROS

#define FAIL    -1

#define HANDSHAKE_ERROR "0"
#define HANDSHAKE_ACK "1"

#define SERVER_CERT_NAME "ServerCert.pem"

#define NONCE_LEN 16
#define SESSION_KEY_LENGTH 16
#define USERNAME_MAX_LENGTH 17
#define IV_LENGTH 12
#define TAG_LENGTH 16
#define AAD_LENGTH 24
#define FILENAME_LENGTH 255
#define PAYLOAD_BUFFER_MAX_SIZE 2048


enum OperationIDs {
    OPERATION_ID_ACK = 0,
    OPERATION_ID_UPLOAD,
    OPERATION_ID_DOWNLOAD,
    OPERATION_ID_DELETE,
    OPERATION_ID_LIST,
    OPERATION_ID_RENAME,
    OPERATION_ID_LOGOUT,
    OPERATION_ID_DONE,
    OPERATION_ID_ABORT,
    OPERATION_ID_DATA
};

#endif
