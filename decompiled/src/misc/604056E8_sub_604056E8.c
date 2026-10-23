/* sub_604056E8
 * address: 0x604056E8   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_604056E8(int a1, int a2)
{
  float v2; // r12
  float v3; // r3
  int v4; // r3
  float v5; // s0
  int v6; // r2
  float v7; // s2
  unsigned int v8; // r12
  int v9; // r1
  float z; // s4
  float *v11; // r1
  float v12; // s10
  float v13; // s8
  EffectWrapper *v14; // r1
  float v15; // s2
  float v16; // s4
  Vec3 v18[2]; // [sp+8h] [bp-18h] BYREF

  FIELD_U8(a1, 2704) = 1;
  v2 = FIELD_F32(a1, 380);
  v3 = FIELD_F32(a1, 384);
  v18[0].z = FIELD_F32(a1, 388);
  v18[0].y = v3;
  v18[0].x = v2;
  v4 = FIELD_U32(a1, 504);
  if ( a2 != 10 )
    v4 = a2;
  v5 = FIELD_F32(a1, 2624) * v2;
  v18[0].x = v5;
  v6 = 2;
  if ( !v4 )
    v6 = 1;
  if ( v4 == 3 )
    v6 = 0;
  v7 = FIELD_F32(a1, 2628) + v18[0].y;
  v18[0].y = v7;
  v8 = FIELD_U32(a1, 2544);
  switch ( v8 )
  {
    case 0u:
      v9 = 2600;
      goto LABEL_15;
    case 1u:
      v9 = 2604;
      goto LABEL_15;
    case 2u:
      v11 = (float *)(a1 + 2608);
      goto LABEL_16;
    case 3u:
      v9 = 2612;
      goto LABEL_15;
    case 4u:
      v9 = 2616;
      goto LABEL_15;
    case 5u:
      v9 = 2620;
LABEL_15:
      v11 = (float *)(a1 + v9);
LABEL_16:
      z = v18[0].z - *v11;
      v18[0].z = z;
      break;
    default:
      z = v18[0].z;
      break;
  }
  v12 = FIELD_F32(a1, 2572);
  v13 = FIELD_F32(a1, 2568);
  v14 = (EffectWrapper *)(a1 + 2780);
  v18[0].x = v5 + FIELD_F32(a1, 392);
  v15 = (float)(v7 + v12) + FIELD_F32(a1, 396);
  v18[0].y = v15;
  v16 = (float)(z + v13) + FIELD_F32(a1, 400);
  v18[0].z = v16;
  FIELD_F32(a1, 464) = v18[0].x;
  FIELD_F32(a1, 468) = v15;
  FIELD_F32(a1, 472) = v16;
  if ( FIELD_U32(a1, 508) )
    return sub_60236EC4(v8, v14, dword_60B020EC[v6], v18, 0, 0);
  else
    return sub_60236EC4(v8, v14, dword_60B020E0[v6], v18, 0, 0);
}
