/* sub_60440F00
 * address: 0x60440F00   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60440F00(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60BFAC28;
  v2 = a1 + 204;
  j_nullsub_280(a1 + 274);
  sub_609175E4(v2);
  sub_60921BD4(a1 + 104);
  sub_60919C90(a1 + 84);
  sub_60922478(a1 + 16);
  a1[9] = off_60BF9CC0;
  sub_60913C18(a1 + 9);
  a1[2] = off_60BFAC48;
  sub_60913C18(a1 + 2);
  operator_delete(a1);
}
