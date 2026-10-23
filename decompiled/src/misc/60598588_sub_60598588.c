/* sub_60598588
 * address: 0x60598588   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60598588(int a1)
{
  float v2; // s0
  float result; // s0

  if ( (FIELD_U8(a1, 6262) & 2) != 0 )
  {
    FIELD_U32(a1, 104) = 1022739087;
    v2 = 1.0 - sub_6059BB74(a1 + 8036);
    if ( v2 >= 0.0 )
    {
      if ( v2 > 1.0 )
        v2 = 1.0;
    }
    else
    {
      v2 = 0.0;
    }
    FIELD_F32(a1, 100) = (float)(v2 * 0.15) + -0.045;
    result = (float)byte_60B0594C[FIELD_U32(a1, 80)] * 0.3;
    FIELD_F32(a1, 132) = result;
  }
  else if ( FIELD_U32(a1, 8000) == 1 )
  {
    sub_605D79D0(a1, &unk_60CB17E8, 1);
  }
  else
  {
    sub_605D79D0(a1, &unk_60CB1764, 3);
  }
  return result;
}
