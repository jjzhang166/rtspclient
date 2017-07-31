/*
 * RTSPClient.h
 *
 *  Created on: 2017年8月11日
 *      Author: hxh
 */

#ifndef RTSPCLIENT_RTSPCLIENT_H_
#define RTSPCLIENT_RTSPCLIENT_H_





#define OUR_DEV
//#define HOME
typedef void * HANDLE;
#ifdef OUR_DEV
#define URL			"192.168.1.95"
#define DEF_RTSP_URL "rtsp://192.168.1.95/264.264"
// #define DEF_RTSP_URL "rtsp://192.168.0.28/trackID1"
// #define DEF_RTSP_URL "rtsp://192.168.2.112/264.264"
#else
#define DEF_RTSP_URL "rtsp://192.168.0.29/"
#endif

#define RTSP_PORT 554
#define PRG_NAME	"main"
#define UDP_RECV_PORT0 	1023
#define UDP_RECV_PORT1 	1024
#define max( a, b ) ( a > b ? a : b )



HANDLE RTSP_New( const char *strIP , int maj, const char *usr, const char *pwd , HANDLE Vdec );

#endif /* RTSPCLIENT_RTSPCLIENT_H_ */
