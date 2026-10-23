/* sub_6099DCBC
 * address: 0x6099DCBC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n64 __fastcall sub_6099DCBC(int a1, int a2, __n64 result)
{
  float v3; // s2

  if ( result.n64_f32[0] >= 0.0 )
  {
    v3 = result.n64_f32[0];
    if ( result.n64_f32[0] > 1.0 )
      v3 = 1.0;
  }
  else
  {
    v3 = 0.0;
  }
  result.n64_u32[1] = *(_DWORD *)(a2 + 4 * (int)(float)(v3 * (float)(FIELD_U8(a1, 3) - 1)));
  return result;
}
