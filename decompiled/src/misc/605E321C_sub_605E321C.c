/* sub_605E321C
 * address: 0x605E321C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E321C(int *a1)
{
  int *v1; // r4
  _DWORD *v2; // r3
  int *v3; // r1
  int v4; // r0
  int v5; // t1

  v1 = a1;
  v2 = a1 + 1566;
  v3 = a1 + 1565;
  v4 = a1[1565] | 0x800;
  *v2 |= 1u;
  v5 = v1[1567];
  v1 += 1567;
  *v1 = v5 | 1;
  *v3 = v4 | 0x10800000;
  sub_605EAB48(v1 - 51, 0.0);
  v1[134] = 0;
  return CollisionMgr_vf14((int)(v1 - 1405));
}
