/* sub_6031C22C
 * address: 0x6031C22C   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6031C22C(int a1)
{
  float result; // s0
  unsigned int v3; // r0
  float *v4; // r1
  float v5; // s14
  float v6; // s0
  float v7; // s2
  float v8; // s6
  float v9; // s6
  Vec2 v10; // [sp+0h] [bp-10h] BYREF

  if ( StageActor__distanceToPlayer((StateActor *)a1, &v10) >= 0 )
  {
    v3 = sub_6000F7B8(v10.y, v10.x);
    FIELD_U32(a1, 12584) = v3;
    v4 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
    v5 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
    v6 = v4[2] + (float)(v5 * v4[3]);
    v7 = *v4 + (float)(v4[1] * v5);
    v8 = FIELD_F32(a1, 120) + (float)(v6 * 0.03125);
    FIELD_F32(a1, 120) = v8;
    if ( v8 <= 1.25 )
    {
      if ( v8 < -1.25 )
        FIELD_F32(a1, 120) = -1.25;
    }
    else
    {
      FIELD_F32(a1, 120) = 1.25;
    }
    v9 = FIELD_F32(a1, 124) + (float)(v7 * 0.03125);
    FIELD_F32(a1, 124) = v9;
    if ( v9 <= 1.25 )
    {
      if ( v9 < -1.25 )
        FIELD_F32(a1, 124) = -1.25;
    }
    else
    {
      FIELD_F32(a1, 124) = 1.25;
    }
    FIELD_U32(a1, 156) = -(int)(float)((float)((float)(v7 * 22.5) * 2147500000.0) / 180.0);
    LODWORD(result) = (int)(float)((float)((float)(v6 * 22.5) * 2147500000.0) / 180.0);
    FIELD_F32(a1, 160) = result;
  }
  return result;
}
