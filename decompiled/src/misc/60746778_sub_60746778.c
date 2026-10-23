/* sub_60746778
 * address: 0x60746778   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60746778(int result)
{
  int v1; // r1
  int v2; // r1

  FIELD_F32(result, 112) = FIELD_F32(result, 124) + FIELD_F32(result, 112);
  v1 = FIELD_U32(result, 712);
  if ( !v1 || (v2 = v1 - 1, (FIELD_U32(result, 712) = v2) == 0) )
  {
    if ( !FIELD_U8(result, 708) )
      return balloon_ref_746FA0();
  }
  return result;
}
