/* sub_600F3944
 * address: 0x600F3944   size: 980   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F3944(int a1)
{
  int **v2; // r7
  _DWORD *v3; // r1
  unsigned int v4; // r0
  int v5; // r0
  int (__fastcall *v6)(int, int (***)()); // r2
  int v7; // r0
  int v8; // r0
  int (__fastcall *v9)(int, _DWORD *); // r2
  int v10; // r0
  unsigned int v11; // r1
  _DWORD *v12; // r1
  int result; // r0
  _DWORD *v14; // r6
  int v15; // r0
  int (__fastcall *v16)(int, int (***)()); // r2
  int v17; // r0
  int *v18; // r1
  unsigned int v19; // r0
  int v20; // r5
  int v21; // r0
  __int16 *v22; // r4
  int v23; // t1
  __int16 *v24; // r5
  int v25; // r2
  const char *v26; // r1
  int v27; // r1
  int v28; // r3
  unsigned int v29; // r2
  __int16 *v30; // r4
  int v31; // t1
  _DWORD v32[2]; // [sp+4h] [bp-64h] BYREF
  Vec3 v33; // [sp+Ch] [bp-5Ch] BYREF
  int (**v34)(); // [sp+18h] [bp-50h] BYREF
  const char *v35; // [sp+1Ch] [bp-4Ch]
  float v36; // [sp+24h] [bp-44h]
  float v37; // [sp+34h] [bp-34h]

  v2 = (int **)(a1 + 7096);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( FIELD_U32(a1, 8436) )
  {
    v3 = (_DWORD *)(*v2)[3];
    v4 = (*v2)[17];
    if ( (*v2)[2] > v4 )
      v3 += v4;
    if ( sub_60418548(*v3 + 4) )
    {
      v5 = **v2;
      v6 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v5 + 84);
      v34 = &sead__SafeStringBase__vtable;
      v35 = "ankle_r1";
      v7 = v6(v5, &v34);
      (*(void (__fastcall **)(int, int, int (***)()))(*(_DWORD *)**v2 + 108))(**v2, v7, &v34);
      v33.x = v36;
      v33.y = v37;
      v33.z = 4500.0;
      EffectData_create(321, &v33, 0, 0);
      v8 = **v2;
      v9 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v8 + 84);
      v32[0] = &sead__SafeStringBase__vtable;
      v32[1] = "ankle_l1";
      v10 = v9(v8, v32);
      (*(void (__fastcall **)(int, int, int (***)()))(*(_DWORD *)**v2 + 108))(**v2, v10, &v34);
      v33.x = v36;
      v33.y = v37;
      v33.z = 4500.0;
      EffectData_create(321, &v33, 0, 0);
    }
  }
  v11 = FIELD_U32(a1, 7136);
  if ( !v11 || (v12 = (_DWORD *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v11)) == 0 )
  {
    FIELD_U32(a1, 7092) = 2;
LABEL_18:
    result = a1 + 7180;
    v27 = FIELD_U32(a1, 7180);
    if ( v27 == 2 )
    {
      *(_DWORD *)result = 1;
    }
    else
    {
      v28 = (*v2)[3];
      v29 = (*v2)[17];
      if ( (*v2)[2] > v29 )
        v28 += 4 * v29;
      if ( (*(_BYTE *)(*(_DWORD *)v28 + 28) & 0x20) == 0 )
        return result;
      *(_DWORD *)result = v27 - 1;
      if ( v27 < 2 )
      {
        FIELD_U32(a1, 7136) = 0;
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C832D8);
      }
    }
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C83290);
  }
  v14 = (_DWORD *)(a1 + 7092);
  result = FIELD_U32(a1, 7092);
  if ( result == 2 )
    goto LABEL_18;
  if ( result == 1 )
  {
    sub_600B3444((_DWORD *)a1, v12);
    v15 = **v2;
    v16 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v15 + 84);
    v34 = &sead__SafeStringBase__vtable;
    v35 = "morton_hummer";
    v17 = v16(v15, &v34);
    (*(void (__fastcall **)(int, int, int (***)()))(*(_DWORD *)**v2 + 108))(**v2, v17, &v34);
    sub_602372C0(a1 + 8548, 331, &v34, 0);
    v18 = (int *)(*v2)[3];
    v19 = (*v2)[17];
    if ( (*v2)[2] > v19 )
      v18 += v19;
    v20 = *v18;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1204))(a1);
    if ( sub_60418548(v20 + 4) )
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1332))(a1);
    result = ((int (__fastcall *)(int))loc_600B3E14)(a1);
    if ( result )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1156))(a1);
      v21 = FIELD_U32(a1, 7180);
      if ( v21 < 3 )
      {
        if ( v21 != 2 )
        {
LABEL_31:
          *v14 = 2;
          return 2;
        }
        v31 = FIELD_S16(a1, 6640);
        v30 = (__int16 *)(a1 + 6640);
        v24 = v30 - 154;
        sub_608134CC(v30 - 154, "SE_VOC_MOR_QUAKE", v31, 0);
        v25 = *v30;
        v26 = "SE_BOSS_MORTON_HAMMER_ATTACK_LAST";
      }
      else
      {
        v23 = FIELD_S16(a1, 6640);
        v22 = (__int16 *)(a1 + 6640);
        v24 = v22 - 154;
        sub_608134CC(v22 - 154, "SE_VOC_MOR_MAGIC_SHOT", v23, 0);
        v25 = *v22;
        v26 = "SE_BOSS_MORTON_HAMMER_ATTACK";
      }
      sub_608134CC(v24, v26, v25, 0);
      goto LABEL_31;
    }
  }
  return result;
}
