/* sub_604B3208
 * address: 0x604B3208   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_604B3208(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60BFDF78;
  v2 = a1 + 2813;
  sub_6045C0A0((int)(a1 + 3737));
  sub_6047643C(v2);
  sub_6047643C(a1 + 1928);
  sub_6047643C(a1 + 1043);
  sub_6047643C(a1 + 158);
  *a1 = off_60BFD708;
  sub_6045C0A0((int)(a1 + 22));
  operator_delete(a1);
}
