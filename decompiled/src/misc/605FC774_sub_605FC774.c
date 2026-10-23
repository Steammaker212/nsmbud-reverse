/* sub_605FC774
 * address: 0x605FC774   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605FC774(int a1)
{
  int result; // r0

  FIELD_U16(a1, 6824) = 60;
  result = a1 + 6824;
  if ( FIELD_F32(result, 4) == FIELD_F32(result, 8) )
    *(_WORD *)result = 120;
  return result;
}
