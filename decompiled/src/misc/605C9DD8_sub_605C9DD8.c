/* sub_605C9DD8
 * address: 0x605C9DD8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C9DD8(_DWORD *a1)
{
  int v2; // r1
  int v3; // r0

  a1[82] = 9;
  sub_6015907C((ActiveCollider *)(a1 + 47), 16);
  a1[798] |= 0x60u;
  v2 = a1[796];
  a1[794] |= 0x60u;
  a1[796] = v2 | 0x60;
  v3 = a1[1536];
  if ( v3 )
    FIELD_U32(v3, 136) |= 0x1000u;
  sub_605CCAB0(a1);
  a1[64] = 0;
  return 0;
}
