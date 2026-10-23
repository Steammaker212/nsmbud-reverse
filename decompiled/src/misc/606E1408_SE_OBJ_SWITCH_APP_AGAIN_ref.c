/* SE_OBJ_SWITCH_APP_AGAIN_ref
 * address: 0x606E1408   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_SWITCH_APP_AGAIN_ref(int a1)
{
  int v2; // r0
  int *v3; // r7
  ActiveColliderMgr *v4; // r5
  float v5; // r1
  int v6; // r5
  int result; // r0
  Vec2 v8; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v3 = (int *)(a1 + 6912);
  v2 = FIELD_U32(a1, 6912);
  if ( !v2 )
  {
    v4 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 188));
    }
    FIELD_U16(a1, 6954) = 0;
    FIELD_U16(a1, 6952) = 0;
    FIELD_U16(a1, 6950) = 0;
    FIELD_U16(a1, 6948) = 0;
    v5 = FIELD_F32(a1, 112);
    v6 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v5;
    mapPositionToScreen(&v8, &position);
    BasicSoundActor2_play(v6, "SE_OBJ_SWITCH_APP_AGAIN", &v8.x, 0);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 204))(a1);
    v2 = *v3;
  }
  result = word_60B090C8[v2];
  FIELD_U16(a1, 6946) = result;
  return result;
}
