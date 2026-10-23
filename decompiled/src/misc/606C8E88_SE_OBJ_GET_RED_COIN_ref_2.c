/* SE_OBJ_GET_RED_COIN_ref_2
 * address: 0x606C8E88   size: 1048   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_GET_RED_COIN_ref_2(int a1)
{
  int v2; // r2
  unsigned int v4; // r1
  int *v5; // r7
  int v6; // r0
  int *v7; // r6
  int v8; // r4
  int v9; // r3
  _DWORD *v10; // r5
  int v11; // r1
  unsigned __int16 *v12; // r0
  _WORD *v13; // r9
  int v14; // r0
  int v15; // r2
  int *v16; // r4
  float v17; // r3
  float v18; // r5
  int v19; // r2
  int v20; // r3
  unsigned __int8 *v21; // r8
  int v22; // t1
  char v23; // r12
  int v24; // r1
  int v25; // r2
  int *v26; // r1
  int v27; // r2
  unsigned int v28; // r0
  int *v29; // r4
  float v30; // r1
  int v31; // r6
  char v32; // r12
  unsigned int v33; // r0
  int v34; // r1
  int v35; // r4
  int (__fastcall ***v36)(_DWORD, int *); // r6
  const char *v38; // r9
  unsigned int v39; // r0
  int *v40; // r6
  float v41; // r1
  int v42; // r7
  Vec3 position; // [sp+8h] [bp-38h] BYREF
  Vec2 out; // [sp+18h] [bp-28h] BYREF

  v2 = 0;
  v5 = (int *)(a1 + 7064);
  v4 = FIELD_U32(a1, 7064);
  v7 = (int *)(a1 + 7076);
  v6 = FIELD_U32(a1, 7076);
  if ( v4 >= 8 )
    v4 = 0;
  v8 = EnemyCounterMaybe_instance + 68;
  v9 = EnemyCounterMaybe_instance + 36;
  v10 = (_DWORD *)(EnemyCounterMaybe_instance + 68 + 4 * v4);
  if ( !v6 )
    v10 = (_DWORD *)(v9 + 4 * v4);
  ++*v10;
  v11 = *v7;
  if ( (unsigned int)*v5 < 8 )
    v2 = *v5;
  v12 = (unsigned __int16 *)(v8 + 4 * v2);
  if ( !v11 )
    v12 = (unsigned __int16 *)(v9 + 4 * v2);
  v13 = (_WORD *)(a1 + 7082);
  v14 = *v12;
  FIELD_U16(a1, 7082) = v14;
  v16 = (int *)(a1 + 7068);
  v15 = FIELD_U32(a1, 7068);
  if ( v14 >= v15 )
  {
    *v13 = v15;
    LOWORD(v14) = v15;
  }
  v17 = FIELD_F32(a1, 112);
  v18 = FIELD_F32(a1, 116);
  position.x = FIELD_F32(a1, 108);
  position.z = v18;
  v19 = (unsigned __int16)v14 - 1;
  position.y = v17 + 32.0;
  v22 = FIELD_S8(a1, 7088);
  v21 = (unsigned __int8 *)(a1 + 7088);
  v20 = v22;
  if ( v11 )
    sub_60407E74(dword_60C9A1E8, (int)&position, dword_60AF4EB0[v19], v20, 0, 0);
  else
    sub_60407E74(dword_60C9A1E8, (int)&position, dword_60AF4E90[v19], v20, 0, 0);
  v24 = *v5;
  if ( (unsigned int)*v5 >= 8 )
    v24 = 0;
  v25 = EnemyCounterMaybe_instance + 4 * v24;
  v26 = (int *)(v25 + 68);
  if ( !*v7 )
    v26 = (int *)(v25 + 36);
  v27 = *v16;
  if ( *v26 >= *v16 )
  {
    *v26 = 0;
    v27 = *v16;
  }
  if ( (unsigned __int16)*v13 == v27 )
  {
    if ( !FIELD_U8(dword_60CC6D8C, 17) )
      FIELD_U32(a1, 7100) = sub_606C8C0C(a1);
    SE_SYS_NICE_S_ref();
    v28 = (char)*v21;
    LODWORD(position.x) = 70;
    v29 = sub_60002B90(v28, unk_60C2648C);
    v30 = FIELD_F32(a1, 112);
    v31 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v30;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v31, "SE_OBJ_GET_RED_COIN_COMPLETE", &out.x, (int)v29);
    v33 = *v21;
    v34 = 0;
    v35 = 0;
    if ( v33 < 4 )
      v34 = (char)v33;
    v36 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 4 * v34 + 48);
    if ( ((unsigned int)&dword_60C7B37C & ~(1617727688 << v32) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v36 )
    {
      v35 = (**v36)(v36, &dword_60C7B378);
      if ( v35 )
        v35 = (int)v36;
    }
    if ( FIELD_U32(a1, 7084) == 1 )
      v35 = sub_607891A0(PlayerMgr_instance, (char)*v21);
    if ( v35 )
      sub_607736B0(v35);
    sub_606C87D8(a1, FIELD_U32(a1, 7100));
    return 1;
  }
  else
  {
    if ( ((unsigned int)&dword_60CBAD04[1] & ~(1617727896 << v23) & 1) == 0 && _cxa_guard_acquire(&dword_60CBAD04[1]) )
    {
      dword_60CBAD3C = (int)"SE_OBJ_GET_RED_COIN";
      dword_60CBAD40 = (int)"SE_OBJ_GET_RED_COIN_2";
      dword_60CBAD44 = (int)"SE_OBJ_GET_RED_COIN_3";
      dword_60CBAD48 = (int)"SE_OBJ_GET_RED_COIN_4";
      dword_60CBAD4C = (int)"SE_OBJ_GET_RED_COIN_5";
      dword_60CBAD50 = (int)"SE_OBJ_GET_RED_COIN_6";
      dword_60CBAD54 = (int)"SE_OBJ_GET_RED_COIN_7";
      _cxa_guard_release(&dword_60CBAD04[1]);
    }
    v38 = *((const char **)&unk_60CBAD00 + (unsigned __int16)*v13 + 14);
    v39 = (char)*v21;
    LODWORD(position.x) = 70;
    v40 = sub_60002B90(v39, unk_60C2648C);
    v41 = FIELD_F32(a1, 112);
    v42 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v41;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v42, v38, &out.x, (int)v40);
    return 0;
  }
}
