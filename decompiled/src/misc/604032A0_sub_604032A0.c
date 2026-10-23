/* sub_604032A0
 * address: 0x604032A0   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_604032A0(int a1)
{
  float v2; // r2
  float v3; // r3
  float v4; // s2
  float v5; // s0
  float v6; // s4
  int v7; // r1
  int v8; // r2
  float z; // s6
  float *v11; // r2
  float v12; // s12
  float v13; // s6
  float y; // s2
  float v15; // s4
  Vec3 *v16; // r3
  int v17; // r3
  int v18; // r2
  unsigned int v19; // r1
  float *v20; // r1
  float v21; // s2
  float v22[3]; // [sp+4h] [bp-24h] BYREF
  Vec3 v23; // [sp+10h] [bp-18h] BYREF

  if ( sub_60235E50(a1 + 2900) == 1 )
  {
    v2 = FIELD_F32(a1, 384);
    v3 = FIELD_F32(a1, 388);
    v23.x = FIELD_F32(a1, 380);
    v23.y = v2;
    v23.z = v3;
    v4 = FIELD_F32(a1, 2624) * v23.x;
    v23.x = v4;
    v5 = FIELD_F32(a1, 2628);
    v6 = v5 + v2;
    v23.y = v5 + v2;
    v7 = FIELD_U32(a1, 2544);
    switch ( v7 )
    {
      case 0:
        v8 = 2600;
        goto LABEL_11;
      case 1:
        v8 = 2604;
        goto LABEL_11;
      case 2:
        v11 = (float *)(a1 + 2608);
        goto LABEL_12;
      case 3:
        v8 = 2612;
        goto LABEL_11;
      case 4:
        v8 = 2616;
        goto LABEL_11;
      case 5:
        v8 = 2620;
LABEL_11:
        v11 = (float *)(a1 + v8);
LABEL_12:
        z = v23.z - *v11;
        v23.z = z;
        break;
      default:
        z = v23.z;
        break;
    }
    v12 = FIELD_F32(a1, 2572);
    v13 = z + FIELD_F32(a1, 2568);
    v23.x = v4 + FIELD_F32(a1, 392);
    v23.y = (float)(v6 + v12) + FIELD_F32(a1, 396);
    y = v23.y;
    v23.z = v13 + FIELD_F32(a1, 400);
    v15 = v23.z;
    FIELD_F32(a1, 464) = v23.x;
    FIELD_F32(a1, 468) = y;
    FIELD_F32(a1, 472) = v15;
    if ( FIELD_U32(a1, 508) )
    {
      v16 = 0;
    }
    else
    {
      v17 = FIELD_U32(a1, 504);
      v18 = 2;
      v19 = v7 - 2;
      if ( !v17 )
        v18 = 1;
      if ( v17 == 3 )
        v18 = 0;
      v23.y = y - (float)((float)(v5 * 1.5) + -70.0);
      if ( v19 > 3 )
        v20 = (float *)&unk_60B0202C;
      else
        v20 = (float *)*(&off_60BF9AA0 + v19);
      v16 = (Vec3 *)v22;
      v21 = v20[v18];
      v22[0] = v21 * FIELD_F32(a1, 428);
      v22[1] = v21 * FIELD_F32(a1, 432);
      v22[2] = v21 * FIELD_F32(a1, 436);
    }
    return sub_60237208(a1 + 2884, &v23, 0, v16);
  }
  else
  {
    FIELD_U8(a1, 2705) = 0;
    return 0;
  }
}
