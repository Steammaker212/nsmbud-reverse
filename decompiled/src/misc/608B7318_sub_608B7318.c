/* sub_608B7318
 * address: 0x608B7318   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B7318(int a1, int a2, int a3)
{
  void *v6; // r7
  _DWORD *v7; // r0

  v6 = sub_608C3B10();
  v7 = (_DWORD *)sub_608C2698(v6, 32, 1);
  v7[1] = 25;
  v7[4] = a1 + 448;
  v7[6] = a2;
  v7[7] = a3;
  return sub_608C2C1C(v6);
}
