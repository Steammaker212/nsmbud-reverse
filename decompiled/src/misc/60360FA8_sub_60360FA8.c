/* sub_60360FA8
 * address: 0x60360FA8   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60360FA8(int a1)
{
  ActiveCollider *v2; // r5
  ActiveColliderMgr *v3; // r6
  ActorBuildInfo v5; // [sp+0h] [bp-40h] BYREF

  v2 = (ActiveCollider *)(a1 + 188);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, &stru_60B001E8, a1 + 7072);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v2) && !ActiveColliderMgr_isInCreateList(v3, v2) )
    ActiveColliderMgr_addToCreateList(v3, v2);
  FIELD_U32(a1, 144) = 1063507722;
  FIELD_U32(a1, 148) = 1063507722;
  FIELD_U32(a1, 152) = 1063507722;
  memset(&v5, 0, sizeof(v5));
  v5.parentId = FIELD_U32(a1, 8);
  v5.profile = Profile__get(0x11Bu);
  v5.position = *(Vec3 *)(a1 + 6304);
  v5.field_1C = 0;
  v5.field_20 = FIELD_U8(a1, 86);
  return ActorMgr__create((void *)ActorMgr__instance, &v5, 0);
}
