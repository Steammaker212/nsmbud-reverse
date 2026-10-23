/* SE_BOSS_JR_CROWN_DOWNATTACK_ref_FD240
 * address: 0x600FD240   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_CROWN_DOWNATTACK_ref_FD240(int a1)
{
  float v2; // r2
  float v3; // r0
  float v4; // r1
  int result; // r0
  Vec3 position; // [sp+4h] [bp-24h] BYREF
  Vec2 out; // [sp+10h] [bp-18h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = FIELD_F32(a1, 116);
  v3 = FIELD_F32(a1, 9332);
  position.x = FIELD_F32(a1, 9328);
  position.y = v3;
  position.z = v2;
  EffectWrapper_update((EffectWrapper *)(a1 + 9784), 1066, &position, 0, (Vec3 *)(a1 + 144));
  FIELD_U32(a1, 160) += 596523264;
  v4 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v4;
  mapPositionToScreen(&out, &position);
  sub_60813574(a1 + 9476, "SE_BOSS_JR_CROWN_DOWNATTACK", &out, 0);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C85E34);
  }
  return result;
}
