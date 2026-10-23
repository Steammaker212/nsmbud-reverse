/* SE_EMY_SHADOW_DOWN_ref
 * address: 0x60393E68   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall SE_EMY_SHADOW_DOWN_ref(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *v4; // r7
  int *result; // r0
  ActiveColliderMgr *v6; // r7
  ActiveColliderMgr *v7; // r6
  float *v8; // r4
  int v9; // r0
  float v10; // r2
  int v11; // r5
  float v12; // r0
  Vec2 v13; // [sp+0h] [bp-30h] BYREF
  Vec3 position; // [sp+8h] [bp-28h] BYREF

  FIELD_U32(a1, 344) = 0;
  v2 = (ActiveCollider *)(a1 + 6608);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6608));
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
  v4 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6912));
  ActiveColldierMgr_removeFromCreateList(v4, (ActiveCollider *)(a1 + 6912));
  ActiveColldierMgr_removeFromList3(v4, a1 + 6912);
  sub_6039AF5C(a1, 0, 0.0);
  result = (int *)FIELD_U8(a1, 6320);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    FIELD_U32(a1, 344) = sub_6039B8A0;
    v6 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v2) && !ActiveColliderMgr_isInCreateList(v6, v2) )
      ActiveColliderMgr_addToCreateList(v6, v2);
    v7 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6912))
      && !ActiveColliderMgr_isInCreateList(v7, (ActiveCollider *)(a1 + 6912)) )
    {
      ActiveColliderMgr_addToCreateList(v7, (ActiveCollider *)(a1 + 6912));
    }
    if ( (FIELD_U8(a1, 6320) & 1) != 0 )
    {
      v9 = 1;
      switch ( FIELD_U8(a1, 5957) )
      {
        case 1:
          v9 = 3;
          break;
        case 2:
          v9 = 2;
          break;
        case 4:
          break;
        case 0xB:
          v9 = 4;
          break;
        default:
          v9 = 0;
          break;
      }
      v8 = (float *)(a1 + 108);
      v10 = FIELD_F32(a1, 112);
      position.x = FIELD_F32(a1, 108);
      position.y = v10;
      position.z = 4500.0;
      EffectData_create(dword_60B00980[v9], &position, 0, 0);
    }
    else
    {
      v8 = (float *)(a1 + 108);
    }
    v11 = Global_BasicSoundActor1;
    v12 = FIELD_F32(a1, 112);
    position.x = *v8;
    position.y = v12;
    mapPositionToScreen(&v13, &position);
    BasicSoundActor1_playSound(v11, "SE_EMY_SHADOW_DOWN", (int)&v13, 0);
    FIELD_U32(a1, 6392) = &dword_60C972C0;
    return &dword_60C972C0;
  }
  return result;
}
