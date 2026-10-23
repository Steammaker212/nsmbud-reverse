/* sub_604A1C24
 * address: 0x604A1C24   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A1C24(int a1, unsigned int a2)
{
  int v4; // r6
  _DWORD *v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r0
  unsigned int v9; // r1
  unsigned int v10; // r0
  int v11; // r0
  float v12; // s0
  int v13; // t1
  int result; // r0
  int v15; // [sp+0h] [bp-28h] BYREF
  float v16; // [sp+4h] [bp-24h]
  int v17; // [sp+8h] [bp-20h]
  _DWORD v18[7]; // [sp+Ch] [bp-1Ch] BYREF

  v4 = a1 + 9296;
  sub_60558A30(a1 + 9296);
  v5 = (_DWORD *)sub_605588E8(v4, a2);
  v6 = v5[23];
  v7 = v5[27];
  v8 = v5[31];
  v18[0] = v6;
  v18[1] = v7;
  v18[2] = v8;
  sub_6090A384(FIELD_U32(a1, 3632), &v15, v18);
  v9 = 0;
  v10 = 0;
  if ( a2 < 7 )
    v9 = a2;
  *(_DWORD *)(a1 + 4 * v9 + 22332) = 0;
  if ( a2 < 4 )
    v10 = a2;
  v11 = a1 + 4 * v10;
  v16 = v16 + 2.0;
  v12 = v16;
  v13 = FIELD_U32(v11, 20276);
  FIELD_U32(v13, 416) = v15;
  FIELD_F32(v13, 420) = v12;
  FIELD_U32(v13, 424) = v17;
  result = FIELD_U32(v11, 20276);
  if ( !FIELD_U8(result, 2690) && !FIELD_U8(result, 2691) )
  {
    FIELD_U8(result, 2699) = 1;
    FIELD_U8(result, 2691) = 1;
    FIELD_U32(result, 500) = 2;
    FIELD_U32(result, 2532) = 1;
    FIELD_U32(result, 2560) = 1065353216;
    FIELD_U8(result, 2693) = 1;
  }
  return result;
}
