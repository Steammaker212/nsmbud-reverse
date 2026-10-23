/* sub_6025A658
 * address: 0x6025A658   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6025A658(int a1)
{
  int v1; // r4

  v1 = a1 + 6148;
  FIELD_U32(a1, 6148) &= ~0x10000u;
  sub_6015907C((ActiveCollider *)(a1 + 188), 8);
  *(_DWORD *)(v1 - 5812) |= 2u;
  *(_DWORD *)(v1 - 6032) = 1153138688;
  return -6032;
}
