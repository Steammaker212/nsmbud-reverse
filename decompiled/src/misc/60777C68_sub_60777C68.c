/* sub_60777C68
 * address: 0x60777C68   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60777C68(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 468);
  FIELD_U8(result, 24) = 1;
  return result;
}
