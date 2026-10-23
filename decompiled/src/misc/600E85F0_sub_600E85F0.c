/* sub_600E85F0
 * address: 0x600E85F0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_600E85F0(int a1)
{
  __n128 result; // q0
  float v3[14]; // [sp+0h] [bp-38h] BYREF

  if ( !FIELD_U32(a1, 320) )
  {
    (*(void (__fastcall **)(_DWORD, int, float *))(***(_DWORD ***)(a1 + 7096) + 108))(**(_DWORD **)(a1 + 7096), 8, v3);
    result.n128_f32[0] = (float)(v3[3] + 0.0) - FIELD_F32(a1, 108);
    result.n128_f32[2] = (float)(v3[7] + 1.0) - FIELD_F32(a1, 112);
    FIELD_U32(a1, 304) = result.n128_u32[0];
    FIELD_U32(a1, 308) = result.n128_u32[2];
    FIELD_U32(a1, 312) = 1097859072;
    FIELD_U32(a1, 316) = 1097859072;
  }
  return result;
}
