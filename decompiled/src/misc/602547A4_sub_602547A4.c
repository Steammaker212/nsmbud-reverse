/* sub_602547A4
 * address: 0x602547A4   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602547A4(_DWORD *a1, _DWORD *a2)
{
  int v2; // r3
  int v3; // r2
  int v4; // r3
  int v5; // r1

  v2 = a2[1];
  a1[2] = *a2;
  a1[3] = v2;
  v3 = a2[2];
  v4 = a2[3];
  v5 = a2[4];
  a1[5] = v3;
  a1[6] = v4;
  a1[7] = v5;
  SE_EMY_BIG_HANACHAN_DIVE_NUMA_ref(a1);
  return 1;
}
