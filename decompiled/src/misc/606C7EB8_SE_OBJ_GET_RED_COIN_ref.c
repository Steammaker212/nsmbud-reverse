/* SE_OBJ_GET_RED_COIN_ref
 * address: 0x606C7EB8   size: 1224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_GET_RED_COIN_ref(int a1)
{
  int v2; // r1
  unsigned __int8 *v3; // r9
  int *v4; // r5
  unsigned int v5; // r1
  int *v6; // r10
  int v7; // r1
  _DWORD *v8; // r2
  float v9; // s0
  int v10; // r0
  int v11; // r4
  int v12; // r1
  int v13; // r0
  unsigned __int16 *v14; // r2
  int v15; // r0
  _WORD *v16; // r8
  int v17; // r2
  int *v18; // r4
  float v19; // r3
  float v20; // r6
  int v21; // r2
  int v22; // r3
  char v23; // r12
  int v25; // r1
  int v26; // r2
  int *v27; // r1
  int v28; // r2
  unsigned int v29; // r0
  int *v30; // r5
  float v31; // r1
  int v32; // r6
  char v33; // r12
  unsigned int v34; // r0
  int v35; // r1
  int v36; // r5
  int (__fastcall ***v37)(_DWORD, int *); // r6
  const char *v38; // r8
  unsigned int v39; // r0
  int *v40; // r6
  float v41; // r1
  int v42; // r4
  Vec3 position; // [sp+8h] [bp-38h] BYREF
  Vec2 out; // [sp+18h] [bp-28h] BYREF

  v3 = (unsigned __int8 *)(a1 + 7088);
  v2 = FIELD_U8(a1, 7088);
  if ( v2 == 255 )
    return 0;
  sub_60584408(dword_60CAF15C, (char)v2, 1);
  v4 = (int *)(a1 + 7076);
  v6 = (int *)(a1 + 7064);
  v5 = FIELD_U32(a1, 7064);
  if ( v5 >= 8 )
    v5 = 0;
  v7 = EnemyCounterMaybe_instance + 4 * v5;
  v8 = (_DWORD *)(v7 + 68);
  if ( !FIELD_U32(a1, 7076) )
    v8 = (_DWORD *)(v7 + 36);
  ++*v8;
  v9 = FIELD_F32(a1, 112) + 8.0;
  position.x = FIELD_F32(a1, 108);
  position.y = v9;
  position.z = 4500.0;
  if ( *v4 )
    v10 = 79;
  else
    v10 = 77;
  EffectData_create(v10, &position, 0, 0);
  v11 = 0;
  EffectData_create(80, &position, 0, 0);
  v12 = *v4;
  if ( (unsigned int)*v6 < 8 )
    v11 = *v6;
  v13 = EnemyCounterMaybe_instance + 4 * v11;
  v14 = (unsigned __int16 *)(v13 + 68);
  if ( !v12 )
    v14 = (unsigned __int16 *)(v13 + 36);
  v15 = *v14;
  FIELD_U16(a1, 7082) = v15;
  v16 = (_WORD *)(a1 + 7082);
  v18 = (int *)(a1 + 7068);
  v17 = FIELD_U32(a1, 7068);
  if ( v15 >= v17 )
  {
    *v16 = v17;
    LOWORD(v15) = v17;
  }
  v19 = FIELD_F32(a1, 112);
  v20 = FIELD_F32(a1, 116);
  position.x = FIELD_F32(a1, 108);
  position.z = v20;
  v21 = (unsigned __int16)v15 - 1;
  position.y = v19 + 32.0;
  v22 = (char)*v3;
  if ( v12 )
    sub_60407E74(dword_60C9A1E8, (int)&position, dword_60AF4EB0[v21], v22, 0, 0);
  else
    sub_60407E74(dword_60C9A1E8, (int)&position, dword_60AF4E90[v21], v22, 0, 0);
  v25 = *v6;
  if ( (unsigned int)*v6 >= 8 )
    v25 = 0;
  v26 = EnemyCounterMaybe_instance + 4 * v25;
  v27 = (int *)(v26 + 68);
  if ( !*v4 )
    v27 = (int *)(v26 + 36);
  v28 = *v18;
  if ( *v27 >= *v18 )
  {
    *v27 = 0;
    v28 = *v18;
  }
  if ( (unsigned __int16)*v16 == v28 )
  {
    if ( !FIELD_U8(dword_60CC6D8C, 17) )
      FIELD_U32(a1, 7100) = sub_606C8C0C(a1);
    SE_SYS_NICE_S_ref();
    v29 = (char)*v3;
    LODWORD(position.x) = 70;
    v30 = sub_60002B90(v29, unk_60C2648C);
    v31 = FIELD_F32(a1, 112);
    v32 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v31;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v32, "SE_OBJ_GET_RED_COIN_COMPLETE", &out.x, (int)v30);
    v34 = *v3;
    v35 = 0;
    v36 = 0;
    if ( v34 < 4 )
      v35 = (char)v34;
    v37 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 4 * v35 + 48);
    if ( ((unsigned int)&dword_60C7B37C & ~(1617723800 << v33) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v37 )
    {
      v36 = (**v37)(v37, &dword_60C7B378);
      if ( v36 )
        v36 = (int)v37;
    }
    if ( FIELD_U32(a1, 7084) == 1 )
      v36 = sub_607891A0(PlayerMgr_instance, (char)*v3);
    if ( v36 )
      sub_607736B0(v36);
    sub_606C87D8(a1, FIELD_U32(a1, 7100));
  }
  else
  {
    if ( ((unsigned int)dword_60CBAD04 & ~(1617724000 << v23) & 1) == 0 && _cxa_guard_acquire(dword_60CBAD04) )
    {
      dword_60CBAD20 = (int)"SE_OBJ_GET_RED_COIN";
      dword_60CBAD24 = (int)"SE_OBJ_GET_RED_COIN_2";
      dword_60CBAD28 = (int)"SE_OBJ_GET_RED_COIN_3";
      dword_60CBAD2C = (int)"SE_OBJ_GET_RED_COIN_4";
      dword_60CBAD30 = (int)"SE_OBJ_GET_RED_COIN_5";
      dword_60CBAD34 = (int)"SE_OBJ_GET_RED_COIN_6";
      dword_60CBAD38 = (int)"SE_OBJ_GET_RED_COIN_7";
      _cxa_guard_release(dword_60CBAD04);
    }
    v38 = *((const char **)&unk_60CBAD00 + (unsigned __int16)*v16 + 7);
    v39 = (char)*v3;
    LODWORD(position.x) = 70;
    v40 = sub_60002B90(v39, unk_60C2648C);
    v41 = FIELD_F32(a1, 112);
    v42 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v41;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v42, v38, &out.x, (int)v40);
  }
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBAC80);
  return 1;
}
