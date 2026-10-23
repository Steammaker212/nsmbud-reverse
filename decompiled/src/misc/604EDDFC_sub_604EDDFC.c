/* sub_604EDDFC
 * address: 0x604EDDFC   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604EDDFC(int a1)
{
  _DWORD *v2; // r5

  *(_DWORD *)a1 = off_60BFECF0;
  v2 = (_DWORD *)(a1 + 40);
  FIELD_U16(a1, 10832) = 0;
  sub_6045C0A0(a1 + 10836);
  sub_6050A4C4(a1 + 3616);
  sub_60475AE8(v2);
  return a1;
}
