/* sub_603A9E9C
 * address: 0x603A9E9C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603A9E9C(char *a1)
{
  ColliderBase *v2; // r5

  *(_DWORD *)a1 = off_60BF4A30;
  v2 = (ColliderBase *)(a1 + 8);
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 8));
  ShapedCollider_dtor(v2);
  operator_delete(a1);
}
