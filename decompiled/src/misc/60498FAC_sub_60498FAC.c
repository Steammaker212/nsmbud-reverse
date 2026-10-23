/* sub_60498FAC
 * address: 0x60498FAC   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60498FAC(_DWORD *a1, int a2, int a3)
{
  _DWORD *v4; // r6
  int v6; // [sp+4h] [bp-14h] BYREF

  a1[36709] = a2;
  v4 = a1 + 36709;
  a1[36710] = a3;
  sub_60499110(a1);
  v6 = 4;
  sub_604751FC((int)(a1 + 16), (int)(a1 + 908), &dword_60CA0724, &v6);
  a1[6552] = a1[908];
  a1[11691] = a1[909];
  a1[16830] = a1[910];
  a1[21969] = a1[911];
  sub_60499348(a1);
  sub_6047F3B4(a1 + 36719);
  sub_603FF740((int)(a1 + 32191), 0, 0, 0);
  sub_603FF740((int)(a1 + 32938), 1, 1, 0);
  sub_603FF740((int)(a1 + 33685), 3, 2, 0);
  sub_603FF740((int)(a1 + 34432), 2, 3, 0);
  sub_603FF740((int)(a1 + 35179), 6, 4, 0);
  sub_603FF740((int)(a1 + 35926), 5, 5, 0);
  sub_60515864(a1 + 24687);
  a1[32179] = *v4;
  return sub_605159B8(a1 + 24687);
}
