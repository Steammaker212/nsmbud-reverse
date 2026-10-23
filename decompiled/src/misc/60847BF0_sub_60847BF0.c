/* sub_60847BF0
 * address: 0x60847BF0   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60847BF0(int a1)
{
  unsigned int v1; // r4

  v1 = FIELD_U32(a1, 44);
  return v1 / ((int (__fastcall *)(int))loc_608478D8)(1);
}
