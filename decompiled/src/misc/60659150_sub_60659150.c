/* sub_60659150
 * address: 0x60659150   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60659150(int a1)
{
  unsigned int result; // r0

  sub_606D2410();
  result = sub_6000F7B8(FIELD_F32(a1, 6128), FIELD_F32(a1, 6124)) - 0x40000000;
  FIELD_U32(a1, 6708) = result;
  return result;
}
