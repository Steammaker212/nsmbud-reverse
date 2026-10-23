/* SE_EMY_TERESA_DEAD_ref_3B1920
 * address: 0x603B1920   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_TERESA_DEAD_ref_3B1920(int a1, int a2, int a3)
{
  int v3; // r7
  unsigned int v6; // r5
  int v7; // r6
  signed int v8; // r1
  float *v9; // r0
  float v10; // r1
  float v11; // r2
  int v12; // r0
  unsigned int v13; // r0
  float v14; // r1
  int v15; // r5
  Vec3 position; // [sp+8h] [bp-38h] BYREF
  Vec2 out; // [sp+18h] [bp-28h] BYREF

  v3 = FIELD_U32(a3, 64);
  v6 = FIELD_U8(v3, 84);
  if ( v6 <= 3 )
  {
    v7 = *(_DWORD *)(PlayerMgr_instance + 4 * v6 + 32);
    if ( v7 )
    {
      v8 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v7 + 1192))(*(_DWORD *)(PlayerMgr_instance + 4 * v6 + 32));
      SE_EMY_KAME_HIT_ref(v3, v8, FIELD_U32(a1, 6292) == 2);
      v9 = *(float **)(a2 + 64);
      v10 = v9[27];
      v11 = v9[28];
      position.z = v9[29];
      position.x = v10;
      position.y = v11 + 16.0;
      v12 = sub_60285510(v7);
      v13 = sub_602856EC((int *)(a1 + 6292), v12);
      sub_60022540(dword_60C7F52C, (int)&position, v13, v6, 1);
    }
  }
  v14 = FIELD_F32(a1, 112);
  v15 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v14;
  mapPositionToScreen(&out, &position);
  BasicSoundActor1_playSound(v15, "SE_EMY_TERESA_DEAD", (int)&out, 0);
  EffectData_create(375, (Vec3 *)(a1 + 6420), 0, 0);
  StageActor__delete((StateActor *)a1, 1);
  return 1;
}
