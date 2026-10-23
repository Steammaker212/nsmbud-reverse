/* sub_602E4BC8
 * address: 0x602E4BC8   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E4BC8(int result, int a2, int a3, int a4)
{
  __int64 v4; // d8
  int v5; // r1
  int *v6; // r6
  int v7; // r7
  float v8; // r4
  float v9; // r5
  float v10; // s16
  unsigned int U32; // r0
  int v12; // r2
  int v13; // s4
  int v14; // r0
  float v15; // s0
  float v16[5]; // [sp+0h] [bp-38h] BYREF
  __int16 v17; // [sp+14h] [bp-24h]
  char v18; // [sp+16h] [bp-22h]
  __int64 v19; // [sp+18h] [bp-20h]

  if ( !FIELD_U8(result, 15438) && FIELD_U32(result, 6364) == 1 )
    FIELD_U8(result, 15439) = 1;
  v19 = v4;
  v6 = (int *)(result + 15388);
  v5 = FIELD_U32(result, 15388);
  if ( v5 )
  {
    v7 = v5 - 1;
    *v6 = v5 - 1;
    v8 = FIELD_F32(result, 6384);
    v9 = FIELD_F32(result, 6380);
    v10 = FIELD_F32(result, 6376);
    if ( v5 == 1 )
    {
      v12 = 0;
      v15 = 8.0;
      v14 = FIELD_F32(result, 120) < 0.0;
    }
    else
    {
      U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
      v12 = *v6;
      v13 = (U32 >> 9) | 0x3F800000;
      v14 = v7 % 2;
      v15 = (float)((float)(*(float *)&v13 + -1.0) * 4.0) + -2.0;
    }
    v16[0] = v10 + v15;
    v16[1] = v9;
    v16[2] = v8;
    LODWORD(v16[3]) = v14;
    LODWORD(v16[4]) = 1;
    v17 = 3;
    v18 = 0;
    return ((int (__fastcall *)(int, float *, int, int))sub_60583410)(dword_60CAF15C, v16, v12, a4);
  }
  return result;
}
