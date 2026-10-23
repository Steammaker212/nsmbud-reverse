/* sub_603A9C74
 * address: 0x603A9C74   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_603A9C74(int a1)
{
  int v2; // r10
  int i; // r7

  *(_DWORD *)a1 = off_60BF47B0;
  v2 = a1 + 22792;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 23624));
  for ( i = 0; i != -15680; i -= 784 )
  {
    *(_DWORD *)(a1 + i + 22784) = off_60BF4A30;
    ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(v2 + i));
    ShapedCollider_dtor((ColliderBase *)(v2 + i));
  }
  FIELD_U32(a1, 7096) = off_60BF4A40;
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 7104));
  FIELD_U32(a1, 7096) = off_60BF4A30;
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 7104));
  ShapedCollider_dtor((ColliderBase *)(a1 + 7104));
  FIELD_U32(a1, 6304) = off_60BF4A40;
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6312));
  FIELD_U32(a1, 6304) = off_60BF4A30;
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6312));
  ShapedCollider_dtor((ColliderBase *)(a1 + 6312));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
