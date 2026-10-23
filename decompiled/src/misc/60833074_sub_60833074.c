/* sub_60833074
 * address: 0x60833074   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_60833074(float *result)
{
  float v1; // s0
  float v2; // s4
  __n128 v3; // q0

  if ( dword_60CC6484 )
  {
    v1 = FIELD_F32(dword_60CC6484, 136);
    v2 = FIELD_F32(dword_60CC6484, 144);
    v3.n128_f32[1] = v1 + v2;
    v3.n128_f32[0] = (float)(*result - (float)((float)(v1 + v2) * 0.5)) / (float)((float)(v2 - v1) / 1280.0);
    v3.n128_f32[2] = (float)(result[1]
                           + (float)((float)(FIELD_F32(dword_60CC6484, 140) + FIELD_F32(dword_60CC6484, 148)) * 0.5))
                   / (float)((float)(FIELD_F32(dword_60CC6484, 148) - FIELD_F32(dword_60CC6484, 140)) / 720.0);
    *result = v3.n128_f32[0];
    result[1] = v3.n128_f32[2];
  }
  return v3;
}
