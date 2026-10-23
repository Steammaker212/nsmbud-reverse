/* sub_608B032C
 * address: 0x608B032C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B032C(int result, int a2, float32x2_t a3, float a4, float a5, float32x2_t a6)
{
  float v6; // s2
  int v7; // r2
  int v8; // r3
  unsigned __int32 v9; // s0

  a6.n64_u32[0] = 0;
  v6 = FIELD_F32(result, 268);
  v7 = FIELD_U32(result, 272);
  v8 = FIELD_U32(result, 276);
  v9 = vmax_f32(a3, a6).n64_u32[0];
  if ( v8 < v7 )
    v6 = FIELD_F32(result, 264) + (float)((float)((float)v8 * (float)(v6 - FIELD_F32(result, 264))) / (float)v7);
  FIELD_F32(result, 264) = v6;
  FIELD_U32(result, 268) = v9;
  FIELD_U32(result, 272) = a2;
  FIELD_U32(result, 276) = 0;
  return result;
}
