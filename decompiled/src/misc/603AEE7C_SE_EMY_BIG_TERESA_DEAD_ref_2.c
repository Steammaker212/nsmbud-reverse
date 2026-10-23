/* SE_EMY_BIG_TERESA_DEAD_ref_2
 * address: 0x603AEE7C   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_BIG_TERESA_DEAD_ref_2(int a1, int a2, int a3)
{
  int v3; // r6
  unsigned int v6; // r5
  int v7; // r7
  signed int v8; // r1
  int v9; // r0
  int v10; // r1
  float v11; // r2
  int v12; // r0
  unsigned int v13; // r0
  int v14; // r5
  float v15; // r1
  const char *v16; // r1
  int v18; // [sp+8h] [bp-40h] BYREF
  float v19; // [sp+Ch] [bp-3Ch]
  int v20; // [sp+10h] [bp-38h]
  Vec2 out; // [sp+18h] [bp-30h] BYREF
  Vec3 position; // [sp+20h] [bp-28h] BYREF

  v3 = FIELD_U32(a3, 64);
  sub_6000ADDC(a1, v3);
  v6 = FIELD_S8(v3, 84);
  if ( v6 <= 3 )
  {
    v7 = *(_DWORD *)(PlayerMgr_instance + 4 * v6 + 32);
    if ( v7 )
    {
      v8 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v7 + 1192))(*(_DWORD *)(PlayerMgr_instance + 4 * v6 + 32));
      SE_EMY_KAME_HIT_ref(v3, v8, FIELD_U32(a1, 6292) == 2);
      v9 = FIELD_U32(a2, 64);
      v10 = FIELD_U32(v9, 108);
      v11 = FIELD_F32(v9, 112);
      v20 = FIELD_U32(v9, 116);
      v18 = v10;
      v19 = v11 + 16.0;
      v12 = sub_60285510(v7);
      v13 = sub_602856EC((int *)(a1 + 6292), v12);
      sub_60022540(dword_60C7F52C, (int)&v18, v13, v6, 1);
    }
  }
  v18 = 0;
  v19 = 0.0;
  v20 = 0;
  EffectData_create(375, (Vec3 *)(a1 + 6616), (int)&v18, a1 + 144);
  v14 = Global_BasicSoundActor1;
  v15 = FIELD_F32(a1, 112);
  if ( FIELD_U32(a1, 6656) )
  {
    position.x = FIELD_F32(a1, 108);
    position.y = v15;
    mapPositionToScreen(&out, &position);
    v16 = "SE_EMY_BIG_TERESA_DEAD";
  }
  else
  {
    position.x = FIELD_F32(a1, 108);
    position.y = v15;
    mapPositionToScreen(&out, &position);
    v16 = "SE_EMY_TERESA_DEAD";
  }
  BasicSoundActor1_playSound(v14, v16, (int)&out, 0);
  StageActor__delete((StateActor *)a1, 1);
  return 1;
}
