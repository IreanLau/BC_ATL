/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Mon Jan 04 16:12:39 2016
 */
/* Compiler settings for C:\Users\lenovo\Desktop\atlmath\atlmath.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_IMath = {0xE3DE4890,0x826D,0x4525,{0x98,0xCF,0x69,0x6A,0xA5,0x58,0xD5,0x26}};


const IID LIBID_ATLMATHLib = {0x0C8BBBAC,0x87A0,0x45A0,{0x95,0x34,0x1E,0xBE,0xE4,0xFF,0x71,0xC3}};


const CLSID CLSID_Math = {0x1038F30C,0x3BA9,0x44F1,{0x8A,0x31,0xA0,0xA3,0xB1,0xCB,0x32,0x02}};


#ifdef __cplusplus
}
#endif

