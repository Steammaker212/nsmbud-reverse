/* sub_605E0654
 * address: 0x605E0654   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E0654(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0

  sub_605D79D0((int)a1, (StateBase *)&unk_60CB1788, 0);
  a1[19] |= 4u;
  v2 = a1[1566] | 0x4000001;
  a1[1567] |= 1u;
  a1[1566] = v2;
  a1[1565] |= 0x11000000u;
  sub_605D845C(a1);
  v3 = a1[20];
  a1[39] = 0;
  a1[40] = 715827882 * byte_60B0594C[v3];
  a1[41] = 0;
  a1[2003] = 0;
  return sub_605EAB74(a1 + 1516, 0);
}
