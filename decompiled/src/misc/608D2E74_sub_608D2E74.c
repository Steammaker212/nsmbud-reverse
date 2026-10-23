/* sub_608D2E74
 * address: 0x608D2E74   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D2E74(int a1, _DWORD *a2)
{
  _DWORD *v4; // r6
  _DWORD *v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r5

  v4 = sub_608C3B10();
  v5 = (_DWORD *)sub_608C2698((int)v4, 36);
  v5[1] = 49;
  v5[4] = a1 + 444;
  v6 = a2[1];
  v7 = a2[2];
  v8 = a2[3];
  v5[5] = *a2;
  v5[6] = v6;
  v5[7] = v7;
  v5[8] = v8;
  return sub_608C2C1C(v4, v5);
}
