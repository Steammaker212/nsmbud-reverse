/* sub_603BCB94
 * address: 0x603BCB94   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x2_t __fastcall sub_603BCB94(_DWORD *a1, float32x2_t a2, float32x2_t a3)
{
  _DWORD *v4; // r0
  int v5; // r1
  int v6; // t1
  _DWORD *v7; // r2
  float32x2_t result; // d0

  v6 = a1[1588];
  v4 = a1 + 1588;
  v5 = v6;
  v7 = v4 + 126;
  if ( v6 == 1 )
  {
    *v7 = 0;
  }
  else
  {
    *v7 = 1;
    if ( v5 != 2 )
    {
      a1[1589] = v5;
      *v4 = 2;
      (*(void (__fastcall **)(_DWORD *))(*a1 + 696))(a1);
    }
  }
  a2.n64_u32[0] = a1[31];
  a3.n64_u32[0] = -2.0;
  result.n64_u64[0] = vmax_f32(a2, a3).n64_u64[0];
  a1[31] = result.n64_u32[0];
  a1[1715] = 8;
  return result;
}
