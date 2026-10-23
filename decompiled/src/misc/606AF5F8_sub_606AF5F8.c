/* sub_606AF5F8
 * address: 0x606AF5F8   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606AF5F8(int result, int a2)
{
  _BYTE *v2; // r2
  int v3; // r3

  v2 = *(_BYTE **)(a2 + 64);
  if ( v2[533] == 1 )
  {
    v3 = FIELD_U32(a2, 140);
    if ( v3 != 1 && (v3 == 11 || (v2[1219] & 8) == 0 && (v2[1213] & 1) != 0) )
    {
      *(_BYTE *)(FIELD_U32(result, 64) + 1249) = 1;
      FIELD_U8(result, 110) |= 2u;
    }
  }
  return result;
}
