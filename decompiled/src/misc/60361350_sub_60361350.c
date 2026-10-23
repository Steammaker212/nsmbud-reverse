/* sub_60361350
 * address: 0x60361350   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_60361350(int a1)
{
  ActiveCollider *v2; // r5
  ActiveColliderMgr *v3; // r6
  int v4; // r0

  v2 = (ActiveCollider *)(a1 + 188);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, &stru_60B001E8, a1 + 7072);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v2) && !ActiveColliderMgr_isInCreateList(v3, v2) )
    ActiveColliderMgr_addToCreateList(v3, v2);
  v4 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  FIELD_F32(v4, 20) = (float)(FIELD_U32(dword_60C99DD4, 1052) % (unsigned int)FIELD_F32(v4, 8));
  FIELD_U32(v4, 28) |= 2u;
  return ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6328));
}
