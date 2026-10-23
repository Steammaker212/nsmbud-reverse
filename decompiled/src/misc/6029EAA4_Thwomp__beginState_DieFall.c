/* Thwomp__beginState_DieFall
 * address: 0x6029EAA4   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7FF0
// 
// Overridden by: None
int __fastcall Thwomp__beginState_DieFall(int a1)
{
  int v2; // r5
  float v3; // r1
  float v4; // s0
  ActiveColliderMgr *v5; // r6
  Vec2 v7; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  Enemy__beginState_DieFall((Enemy *)a1);
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 0;
  v2 = Global_BasicSoundActor1;
  v3 = FIELD_F32(a1, 112);
  if ( FIELD_U32(a1, 6304) )
  {
    position.x = FIELD_F32(a1, 108);
    position.y = v3;
    mapPositionToScreen(&v7, &position);
    BasicSoundActor1_playSound(v2, "SE_EMY_BIG_DOSSUN_DEAD", (int)&v7, 0);
    v4 = -0.25;
  }
  else
  {
    position.x = FIELD_F32(a1, 108);
    position.y = v3;
    mapPositionToScreen(&v7, &position);
    BasicSoundActor1_playSound(v2, "SE_EMY_DOSSUN_DEAD", (int)&v7, 0);
    v4 = -0.2;
  }
  FIELD_F32(a1, 100) = v4;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  v5 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6456));
  ActiveColldierMgr_removeFromCreateList(v5, (ActiveCollider *)(a1 + 6456));
  ActiveColldierMgr_removeFromList3(v5, a1 + 6456);
  FIELD_U32(a1, 116) = 1167867904;
  FIELD_U32(a1, 136) = -1056964608;
  FIELD_U32(a1, 124) = -1073741824;
  FIELD_U16(a1, 6276) = 13;
  return sub_602360C0(a1 + 6368);
}
