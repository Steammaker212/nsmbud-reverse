/* sub_604FA1F0
 * address: 0x604FA1F0   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_604FA1F0(char *a1)
{
  _DWORD *v2; // r5

  *(_DWORD *)a1 = off_60BFEE8C;
  v2 = a1 + 40;
  *((_WORD *)a1 + 1842) = 0;
  sub_6045C0A0((int)(a1 + 3692));
  sub_60475AE8(v2);
  operator_delete(a1);
}
