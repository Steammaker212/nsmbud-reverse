/* sub_602355CC
 * address: 0x602355CC   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602355CC(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r0

  *a1 = off_60BD9550;
  v2 = a1 + 8;
  sub_60820A50(a1 + 79);
  sub_60820A50(a1 + 69);
  sub_60820A50(a1 + 59);
  sub_60820A50(a1 + 49);
  sub_60820A50(a1 + 39);
  sub_60820A50(a1 + 29);
  sub_60820A50(a1 + 19);
  sub_60820A50(v2);
  v3 = sead__IDisposer__dtor(a1);
  operator_delete(v3);
}
