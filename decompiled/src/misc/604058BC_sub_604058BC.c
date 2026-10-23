/* sub_604058BC
 * address: 0x604058BC   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_604058BC(int a1)
{
  float v1; // r2
  float v2; // r3
  float v3; // s0
  float v4; // s2
  unsigned int v5; // r12
  int v6; // r1
  float z; // s4
  float *v8; // r1
  float v9; // s10
  float v10; // s8
  float v11; // s2
  float v12; // s4
  int v14; // r1
  int v15; // r3
  bool v16; // zf
  unsigned int v17; // r3
  char *v18; // r3
  float *v19; // r1
  float v20; // s2
  Vec3 v21; // [sp+Ch] [bp-24h] BYREF
  Vec3 v22[2]; // [sp+18h] [bp-18h] BYREF

  FIELD_U8(a1, 2705) = 1;
  v1 = FIELD_F32(a1, 384);
  v2 = FIELD_F32(a1, 388);
  v22[0].x = FIELD_F32(a1, 380);
  v22[0].y = v1;
  v22[0].z = v2;
  v3 = FIELD_F32(a1, 2624) * v22[0].x;
  v22[0].x = v3;
  v4 = FIELD_F32(a1, 2628) + v1;
  v22[0].y = v4;
  v5 = FIELD_U32(a1, 2544);
  switch ( v5 )
  {
    case 0u:
      v6 = 2600;
      goto LABEL_9;
    case 1u:
      v6 = 2604;
      goto LABEL_9;
    case 2u:
      v8 = (float *)(a1 + 2608);
      goto LABEL_10;
    case 3u:
      v6 = 2612;
      goto LABEL_9;
    case 4u:
      v6 = 2616;
      goto LABEL_9;
    case 5u:
      v6 = 2620;
LABEL_9:
      v8 = (float *)(a1 + v6);
LABEL_10:
      z = v22[0].z - *v8;
      v22[0].z = z;
      break;
    default:
      z = v22[0].z;
      break;
  }
  v9 = FIELD_F32(a1, 2572);
  v10 = FIELD_F32(a1, 2568);
  v22[0].x = v3 + FIELD_F32(a1, 392);
  v11 = (float)(v4 + v9) + FIELD_F32(a1, 396);
  v22[0].y = v11;
  v12 = (float)(z + v10) + FIELD_F32(a1, 400);
  v22[0].z = v12;
  FIELD_F32(a1, 464) = v22[0].x;
  FIELD_F32(a1, 468) = v11;
  FIELD_F32(a1, 472) = v12;
  if ( FIELD_U32(a1, 508) )
    return sub_60236EC4(v5, (EffectWrapper *)(a1 + 2884), 748, v22, 0, 0);
  v21.x = 1.0;
  v21.y = 1.0;
  v21.z = 1.0;
  v14 = 2;
  v15 = FIELD_U32(a1, 504);
  if ( !v15 )
    v14 = 1;
  v16 = v15 == 3;
  v17 = v5 - 2;
  if ( v16 )
    v14 = 0;
  if ( v17 > 3 )
    v18 = (char *)&unk_60B0202C;
  else
    v18 = (char *)*(&off_60BF9AA0 + v17);
  v19 = (float *)&v18[4 * v14];
  v20 = *v19;
  v21.x = *v19 * FIELD_F32(a1, 428);
  v21.y = v20 * FIELD_F32(a1, 432);
  v21.z = v20 * FIELD_F32(a1, 436);
  return sub_60236EC4(v5, (EffectWrapper *)(a1 + 2884), 785, v22, 0, &v21);
}
