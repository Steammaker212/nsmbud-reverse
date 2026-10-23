/* sub_604EDE4C
 * address: 0x604EDE4C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_604EDE4C(char *a1)
{
  _DWORD *v2; // r5

  *(_DWORD *)a1 = off_60BFECF0;
  v2 = a1 + 40;
  *((_WORD *)a1 + 5416) = 0;
  sub_6045C0A0((int)(a1 + 10836));
  sub_6050A4C4(a1 + 3616);
  sub_60475AE8(v2);
  operator_delete(a1);
}
