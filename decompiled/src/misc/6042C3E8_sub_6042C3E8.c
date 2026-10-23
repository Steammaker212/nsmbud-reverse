/* sub_6042C3E8
 * address: 0x6042C3E8   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6042C3E8(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60BFA574;
  v2 = a1 + 4;
  a1[183] = off_60BF97C4;
  sub_60913C18(a1 + 183);
  a1[176] = off_60BF97D4;
  sub_60913C18(a1 + 176);
  sub_60919C90(a1 + 156);
  sub_60921BD4(a1 + 72);
  sub_60922478(v2);
  operator_delete(a1);
}
