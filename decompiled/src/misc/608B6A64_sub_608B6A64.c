/* sub_608B6A64
 * address: 0x608B6A64   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B6A64(int result, int a2, float32x2_t a3, float a4, float a5, float32x2_t a6)
{
  float v6; // s2
  int v7; // r4
  unsigned __int32 v8; // s0
  int v9; // r3
  void *v10; // r4
  int v11; // r0

  a6.n64_u32[0] = 0;
  v6 = FIELD_F32(result, 144);
  v7 = FIELD_U32(result, 152);
  v8 = vmax_f32(a3, a6).n64_u32[0];
  v9 = FIELD_U32(result, 148);
  if ( v7 < v9 )
    v6 = FIELD_F32(result, 140) + (float)((float)((float)v7 * (float)(v6 - FIELD_F32(result, 140))) / (float)v9);
  FIELD_F32(result, 140) = v6;
  FIELD_U32(result, 144) = v8;
  FIELD_U32(result, 148) = (a2 + 4) / 5u;
  FIELD_U32(result, 152) = 0;
  if ( !a2 )
  {
    v10 = sub_608C3B10();
    v11 = sub_608C2698(v10, 20, 1);
    FIELD_U32(v11, 4) = 77;
    FIELD_U32(v11, 16) = 64;
    return sub_608C2C1C(v10);
  }
  return result;
}
