/* sub_60905100
 * address: 0x60905100   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60905100(_DWORD *a1, int a2, int a3, int a4)
{
  sub_6090529C();
  *a1 = off_60C5CCE0;
  a1[4] = off_60C5CCB8;
  a1[5] = a2;
  a1[6] = a3;
  a1[7] = 0;
  a1[2] = a1 + 4;
  sub_609052D4(a1, a4);
  return a1;
}
