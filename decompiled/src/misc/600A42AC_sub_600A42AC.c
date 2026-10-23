/* sub_600A42AC
 * address: 0x600A42AC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600A42AC(int a1)
{
  Actor *v2; // r0

  *(_DWORD *)a1 = off_60BC84E0;
  ShapedCollider_dtor((ColliderBase *)(a1 + 2408));
  ShapedCollider_dtor((ColliderBase *)(a1 + 1752));
  ShapedCollider_dtor((ColliderBase *)(a1 + 1096));
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 648));
  v2 = StageActor__dtor((Actor *)a1);
  operator_delete(v2);
}
