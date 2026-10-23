/* SE_BOSS_ref
 * address: 0x60061E0C   size: 1008   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_BOSS_ref(int *a1)
{
  _DWORD *v2; // r0
  int *v3; // r7
  _DWORD *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  float v7; // r1
  int v8; // r5
  _DWORD *v9; // r0
  unsigned int v10; // r1
  unsigned int v11; // r2
  _DWORD *v12; // r3
  float v13; // r1
  int v14; // r5
  int v15; // r6
  _DWORD *v16; // r3
  float v17; // s0
  float v18; // r1
  int v19; // r5
  int v20; // r6
  float v21; // r0
  int v22; // r1
  _DWORD *v23; // r1
  unsigned int v24; // r0
  int v25; // r5
  char v26; // r12
  int v27; // r4
  char v28; // r12
  Vec2 out; // [sp+8h] [bp-30h] BYREF
  Vec3 position; // [sp+10h] [bp-28h] BYREF

  v3 = a1 + 1576;
  v2 = (_DWORD *)a1[1576];
  v4 = (_DWORD *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += v6;
  if ( sub_60418548(*v4 + 4) )
  {
    v7 = *((float *)a1 + 28);
    v8 = Global_BasicSoundActor2;
    LODWORD(position.x) = a1[27];
    position.y = v7;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v8, "SE_BOSS_KOOPA_JR_APPEAR", &out.x, 0);
  }
  v9 = *(_DWORD **)(*v3 + 12);
  v10 = *(_DWORD *)(*v3 + 8);
  v11 = *(_DWORD *)(*v3 + 68);
  v12 = v9;
  if ( v10 > v11 )
    v12 = &v9[v11];
  if ( *(float *)(*v12 + 20) >= 426.0 )
  {
    v13 = *((float *)a1 + 28);
    v14 = a1[2];
    v15 = Global_BasicSoundActor1;
    LODWORD(position.x) = a1[27];
    position.y = v13;
    mapPositionToScreen(&out, &position);
    j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v15, "SE_BOSS_JR_AND_KAMC_GO", v14, &out, 0);
    v9 = *(_DWORD **)(*v3 + 12);
    v10 = *(_DWORD *)(*v3 + 8);
    v11 = *(_DWORD *)(*v3 + 68);
  }
  v16 = v9;
  if ( v10 > v11 )
    v16 = &v9[v11];
  v17 = *(float *)(*v16 + 20);
  if ( v17 >= 92.0 && v17 < 426.0 )
  {
    v18 = *((float *)a1 + 28);
    v19 = a1[2];
    v20 = Global_BasicSoundActor1;
    LODWORD(position.x) = a1[27];
    position.y = v18;
    mapPositionToScreen(&out, &position);
    j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v20, "SE_BOSS_JR_CLOWN_MOVE", v19, &out, 0);
    v9 = *(_DWORD **)(*v3 + 12);
    v10 = *(_DWORD *)(*v3 + 8);
    v11 = *(_DWORD *)(*v3 + 68);
  }
  if ( v10 > v11 )
    v9 += v11;
  if ( sub_60418548(*v9 + 4) )
  {
    v21 = *(float *)a1;
    v22 = 1;
LABEL_22:
    (*(void (__fastcall **)(int *, int))(LODWORD(v21) + 780))(a1, v22);
    goto LABEL_23;
  }
  v23 = *(_DWORD **)(*v3 + 12);
  v24 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v24 )
    v23 += v24;
  if ( sub_60418548(*v23 + 4) )
  {
    v21 = *(float *)a1;
    v22 = 0;
    goto LABEL_22;
  }
LABEL_23:
  if ( !*((_WORD *)a1 + 3138) )
  {
    *((float *)a1 + 27) = FIELD_F32(dword_60CC6484, 112) + -48.0;
    a1[1941] = 2;
    a1[20] ^= 1u;
    a1[40] = (*(int (__fastcall **)(int *))(*a1 + 760))(a1);
    (*(void (__fastcall **)(int *, void *))(*a1 + 192))(a1, &unk_60C81014);
    v25 = (*(int (__fastcall **)(int *))(*a1 + 624))(a1);
    if ( ((unsigned int)&dword_60C80FD8 & ~(1611014348 << v26) & 1) == 0 && _cxa_guard_acquire(&dword_60C80FD8) )
    {
      dword_60C80FD4 = (int)&off_60BC2CB4;
      _cxa_guard_release(&dword_60C80FD8);
    }
    if ( v25 && (**(int (__fastcall ***)(int, int *))v25)(v25, &dword_60C80FD4) == 1 )
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)v25 + 192))(v25, &unk_60C80F94);
    v27 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[1940]);
    if ( ((unsigned int)&dword_60C81080 & ~(1611014524 << v28) & 1) == 0 && _cxa_guard_acquire(&dword_60C81080) )
    {
      dword_60C8107C = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C81080);
    }
    if ( v27 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v27)(v27, &dword_60C8107C) == 1 )
        (*(void (__fastcall **)(int, void *))(*(_DWORD *)v27 + 192))(v27, &unk_60C83FFC);
    }
  }
}
