/* sub_60575080
 * address: 0x60575080   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60575080(int a1)
{
  ColliderBase *v2; // r5

  v2 = (ColliderBase *)(a1 + 6112);
  if ( !sub_60003B88(a1, (_DWORD *)(a1 + 6112)) )
    ((void (__fastcall *)(int, int))loc_6069B070)(a1 + 6768, a1 + 108);
  ((void (__fastcall *)(int))loc_605750F8)(a1);
  ShapedCollider_execute(v2);
  if ( FIELD_U32(a1, 6824) == 1 )
    sub_60574F00((_DWORD *)a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  FIELD_U8(a1, 6820) = 0;
  return 1;
}
