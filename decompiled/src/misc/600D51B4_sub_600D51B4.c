/* sub_600D51B4
 * address: 0x600D51B4   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D51B4(int a1)
{
  float v2; // s22
  float v3; // s20
  float v4; // s0
  float v5; // s0
  float v6; // s18
  float v7; // s16
  __int64 v8; // r0

  sub_600D5D78();
  v2 = FIELD_F32(a1, 6120);
  v3 = FIELD_F32(a1, 6116);
  v4 = sqrtf((float)((float)(v2 * v2) + (float)(v3 * v3)) + (float)(FIELD_F32(a1, 6124) * FIELD_F32(a1, 6124)));
  if ( v4 > 0.0 )
  {
    v5 = 1.0 / v4;
    v2 = v2 * v5;
    v3 = v3 * v5;
  }
  v6 = 0.0;
  FIELD_U32(a1, 128) = 0;
  v7 = (float)((float)(v2 * v2) + (float)(v3 * v3)) + 0.0;
  FIELD_F32(a1, 120) = v3 * 1.2;
  FIELD_F32(a1, 124) = v2 * 1.2;
  if ( sqrtf(v7) != 0.0 )
    v6 = (float)((float)(v2 + (float)(v3 * 0.0)) + 0.0) / sqrtf(v7);
  v8 = (__int64)(float)((float)(acosf(v6) * 57.296) * 11930000.0);
  if ( v3 > 0.0 )
    LODWORD(v8) = -(int)v8;
  FIELD_U32(a1, 164) = v8;
  return v8;
}
