/* SE_OBJ_STEP_ON_SWITCH_ref
 * address: 0x606E0A98   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall SE_OBJ_STEP_ON_SWITCH_ref(int a1)
{
  float v2; // r1
  int v3; // r5
  int v4; // r1
  bool v5; // zf
  ColliderListNode *result; // r0
  bool v7; // zf
  ActiveColliderMgr *v8; // r5
  Vec2 out; // [sp+10h] [bp-20h] BYREF
  Vec3 position; // [sp+18h] [bp-18h] BYREF

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 224))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 228))(a1);
  v2 = FIELD_F32(a1, 112);
  v3 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&out, &position);
  BasicSoundActor2_play(v3, "SE_OBJ_STEP_ON_SWITCH", &out.x, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 264))(a1);
  if ( !FIELD_U32(a1, 6928) )
  {
    sub_603FD768(
      dword_60C99DF4,
      FIELD_U8(LevelInfo_instance, 18),
      1,
      FIELD_F32(a1, 6880),
      FIELD_F32(a1, 6884));
    v5 = FIELD_U8(dword_60CC6D8C, 17) == 0;
    if ( FIELD_U8(dword_60CC6D8C, 17) )
    {
      v4 = FIELD_U8(a1, 540);
      v5 = v4 == 0;
    }
    if ( !v5 )
      EventMgr_set(EventMgr__instance, (unsigned __int8)(v4 - 1), 0, 1, 0, 0, 0, 0);
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 248))(a1);
  result = (ColliderListNode *)FIELD_U8(a1, 6919);
  v7 = result == 0;
  if ( FIELD_U8(a1, 6919) )
  {
    result = (ColliderListNode *)FIELD_U8(a1, 6920);
    v7 = result == 0;
  }
  if ( !v7 )
  {
    v8 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
    ActiveColldierMgr_removeFromCreateList(v8, (ActiveCollider *)(a1 + 188));
    ActiveColldierMgr_removeFromList3(v8, a1 + 188);
    return ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6176));
  }
  return result;
}
