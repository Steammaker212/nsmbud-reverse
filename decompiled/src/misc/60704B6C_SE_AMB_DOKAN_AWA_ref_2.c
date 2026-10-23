/* SE_AMB_DOKAN_AWA_ref_2
 * address: 0x60704B6C   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall SE_AMB_DOKAN_AWA_ref_2(int a1)
{
  unsigned int v2; // r1
  _DWORD *v3; // r5
  int v4; // r0
  ColliderBase *v5; // r1
  ColliderMgr *v6; // r0
  float v7; // r1
  int v8; // r5
  int v9; // r6
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  v3 = (_DWORD *)(a1 + 6316);
  v2 = FIELD_U32(a1, 6316);
  if ( !v2 )
    goto LABEL_5;
  v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
  if ( !v4 || (*(_BYTE *)((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 80))(v4) + 2224) & 1) == 0 )
  {
    *v3 = 0;
LABEL_5:
    v5 = (ColliderBase *)(a1 + 6448);
    v6 = ColliderMgr_instance;
LABEL_6:
    ColliderMgr_add(v6, v5);
    v7 = FIELD_F32(a1, 112);
    v8 = FIELD_U32(a1, 8);
    v9 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v7;
    mapPositionToScreen(&out, &position);
    SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v9, "SE_AMB_DOKAN_AWA", v8, &out, 0);
    return (ColliderListNode *)SE_AMB_DOKAN_AWA_ref_2_helper(a1);
  }
  v5 = (ColliderBase *)(a1 + 6448);
  v6 = ColliderMgr_instance;
  if ( !*v3 )
    goto LABEL_6;
  return ColliderMgr_removeRelated1(ColliderMgr_instance, v5);
}
