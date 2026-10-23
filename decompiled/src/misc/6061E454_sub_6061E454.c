/* sub_6061E454
 * address: 0x6061E454   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6061E454(int a1)
{
  float v2; // s18
  float v3; // s16
  unsigned int U32; // r0
  float *v5; // r0
  _DWORD v7[18]; // [sp+0h] [bp-90h] BYREF
  _DWORD v8[18]; // [sp+48h] [bp-48h] BYREF

  memset(v8, 0, 44);
  v2 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  *(float *)&v8[4] = v2;
  v3 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  *(float *)&v8[5] = v3;
  *(float *)&v8[6] = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
  v8[2] = FIELD_U32(a1, 8);
  LOBYTE(v8[8]) = FIELD_U8(a1, 86);
  v7[0] = -1054867456;
  v7[1] = 1092616192;
  v7[2] = 0;
  v7[3] = 1092616192;
  v7[4] = 1092616192;
  v7[5] = 1092616192;
  v7[6] = -1054867456;
  memset(&v7[7], 0, 12);
  v7[10] = 1092616192;
  v7[11] = 0;
  v7[12] = -1054867456;
  v7[13] = -1054867456;
  v7[14] = 0;
  v7[15] = -1054867456;
  v7[16] = 1092616192;
  v7[17] = -1054867456;
  U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  if ( FIELD_U32(a1, 1312) == 1 )
  {
    v5 = (float *)&v7[2 * ((9 * (unsigned __int64)U32) >> 32)];
    *(float *)&v8[4] = *v5 + v2;
    *(float *)&v8[5] = v3 + (float)(v5[1] + -8.0);
    v8[3] = Profile__get(0x209u);
    v8[0] = 0x20000000;
  }
  return sub_600080BC((_DWORD *)ActorMgr__instance, v8);
}
