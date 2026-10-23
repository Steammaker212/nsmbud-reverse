/* sub_605909F0
 * address: 0x605909F0   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605909F0(int a1)
{
  ColliderBase *v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = off_60C07250;
  v2 = (ColliderBase *)(a1 + 712);
  ShapedCollider_dtor((ColliderBase *)(a1 + 1512));
  ShapedCollider_dtor(v2);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
