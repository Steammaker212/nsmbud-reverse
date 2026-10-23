/* SE_EMY_ref
 * address: 0x6029D4C4   size: 772   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_ref(int a1)
{
  float v2; // s0
  float v3; // s2
  _DWORD *v4; // r6
  int v5; // r1
  float v6; // s0
  int result; // r0
  float v8; // r1
  float v9; // s2
  int v10; // r0
  float v11; // s0
  int v12; // r0
  Actor *v13; // r5
  StateMgr *p_heap; // r0
  StateBase *v15; // r1
  float v16; // r1
  int v17; // r5
  const char *v18; // r1
  float v19; // r1
  _BYTE *v20; // r4
  _DWORD v21[2]; // [sp+4h] [bp-3Ch] BYREF
  Vec3 v22; // [sp+Ch] [bp-34h] BYREF
  Vec2 out; // [sp+18h] [bp-28h] BYREF
  Vec3 position; // [sp+20h] [bp-20h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 108) = v2;
  v3 = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
  FIELD_F32(a1, 112) = v3;
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  v22.x = v2;
  v22.y = v3;
  v22.z = 4500.0;
  v4 = (_DWORD *)(a1 + 6304);
  if ( FIELD_U32(a1, 6304) )
    v5 = 366;
  else
    v5 = 368;
  EffectWrapper_update((EffectWrapper *)(a1 + 6352), v5, &v22, 0, 0);
  CollisionMgr_process((_BYTE *)(a1 + 648), v6);
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) == 0 )
    return result;
  FIELD_U32(a1, 124) = 0;
  AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 0, 1, 0, 0);
  v8 = FIELD_F32(a1, 112);
  v22.x = FIELD_F32(a1, 108);
  v22.y = v8;
  v22.z = 4500.0;
  if ( *v4 )
  {
    v9 = 1.0;
    v10 = 365;
  }
  else
  {
    v9 = 3.0;
    v10 = 367;
  }
  v22.y = v8 + v9;
  EffectData_create(v10, &v22, 0, 0);
  v11 = FIELD_F32(a1, 112);
  v21[0] = FIELD_U32(a1, 108);
  *(float *)&v21[1] = v11 + 3.0;
  sub_60716054(TileMgr_instance, v21, 3);
  v12 = sub_6014B69C(a1 + 648);
  if ( v12 )
  {
    v13 = *(Actor **)(v12 + 144);
    if ( Actor__getProfileId(v13) == 269 )
    {
      p_heap = (StateMgr *)&v13[76].heap;
      v15 = (StateBase *)&unk_60C862E4;
LABEL_13:
      StateMgr__changeState(p_heap, v15);
      goto LABEL_14;
    }
    if ( Actor__getProfileId(v13) == 270 )
    {
      p_heap = (StateMgr *)&v13[76].heap;
      v15 = (StateBase *)&unk_60C86150;
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( *v4 )
  {
    LODWORD(v22.x) = 15;
    LODWORD(v22.y) = unk_60C26394;
    LOBYTE(v22.z) = 0;
    v16 = FIELD_F32(a1, 112);
    v17 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v16;
    mapPositionToScreen(&out, &position);
    v18 = "SE_EMY_BIG_DOSSUN";
  }
  else
  {
    LODWORD(v22.x) = 15;
    LODWORD(v22.y) = unk_60C26390;
    LOBYTE(v22.z) = 0;
    v19 = FIELD_F32(a1, 112);
    v17 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v19;
    mapPositionToScreen(&out, &position);
    v18 = "SE_EMY_DOSSUN";
  }
  BasicSoundActor1_playSound(v17, v18, (int)&out, (int)&v22);
  if ( (FIELD_U16(a1, 2872) & 0x220) != 0 )
  {
    FIELD_U8(a1, 2872) = 0;
    v20 = (_BYTE *)(a1 + 2872);
    v20[4] = 0;
    v20 += 4;
    v20[3] = 0;
    v20[2] = 0;
    v20[1] = 0;
    *(v20 - 1) = 0;
    *(v20 - 2) = 0;
    *(v20 - 3) = 0;
    return 0;
  }
  else
  {
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C90128);
    FIELD_U32(a1, 6312) = 64;
    return 64;
  }
}
