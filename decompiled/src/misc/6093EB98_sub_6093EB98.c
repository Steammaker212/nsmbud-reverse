/* sub_6093EB98
 * address: 0x6093EB98   size: 664   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6093EB98(int a1, __int16 a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, char a10)
{
  int v14; // r5
  int v15; // r0
  int v16; // r0
  int v17; // r1
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int result; // r0
  int v22; // [sp+0h] [bp-38h]
  int v23; // [sp+0h] [bp-38h]
  int v24; // [sp+4h] [bp-34h]
  int v25; // [sp+8h] [bp-30h]
  int v26; // [sp+8h] [bp-30h]
  int v27; // [sp+Ch] [bp-2Ch]

  FIELD_U16(a1, 338) = 0;
  FIELD_U32(a1, 272) = 0;
  FIELD_U8(a1, 334) = 0;
  FIELD_U8(a1, 333) = 0;
  FIELD_U32(a1, 316) = 0;
  FIELD_U32(a1, 304) = 0;
  FIELD_U8(a1, 342) = FIELD_U8(a1, 342) & 0xFC | 1;
  FIELD_U8(a1, 335) = a6;
  v14 = a10 & 1;
  FIELD_U8(a1, 340) = a10;
  if ( (a10 & 4) != 0 && sub_60920DC0(a2) )
    v14 = ((FIELD_U8(a1, 336) >> 4) & 2 | v14) ^ 2;
  v15 = (FIELD_U8(a1, 340) >> 1) & 4 | v14;
  switch ( a3 )
  {
    case 0:
      sub_6091FDB0(a1, 0, a2, a4, 1, 1, a6, v15, 0, 1);
      break;
    case 1:
      v22 = a5;
      v25 = a6;
      goto LABEL_17;
    case 2:
      v23 = a5;
      v24 = a8;
      v26 = a6;
      v27 = (FIELD_U8(a1, 340) >> 1) & 4 | v14;
      v16 = a1;
      v17 = 2;
      goto LABEL_10;
    case 3:
      sub_6091FDB0(a1, 3, a2, a4, a8, 1, a6, v15, 0, 1);
      break;
    case 4:
      v23 = a5;
      v24 = a8;
      v26 = a6;
      v27 = (FIELD_U8(a1, 340) >> 1) & 4 | v14;
      v16 = a1;
      v17 = 4;
LABEL_10:
      sub_6091FDB0(v16, v17, a2, a4, v23, v24, v26, v27, 0, 1);
      break;
    case 5:
      if ( a7 < 1 )
      {
        v22 = a5;
        v25 = 1;
LABEL_17:
        sub_6091FDB0(a1, 1, a2, a4, v22, 1, v25, v15, 0, 1);
      }
      else
      {
        sub_6091FDB0(a1, 5, a2, a4, a5, 1, 1, v15, a7, 1);
      }
      break;
    case 8:
      if ( a8 == 1 )
        sub_6091FDB0(a1, 8, a2, a4, a5, 6, a6, v15, 0, 1);
      else
        sub_60920CE4(a1, a2, a4, a5, a8, a6);
      break;
    default:
      break;
  }
  v18 = FIELD_U32(a1, 36);
  FIELD_U32(a1, 292) = v18;
  v19 = FIELD_U32(a1, 40);
  FIELD_U32(a1, 284) = v19;
  v20 = 0;
  if ( FIELD_U8(a1, 33) >= 2u )
    v20 = FIELD_U32(a1, 44);
  FIELD_U32(a1, 288) = v20;
  FIELD_U32(a1, 296) = 0;
  FIELD_U32(a1, 300) = 4;
  if ( v20 )
    v19 = v19 + v18 - 1;
  FIELD_U32(a1, 276) = FIELD_U16(a1, 48);
  if ( v20 )
    v19 = (v19 & -v18) + v20;
  result = v19 + v18;
  FIELD_U32(a1, 280) = result;
  return result;
}
