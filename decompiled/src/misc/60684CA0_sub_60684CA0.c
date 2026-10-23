/* sub_60684CA0
 * address: 0x60684CA0   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60684CA0(int a1)
{
  FIELD_U32(a1, 7496) = 60;
  FIELD_U32(a1, 7460) = 1107296256;
  FIELD_U32(a1, 7464) = 0x40000000;
  FIELD_U32(a1, 7468) = 1087373312;
  FIELD_U32(a1, 7472) = 1075838976;
  FIELD_U32(a1, 7504) = 120;
  FIELD_U32(a1, 7500) = 90;
  FIELD_U32(a1, 116) = 1161936896;
  return sub_606819D4(a1);
}
