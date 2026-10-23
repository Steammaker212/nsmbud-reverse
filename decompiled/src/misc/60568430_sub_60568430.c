/* sub_60568430
 * address: 0x60568430   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60568430(int a1)
{
  ColliderBase *v2; // r5

  v2 = (ColliderBase *)(a1 + 6112);
  if ( !sub_60003B88(a1, (_DWORD *)(a1 + 6112)) )
    ((void (__fastcall *)(int, int))loc_6069B070)(a1 + 6768, a1 + 108);
  ShapedCollider_execute(v2);
  sub_6056847C(a1);
  return 1;
}
