/* sub_606EEEC4
 * address: 0x606EEEC4   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_606EEEC4(int a1)
{
  float v2; // s16
  float v3; // s0
  float v4; // s2
  float v5; // s16
  float v6; // s0
  float v7; // s18
  int v8; // r7
  int v9; // r10
  float v10; // s0
  int v11; // r0
  float v12; // s0
  unsigned int v13; // r1
  unsigned int v14; // r2
  float v15; // s6

  v2 = FIELD_F32(dword_60CC6484, 112);
  v3 = FIELD_F32(dword_60CC6484, 120);
  if ( FIELD_U8(a1, 26) )
  {
    v4 = (float)FIELD_U8(a1, 26) * 16.0;
    v5 = v2 + v4;
    v6 = v3 - v4;
  }
  else
  {
    v5 = v2 + (float)(FIELD_F32(dword_60CC6484, 104) * 0.25);
    v6 = v3 + -32.0;
  }
  v7 = v6 - v5;
  v8 = 0;
  v9 = (int)(float)((float)(v6 - v5) / 48.0) + 1;
  while ( 1 )
  {
    v10 = (float)(int)((sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) * (unsigned __int64)(unsigned int)v9) >> 32);
    v11 = 8 - FIELD_U32(a1, 6104);
    if ( (unsigned int)v11 <= 7 )
      break;
LABEL_14:
    if ( ++v8 >= 50 )
      return v5 + (float)(v7 * 0.5);
  }
  v12 = (float)(v5 + (float)(v10 * 48.0)) + 24.0;
  if ( v11 )
  {
    v13 = 0;
    while ( 1 )
    {
      v14 = 0;
      if ( v13 < 8 )
        v14 = v13;
      v15 = *(float *)(a1 + 4 * v14 + 6116);
      if ( v15 <= (float)(v12 + 24.0) && v15 >= 0.0 )
        break;
      if ( (int)++v13 >= v11 )
        return v12;
    }
    goto LABEL_14;
  }
  return v12;
}
