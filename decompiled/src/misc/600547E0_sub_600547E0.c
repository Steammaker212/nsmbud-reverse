/* sub_600547E0
 * address: 0x600547E0   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600547E0(int a1)
{
  int v2; // r5
  int v3; // r1
  unsigned int v4; // r0
  float v5; // s16
  float v6; // r1
  int v7; // r5
  int v8; // r6
  float v9; // r1
  int v10; // r5
  float v11; // r1
  int v12; // r5
  int v13; // r6
  int result; // r0
  Vec2 out; // [sp+8h] [bp-30h] BYREF
  Vec3 position; // [sp+10h] [bp-28h] BYREF

  v2 = a1 + 6300;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  v3 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
    v3 += 4 * v4;
  v5 = *(float *)(*(_DWORD *)v3 + 20);
  if ( v5 <= 88.0 )
  {
    v6 = FIELD_F32(a1, 112);
    v7 = FIELD_U32(a1, 8);
    v8 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v6;
    mapPositionToScreen(&out, &position);
    j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v8, "SE_EMY_KAMECK_FLY_STOP", v7, &out, 0);
  }
  if ( v5 == 124.0 )
  {
    v9 = FIELD_F32(a1, 112);
    v10 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v9;
    mapPositionToScreen(&out, &position);
    BasicSoundActor1_playSound(v10, "SE_VOC_KMC_DEMO_LAUGH", (int)&out, 0);
  }
  if ( v5 > 264.0 )
  {
    v11 = FIELD_F32(a1, 112);
    v12 = FIELD_U32(a1, 8);
    v13 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v11;
    mapPositionToScreen(&out, &position);
    j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v13, "SE_EMY_KAMECK_FLY_START", v12, &out, 0);
  }
  result = FIELD_U16(a1, 6276);
  if ( !FIELD_U16(a1, 6276) )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C808E0);
  return result;
}
