/* SE_BOSS_CMN_MAGIC_DISAPP_ref_2
 * address: 0x6062A840   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_CMN_MAGIC_DISAPP_ref_2(int a1)
{
  int result; // r0
  float v3; // r1
  int v4; // r5
  Vec2 v5; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  result = FIELD_U8(a1, 7264);
  if ( result )
  {
    FIELD_U32(a1, 7268) = 1;
    v3 = FIELD_F32(a1, 112);
    v4 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v3;
    mapPositionToScreen(&v5, &position);
    BasicSoundActor1_playSound(v4, "SE_BOSS_CMN_MAGIC_DISAPP", (int)&v5, 0);
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6104));
    ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6608));
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB3E14);
  }
  return result;
}
