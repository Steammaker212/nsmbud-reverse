/* sub_602E3590
 * address: 0x602E3590   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E3590(int a1, int a2)
{
  char *v4; // r6
  float v5; // s0
  float v6; // s16
  float v7; // s4
  float v8; // s2
  float v9; // s0
  int v10; // r0
  int v11; // r1
  int v12; // r1
  char v14; // r1
  float v15[8]; // [sp+0h] [bp-20h] BYREF

  FIELD_U8(a1, 15378) = (FIELD_U8(a1, 15378) & 1) == 0;
  v4 = (char *)(a1 + 15380);
  v5 = FIELD_F32(a1, 6492);
  v6 = FIELD_F32(a1, 112) + flt_60AFEC18[FIELD_U8(a1, 15380)];
  v7 = FIELD_F32(a1, 6444);
  v8 = FIELD_F32(a1, 144) * 64.0;
  if ( FIELD_U32(a1, 80) )
  {
    if ( v7 < v5 )
      v9 = v7 - v8;
    else
      v9 = v5 - v8;
  }
  else if ( v7 < v5 )
  {
    v9 = v8 + v5;
  }
  else
  {
    v9 = v7 + v8;
  }
  v15[0] = v9;
  v15[1] = v6;
  v10 = sub_602E3270(a1, v15);
  v11 = v10 + 1;
  if ( (unsigned int)(v10 + 1) < 3 )
  {
    if ( a2 == 1 )
      FIELD_F32(a1, 112) = v6;
    else
      v11 = 15432;
    if ( a2 != 1 )
      *(float *)(a1 + v11) = v6;
    FIELD_U8(a1, 15379) = byte_60AFEC2A[(unsigned __int8)*v4];
    v14 = 0;
    if ( v10 == -1 )
      v14 = 2;
    if ( v10 == 1 )
      v14 = 1;
    *v4 = v14;
    return 1;
  }
  else
  {
    v12 = FIELD_U32(a1, 80);
    FIELD_U8(a1, 15381) = byte_60AFEC24[2 * (unsigned __int8)*v4 + v12];
    FIELD_U32(a1, 80) = v12 == 0;
    return 0;
  }
}
