/* sub_6035F8D8
 * address: 0x6035F8D8   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6035F8D8(int a1)
{
  int v2; // r1
  int result; // r0

  v2 = sub_603BEF10();
  result = 0;
  if ( v2 == 1 )
  {
    CollisionMgr_vf18((_BYTE *)(a1 + 6936));
    return 1;
  }
  return result;
}
