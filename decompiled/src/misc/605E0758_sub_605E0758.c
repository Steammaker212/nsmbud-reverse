/* sub_605E0758
 * address: 0x605E0758   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E0758(_DWORD *a1)
{
  _DWORD *v2; // r3
  int v3; // r0
  int *v4; // r1

  v2 = a1 + 1565;
  v4 = a1 + 1566;
  v3 = a1[1566];
  *v2 |= 0x10000000u;
  *v4 = v3 | 0x4001;
  a1[1567] |= 3u;
  sub_605D845C(a1);
  a1[1701] = 0;
  return CollisionMgr_vf14((int)(a1 + 162));
}
