/* sub_604A1D14
 * address: 0x604A1D14   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A1D14(int a1, unsigned int a2)
{
  int v4; // r6
  _DWORD *v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r0
  unsigned int v9; // r1
  unsigned int v10; // r0
  int v11; // r1
  int v12; // r0
  float v13; // s0
  int v14; // t1
  int result; // r0
  int v16; // [sp+0h] [bp-28h] BYREF
  float v17; // [sp+4h] [bp-24h]
  int v18; // [sp+8h] [bp-20h]
  _DWORD v19[7]; // [sp+Ch] [bp-1Ch] BYREF

  v4 = a1 + 9296;
  sub_605589E4(a1 + 9296);
  v5 = (_DWORD *)sub_60558964(v4, a2);
  v6 = v5[23];
  v7 = v5[27];
  v8 = v5[31];
  v19[0] = v6;
  v19[1] = v7;
  v19[2] = v8;
  sub_6090A384(FIELD_U32(a1, 3632), &v16, v19);
  v9 = 0;
  v10 = 0;
  if ( a2 < 7 )
    v9 = a2;
  v11 = a1 + 4 * v9;
  if ( a2 < 4 )
    v10 = a2;
  v12 = a1 + 4 * v10;
  FIELD_U32(v11, 22332) = 1;
  v17 = v17 + 2.0;
  v13 = v17;
  v14 = FIELD_U32(v12, 20276);
  FIELD_U32(v14, 416) = v16;
  FIELD_F32(v14, 420) = v13;
  FIELD_U32(v14, 424) = v18;
  result = FIELD_U32(v12, 20276);
  if ( !FIELD_U8(result, 2690) && !FIELD_U8(result, 2691) )
  {
    FIELD_U8(result, 2699) = 1;
    FIELD_U8(result, 2691) = 1;
    FIELD_U32(result, 500) = 2;
    FIELD_U32(result, 2532) = 2;
    FIELD_U32(result, 2560) = 1065353216;
    FIELD_U8(result, 2693) = 1;
  }
  return result;
}
