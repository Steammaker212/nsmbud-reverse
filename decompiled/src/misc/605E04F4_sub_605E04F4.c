/* sub_605E04F4
 * address: 0x605E04F4   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E04F4(_DWORD *a1)
{
  int v2; // r0

  sub_605D79D0((int)a1, (StateBase *)&unk_60CB1788, 0);
  v2 = a1[1566] | 0x10001;
  a1[1567] |= 1u;
  a1[1566] = v2;
  a1[1565] |= 0x11000000u;
  sub_605D845C(a1);
  sub_605E5144(a1);
  a1[1701] = 0;
  return CollisionMgr_vf14((int)(a1 + 162));
}
