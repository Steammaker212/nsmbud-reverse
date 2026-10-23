/* sub_607C788C
 * address: 0x607C788C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C788C(_DWORD *a1, int a2, int a3)
{
  int v4; // r1

  sub_6078AA90(PlayerMgr_instance, a2, a3);
  sub_6078667C(a1 + 172, 2);
  v4 = a1[309];
  a1[308] |= 0x20000000u;
  a1[307] |= 0x100u;
  a1[309] = v4 | 0x10004;
  a1[304] |= 0x80000u;
  a1[25] = 0;
  a1[2486] = 10;
  a1[2870] = 10;
  return 11480;
}
