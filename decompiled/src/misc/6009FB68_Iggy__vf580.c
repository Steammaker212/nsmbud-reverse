/* Iggy__vf580
 * address: 0x6009FB68   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: KoopalingBase : 0x600B4860
// 
// Overridden by: None
int __fastcall Iggy__vf580(int a1)
{
  int **v2; // r8
  float v3; // s0
  int v4; // r5
  void (__fastcall *v5)(int, int, float *); // r7
  int v6; // r0
  int v7; // r5
  char v8; // r12
  unsigned int v9; // r1
  float v10; // r1
  float v11; // r2
  _DWORD *v12; // r1
  unsigned int v13; // r0
  int v14; // r1
  unsigned int v15; // r0
  int result; // r0
  float v17[13]; // [sp+8h] [bp-58h] BYREF
  Vec3 v18; // [sp+3Ch] [bp-24h] BYREF

  v2 = (int **)(a1 + 7096);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v4 = **v2;
  v5 = *(void (__fastcall **)(int, int, float *))(*(_DWORD *)v4 + 108);
  v6 = (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 1120))(a1, v3);
  v5(v4, v6, v17);
  v7 = 0;
  v18.x = v17[3];
  v18.y = v17[7];
  v18.z = 4500.0;
  EffectWrapper_update((EffectWrapper *)(a1 + 8328), 1020, &v18, 0, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1236))(a1);
  v9 = FIELD_U32(a1, 7136);
  if ( v9 )
    v7 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v9);
  if ( ((unsigned int)dword_60C81F18 & ~(1611267156 << v8) & 1) == 0 && _cxa_guard_acquire(dword_60C81F18) )
  {
    dword_60C81F14 = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C81F18);
  }
  if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C81F14) == 1 )
  {
    sub_6009DED4((_DWORD **)a1, v17);
    v10 = v17[1];
    v11 = v17[2];
    FIELD_F32(v7, 108) = v17[0];
    FIELD_F32(v7, 112) = v10;
    FIELD_F32(v7, 116) = v11;
  }
  v12 = (_DWORD *)(*v2)[3];
  v13 = (*v2)[17];
  if ( (*v2)[2] > v13 )
    v12 += v13;
  if ( sub_60418548(*v12 + 4) )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C82574);
  v14 = (*v2)[3];
  v15 = (*v2)[17];
  if ( (*v2)[2] > v15 )
    v14 += 4 * v15;
  result = *(unsigned __int8 *)(*(_DWORD *)v14 + 28);
  if ( (result & 0x20) != 0 )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C82574);
  return result;
}
