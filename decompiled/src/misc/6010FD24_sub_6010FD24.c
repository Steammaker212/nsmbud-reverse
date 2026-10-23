/* sub_6010FD24
 * address: 0x6010FD24   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6010FD24(int a1)
{
  unsigned int v2; // r0
  unsigned int v3; // r2
  int v4; // r6
  int v5; // r11
  unsigned int v6; // r3
  int v7; // r0
  int v8; // r5
  int v9; // r7
  int v10; // r8
  int v11; // r9
  Profile *v12; // r0
  int v13; // r1
  int v14; // r0
  float v15; // s0
  int v17; // [sp+0h] [bp-38h]
  int v18; // [sp+4h] [bp-34h]

  FIELD_U8(a1, 535) = 0;
  v2 = FIELD_U32(a1, 20);
  FIELD_F32(a1, 644) = (float)((unsigned int)(unsigned __int8)(v2 >> 20) + 4) * 16.0;
  FIELD_U8(a1, 664) = (v2 & 0x10000000) != 0;
  v3 = FIELD_U32(a1, 24);
  v4 = (v3 >> 8) & 0xF;
  v5 = v3 & 0xF;
  v18 = v4 << 8;
  FIELD_U32(a1, 652) = v4 << 8;
  v6 = HIWORD(v2) & 3;
  if ( !v4 )
    v4 = 4;
  FIELD_U32(a1, 80) = v6;
  v17 = v6 | (((v2 >> 28) & 1) << 28) | 0x10;
  FIELD_U32(a1, 648) = v17;
  LOWORD(v2) = 64;
  if ( v6 >= 2 )
  {
    v7 = v3 & 0xF;
    if ( (v3 & 0xF) == 0 )
      v7 = 4;
    v2 = (unsigned int)(float)((float)(unsigned int)(v4 + v7) * 16.0);
    FIELD_U16(a1, 658) = v2;
  }
  FIELD_U16(a1, 656) = v2;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1140850688;
  FIELD_U32(a1, 504) = 1140850688;
  FIELD_U32(a1, 508) = 1140850688;
  FIELD_U32(a1, 512) = 1140850688;
  v8 = FIELD_U32(a1, 8);
  v9 = FIELD_U32(a1, 108);
  v10 = FIELD_U32(a1, 112);
  v11 = FIELD_U32(a1, 116);
  v12 = Profile__get(0x110u);
  v13 = FIELD_U32(a1, 160);
  FIELD_U32(a1, 668) = v17;
  FIELD_U32(a1, 672) = v18;
  FIELD_U32(a1, 676) = v8;
  FIELD_U32(a1, 680) = v12;
  FIELD_U32(a1, 684) = v9;
  FIELD_U32(a1, 688) = v10;
  FIELD_U32(a1, 692) = v11;
  FIELD_U32(a1, 696) = v13;
  FIELD_U32(a1, 700) = 0;
  FIELD_U32(a1, 704) = 0;
  FIELD_U32(a1, 708) = 0;
  v14 = FIELD_U32(a1, 80);
  if ( (v14 & 0xFFFFFFFE) == 2 )
  {
    if ( !v5 )
      v5 = 4;
    v15 = (float)(unsigned int)(v4 + v5) * 16.0;
    FIELD_F32(a1, 716) = v15;
    if ( v14 == 3 )
      FIELD_F32(a1, 716) = -v15;
  }
  return 1;
}
