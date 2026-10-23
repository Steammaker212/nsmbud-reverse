/* sub_6013F3D8
 * address: 0x6013F3D8   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013F3D8(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  int v4; // r5
  char v5; // r12

  v2 = (ActiveCollider *)(a1 + 188);
  FIELD_U32(a1, 120) = dword_60AF1F00[FIELD_U32(a1, 80)];
  FIELD_U32(a1, 124) = 1077936128;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = -1061158912;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 100) = -1107296256;
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v3, v2) )
  {
    ActiveColliderMgr_addToCreateList(v3, v2);
  }
  v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 11896));
  if ( ((unsigned int)&dword_60C7B364 & ~(1611920536 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &StageActor_RTTI) == 1 )
    FIELD_F32(a1, 120) = FIELD_F32(a1, 120) + (float)((float)(FIELD_F32(v4, 108) - FIELD_F32(v4, 584)) * 1.1);
  FIELD_U8(a1, 11845) = 0;
  FIELD_U32(a1, 11848) = 0;
  return 11848;
}
