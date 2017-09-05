
#ifndef __CONSTANTS__
#define __CONSTANTS__

#define OK 0
#define CREATE_THREAD_PRODUCER_FAIL 1
#define CREATE_THREAD_CONSUMER_FAIL 2
#define CREATE_THREAD_CTTICCLIENT_FAIL 3
#define CREATE_THREAD_CTTICRECEIVER_FAIL 4
#define CREATE_THREAD_SEMAPHORE_FAIL 5
#define RESUME_THREAD_PRODUCER_FAIL 6
#define RESUME_THREAD_CONSUMER_FAIL 7
#define RESUME_THREAD_CTTICCLIENT_FAIL 8
#define TIB_INVALID_DESTINATION 9
#define TIB_INVALID_MESSAGE_DATA 10
#define TIB_CREATE_ERRORCONTEXT_FAIL 11
#define TIB_INTERRUPTED 12
#define CTTIC_CLIENT_CONNECTION_FAIL 13
#define CTTIC_CLIENT_CREATE_CALLBACK_FAIL 14
#define CTTIC_CLIENT_OPT_SUBSCRIBE_FAIL 15
#define CREATE_CALLBACK_MUTEX_FAIL 16
#define LOGIN_FAIL 17
#define PLACE_ORDER_FAIL 18
#define CANCEL_ORDER_FAIL 19
#define QUERY_ORDER_FAIL 20
#define TIBCO_FAIL	21
#define TIBCO_SERVER_NOTRUNNING	22

#define NUM_THREAD_SEMAPHORE 3
#define TIB_PRODUCER_THREAD_NO 0
#define TIB_CONSUMER_THREAD_NO 1
#define CTTICCLIENT_THREAD_NO 2
#define CTTICRECEIVER_THREAD_NO 3

#define DEFAULT_TIMEOUT 3000

char *THREAD_NAMES[] = {
	"Tib Producer Signal",
	"Tib Consumer Signal",
	"CTTIC Client Signal",
	"CTTIC Receiver Signal"
};

#define DEFAULT_TIB_SERVER "127.0.0.1:7222"
#define DEFAULT_TIB_USER "admin"
#define DEFAULT_TIB_PWD ""
#define DEFAULT_TIB_PK_PWD ""
#define DEFAULT_TIB_QUEUE_CONSUMER "CTTIC_CMD_QUEUE"
#define DEFAULT_TIB_QUEUE_PRODUCER "CTTIC_QUOTES_QUEUE"
#define DEFAULT_TIB_APP_NAME "tibemsd"

#define DEFAULT_CONFIG_FILE "subscriber.ini"
#define DEFAULT_OPT_CONFIG_FILE "OptSubscription.ini"

#define DEFAULT_ACCOUNT "9898012971"
#define DEFAULT_OP_ACCOUNT "9899012971"
#define DEFAULT_IDENTITY_TYPE "2"
#define DEFAULT_PASSWORD_TYPE "2"
#define DEFAULT_INPUT_CONTENT "1"
#define DEFAULT_OP_ENTRUST_WAY "3"
#define DEFAULT_PASSWORD "111111"
#define DEFAULT_REQUEST_NO "500"

// Function numbers for CSAPI
#define IFUNC_USER_LOGIN	331100
#define IFUNC_PLACE_ORDER	333002
#define IFUNC_PLACE_OPT_ORDER	338011
#define IFUNC_CANCEL_OPT_ORDER	338012
#define IFUNC_QUERY_ORDER	333101
#define IFUNC_CANCEL_ORDER	333017
#define IFUNC_QUERY_USER_INFO	331300
#define IFUNC_QUERY_FUND_INFO	332255
#define IFUNC_QUERY_OPT_FUND_INFO	332254
#define IFUNC_QUERY_OPT_ORDER	338020
#define IFUNC_QUERY_OPT_CODE	338000
#define IFUNC_QUERY_OPT_DEAL	338021

#endif
