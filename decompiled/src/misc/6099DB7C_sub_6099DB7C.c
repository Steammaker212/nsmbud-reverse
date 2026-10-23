/* sub_6099DB7C
 * address: 0x6099DB7C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n64 __fastcall sub_6099DB7C(int a1, unsigned __int32 *a2, __n64 result)
{
  int v3; // r0
  float v4; // s2

  if ( result.n64_f32[0] >= 0.0 )
  {
    v3 = FIELD_U8(a1, 3) - 1;
    v4 = (float)v3 * result.n64_f32[0];
    if ( (int)v4 >= v3 )
      result.n64_u32[1] = a2[v3];
    else
      result.n64_f32[1] = *(float *)&a2[v4]
                        + (float)((float)(v4 - (float)(int)v4) * (float)(*(float *)&a2[(int)v4 + 1] - *(float *)&a2[v4]));
  }
  else
  {
    result.n64_u32[1] = *a2;
  }
  return result;
}
