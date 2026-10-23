/* sub_608016E8
 * address: 0x608016E8   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608016E8(int a1, float *a2, float result, int a4, int a5)
{
  float v5; // r12
  float v6; // r2
  float v7; // s0
  int v8; // r2
  float v9; // s6
  float v10; // s4

  v5 = FIELD_F32(a1, 28);
  v6 = FIELD_F32(a1, 32);
  *a2 = v5;
  a2[1] = v6;
  if ( FIELD_S32(a5, 44) >= 2 )
  {
    v7 = v6;
    v8 = FIELD_U32(a1, 40);
    v9 = 1.0;
    if ( v8 )
      v9 = FIELD_F32(v8, 28) / FIELD_F32(v8, 36);
    v10 = (float)(FIELD_F32(a1, 16) * (float)(1.0 / v9)) * 0.5;
    result = (float)(v7 - (float)(FIELD_F32(a1, 24) * 0.5)) + (float)(v10 * 224.0);
    *a2 = (float)(v5 + (float)(FIELD_F32(a1, 20) * 0.5)) + (float)(v10 * -398.22);
    a2[1] = result;
  }
  return result;
}
