/* sub_609049FC
 * address: 0x609049FC   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609049FC(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  int v8; // r0

  sub_6090529C();
  *a1 = &off_60C5CC50;
  v8 = a2[2];
  a1[4] = off_60C5CC18;
  a1[5] = v8;
  a1[6] = a3;
  a1[7] = a4;
  a1[8] = 0;
  a1[9] = 0;
  a1[2] = a1 + 4;
  sub_609052EC(a1, a2[1]);
  sub_609052F4(a1, a2[3]);
  return a1;
}
