/* sub_607B8BF4
 * address: 0x607B8BF4   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B8BF4(_DWORD *a1)
{
  int v2; // r0

  sub_6079EA38(a1);
  v2 = a1[304] | 0x2200000;
  a1[308] |= 0x20000000u;
  a1[309] |= 0x30000u;
  a1[307] |= 0x100u;
  a1[304] = v2;
  a1[25] = 0;
  a1[22] = 0;
  a1[23] = 0;
  PlayerBase_dispatchVirtual3((int)(a1 + 2839), 157, 0.0);
  return sub_607957D4((int)a1, 6);
}
