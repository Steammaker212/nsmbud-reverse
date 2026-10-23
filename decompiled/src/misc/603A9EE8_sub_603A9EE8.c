/* sub_603A9EE8
 * address: 0x603A9EE8   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603A9EE8(char *a1)
{
  ColliderBase *v2; // r5

  *(_DWORD *)a1 = off_60BF4A40;
  v2 = (ColliderBase *)(a1 + 8);
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 8));
  *(_DWORD *)a1 = off_60BF4A30;
  ColliderMgr_removeRelated1(ColliderMgr_instance, v2);
  ShapedCollider_dtor(v2);
  operator_delete(a1);
}
