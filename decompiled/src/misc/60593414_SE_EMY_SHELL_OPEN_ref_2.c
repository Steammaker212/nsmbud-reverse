/* SE_EMY_SHELL_OPEN_ref_2
 * address: 0x60593414   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_SHELL_OPEN_ref_2(int a1)
{
  int v2; // r0
  int v3; // r0
  ActiveColliderMgr *v4; // r6
  float v5; // r1
  int v6; // r5
  Vec2 v8; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  sub_605943EC(a1, 3);
  FIELD_U8(a1, 8210) = 0;
  FIELD_U32(a1, 8164) = 2;
  FIELD_U32(a1, 8144) = 1105199104;
  FIELD_U32(a1, 8148) = 1103626240;
  FIELD_U32(a1, 8152) = 0;
  FIELD_U32(a1, 8156) = 1109655552;
  v2 = FIELD_U32(a1, 8144);
  FIELD_U32(a1, 7968) = FIELD_U32(a1, 8148);
  FIELD_U32(a1, 7964) = v2;
  v3 = FIELD_U32(a1, 8152);
  FIELD_U32(a1, 7960) = FIELD_U32(a1, 8156);
  FIELD_U32(a1, 7956) = v3;
  sub_60595A64(a1, 1);
  FIELD_U8(a1, 8211) = 0;
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7840))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 7840)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 7840));
  }
  v5 = FIELD_F32(a1, 112);
  v6 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v5;
  mapPositionToScreen(&v8, &position);
  BasicSoundActor1_playSound(v6, "SE_EMY_SHELL_OPEN", (int)&v8, 0);
  sub_605977BC(a1);
  FIELD_U8(a1, 8214) = 1;
  return 8214;
}
