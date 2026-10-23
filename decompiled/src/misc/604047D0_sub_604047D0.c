/* sub_604047D0
 * address: 0x604047D0   size: 3816   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_604047D0(signed int result)
{
  float v1; // r2
  float v2; // r3
  float v3; // s8
  float v4; // s6
  int v5; // r2
  int v6; // r1
  unsigned int v7; // r3
  float *v8; // r2
  float v9; // s2
  Vec3 v10; // [sp+4h] [bp-24h] BYREF
  Vec3 v11[2]; // [sp+10h] [bp-18h] BYREF

  if ( !FIELD_U8(result, 2706) )
  {
    v1 = FIELD_F32(result, 384);
    v2 = FIELD_F32(result, 388);
    v11[0].x = FIELD_F32(result, 380);
    v11[0].y = v1;
    v11[0].z = v2;
    v3 = FIELD_F32(result, 2628);
    v4 = FIELD_F32(result, 2572);
    v5 = FIELD_U32(result, 504);
    v6 = 2;
    if ( !v5 )
      v6 = 1;
    if ( v5 == 3 )
      v6 = 0;
    v11[0].x = v11[0].x + FIELD_F32(result, 392);
    v11[0].y = (float)((float)(v3 + v11[0].y) + v4) + FIELD_F32(result, 396);
    v11[0].z = v11[0].z + FIELD_F32(result, 400);
    v7 = FIELD_U32(result, 2544);
    if ( FIELD_U32(result, 508) )
    {
      return sub_60236E40(v7, dword_60B020BC[v6], v11, 0, 0);
    }
    else
    {
      v8 = (float *)((char *)&unk_60B020A4 + 4 * v6);
      v9 = *v8;
      v10.x = *v8 * FIELD_F32(result, 428);
      v10.y = v9 * FIELD_F32(result, 432);
      v10.z = v9 * FIELD_F32(result, 436);
      return sub_60236E40(v7, dword_60B020B0[v6], v11, 0, &v10);
    }
  }
  return result;
}
