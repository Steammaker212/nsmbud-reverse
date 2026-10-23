/* sub_608B7364
 * address: 0x608B7364   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B7364(int a1, int a2)
{
  void *v4; // r6
  _DWORD *v5; // r0

  v4 = sub_608C3B10();
  v5 = (_DWORD *)sub_608C2698(v4, 32, 1);
  v5[1] = 26;
  v5[6] = a1;
  v5[7] = a2;
  return sub_608C2C1C(v4);
}
