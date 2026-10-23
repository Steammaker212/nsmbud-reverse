/* sub_606B2A18
 * address: 0x606B2A18   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606B2A18(
        int a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        float a5,
        float a6,
        float a7,
        char a8,
        char a9)
{
  unsigned int v10; // r3
  int v11; // r12
  unsigned int v12; // r0
  int v13; // s6
  float *v14; // r1
  float v15; // s4
  float v16; // s3
  float v17; // s1
  unsigned int v18; // r1
  int v19; // r0
  int v20; // r2
  StateMgr *v21; // r0
  int v22; // r0
  int v23; // r3
  __int64 v24; // r0

  FIELD_U8(a1, 63) = a9;
  *(float *)a1 = a5;
  FIELD_F32(a1, 4) = a6;
  FIELD_F32(a1, 8) = a7;
  FIELD_U32(a1, 12) = a2;
  FIELD_U32(a1, 16) = a3;
  FIELD_U8(a1, 20) = a4;
  FIELD_U8(a1, 21) = a8;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 28) = 0;
  FIELD_U32(a1, 32) = 0;
  FIELD_F32(a1, 104) = a5;
  FIELD_F32(a1, 108) = a6;
  FIELD_F32(a1, 112) = a7;
  FIELD_U32(a1, 40) = 0;
  FIELD_U8(a1, 53) = 0;
  v10 = (unsigned __int16)a2 >> 12;
  if ( v10 > 0xA )
    v10 = 0;
  FIELD_U8(a1, 62) = v10;
  v11 = (a2 >> 29) & 1;
  FIELD_U8(a1, 60) = (a2 & 0x20000000) != 0;
  FIELD_U32(a1, 68) = dword_60CBA3E0[11 * (__int16)v11 + v10];
  FIELD_U8(a1, 61) = (a2 & 0x40000000) != 0;
  FIELD_U8(a1, 65) = BYTE2(a3) & 1;
  FIELD_U32(a1, 56) = (a3 >> 20) & 1;
  v12 = dword_60CBA370[((a2 >> 20) & 0xF) + 10];
  v13 = HIBYTE(a2) & 0x1F;
  FIELD_U32(a1, 76) = v12;
  v14 = (float *)((char *)sinLutTable + ((v12 >> 20) & 0xFF0));
  v15 = (float)(unsigned int)v13 * 16.0;
  FIELD_F32(a1, 84) = v15;
  v16 = (float)(v12 & 0xFFFFFF);
  v17 = a6 - (float)(v15 * (float)(*v14 + (float)((float)(v16 * v14[1]) * 0.000000059605)));
  FIELD_F32(a1, 92) = a5 - (float)(v15 * (float)(v14[2] + (float)((float)(v16 * v14[3]) * 0.000000059605)));
  FIELD_F32(a1, 96) = v17;
  FIELD_F32(a1, 100) = a7;
  if ( FIELD_U8(a1, 63) )
  {
    v18 = FIELD_U32(a1, 16);
    v19 = (int)dword_60CBA370;
    v20 = dword_60CBA370[v18 >> 28];
    if ( !v11 )
      v19 = -v20;
    FIELD_U32(a1, 72) = v20;
    if ( !v11 )
      FIELD_U32(a1, 72) = v19;
  }
  else
  {
    FIELD_U32(a1, 72) = 0x80000000;
    LOBYTE(v18) = FIELD_U8(a1, 16);
  }
  FIELD_U32(a1, 48) = (unsigned __int8)v18;
  FIELD_U8(a1, 52) = 0;
  FIELD_U32(a1, 88) = word_60B08698[HIWORD(FIELD_U32(a1, 12)) & 0xF];
  FIELD_U32(a1, 44) = 0;
  v21 = (StateMgr *)(a1 + 196);
  if ( (_BYTE)v18 )
  {
    StateMgr__changeState(v21, (StateBase *)&dword_60CBA34C);
  }
  else
  {
    StateMgr__changeState(v21, (StateBase *)&dword_60CBA2EC);
    v22 = FIELD_U8(a1, 21);
    v23 = v22 - 33;
    HIDWORD(v24) = 1u >> (33 - v22);
    LODWORD(v24) = 1 << (v22 - 1);
    if ( v23 >= 0 )
    {
      HIDWORD(v24) = 1 << v23;
      LODWORD(v24) = 0;
    }
    if ( (v24 & FIELD_U64(EventMgr__instance, 16)) != 0 )
      FIELD_U32(a1, 72) = 0;
  }
  JUMPOUT(0x606B2C4C);
}
