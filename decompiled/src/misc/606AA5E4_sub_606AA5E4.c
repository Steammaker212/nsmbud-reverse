/* sub_606AA5E4
 * address: 0x606AA5E4   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606AA5E4(int a1)
{
  sub_606AA628();
  FIELD_U32(a1, 6668) = sub_608337E0(a1 + 6632);
  ((void (__fastcall *)(int, int, int))loc_6069BF80)(a1 + 6144, a1 + 6668, a1 + 108);
  return sub_6069C058(a1 + 6144, a1);
}
