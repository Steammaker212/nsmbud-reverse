/* sub_608BC3D4
 * address: 0x608BC3D4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BC3D4(int a1, int a2, const void *a3)
{
  void *v6; // r7
  _DWORD *v7; // r0

  v6 = sub_608C3B10();
  v7 = (_DWORD *)sub_608C2698(v6, 708, 1);
  v7[1] = 52;
  v7[4] = a1 + 640;
  v7[176] = a2;
  qmemcpy(v7 + 5, a3, 0x2ACu);
  return sub_608C2C1C(v6);
}
