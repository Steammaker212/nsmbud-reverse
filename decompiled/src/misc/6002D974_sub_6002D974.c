/* sub_6002D974
 * address: 0x6002D974   size: 972   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6002D974(int a1)
{
  _DWORD *v2; // r0
  int **v3; // r6
  _DWORD *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  _DWORD *v7; // r1
  unsigned int v8; // r0
  float v9; // r1
  float v10; // r2
  int v11; // r0
  int (__fastcall *v12)(int, int (***)()); // r2
  int v13; // r0
  StateActor *v14; // r5
  char v15; // r12
  float v16; // r1
  float v17; // r2
  int v18; // r0
  int (__fastcall *v19)(int, int (***)()); // r2
  int v20; // r0
  _DWORD *v21; // r1
  unsigned int v22; // r0
  int v23; // r0
  const char *v24; // r1
  _DWORD *v25; // r1
  unsigned int v26; // r0
  int v27; // r1
  unsigned int v28; // r0
  signed int result; // r0
  int v30; // r5
  int v31; // r1
  unsigned int v32; // r0
  int v33; // r1
  unsigned int v34; // r0
  int (**v35)(); // [sp+8h] [bp-50h] BYREF
  const char *v36; // [sp+Ch] [bp-4Ch]
  float v37; // [sp+14h] [bp-44h]
  float v38; // [sp+24h] [bp-34h]
  Vec3 v39[2]; // [sp+38h] [bp-20h] BYREF

  v3 = (int **)(a1 + 7096);
  v2 = *(_DWORD **)(a1 + 7096);
  v4 = (_DWORD *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += v6;
  if ( sub_60418548(*v4 + 4) )
  {
    FIELD_U8(a1, 7442) = 0;
  }
  else
  {
    v7 = (_DWORD *)(*v3)[3];
    v8 = (*v3)[17];
    if ( (*v3)[2] > v8 )
      v7 += v8;
    if ( sub_60418548(*v7 + 4) )
    {
      v9 = FIELD_F32(a1, 112);
      v10 = FIELD_F32(a1, 116);
      v39[0].x = FIELD_F32(a1, 108);
      v39[0].y = v9;
      v39[0].z = v10;
      v11 = **v3;
      v12 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v11 + 84);
      v35 = &sead__SafeStringBase__vtable;
      v36 = "skl_root";
      v13 = v12(v11, &v35);
      (*(void (__fastcall **)(int, int, int (***)()))(*(_DWORD *)**v3 + 108))(**v3, v13, &v35);
      v39[0].x = v37;
      v39[0].y = v38;
      v39[0].z = 4500.0;
      EffectWrapper_update((EffectWrapper *)(a1 + 7212), 1178, v39, 0, (Vec3 *)(a1 + 144));
      v14 = (StateActor *)ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 7324));
      if ( ((unsigned int)&dword_60C7FC04 & ~(1610799816 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60C7FC04) )
      {
        dword_60C7FC00 = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60C7FC04);
      }
      if ( v14 && (*(int (__fastcall **)(StateActor *, int *))FIELD_U32(v14, 0x0)._._.vtable)(v14, &dword_60C7FC00) == 1 )
        StageActor__delete(v14, 1);
    }
  }
  if ( sub_60235E50(a1 + 7228) == 1 )
  {
    v16 = FIELD_F32(a1, 112);
    v17 = FIELD_F32(a1, 116);
    v39[0].x = FIELD_F32(a1, 108);
    v39[0].y = v16;
    v39[0].z = v17;
    v18 = **v3;
    v19 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v18 + 84);
    v35 = &sead__SafeStringBase__vtable;
    v36 = "skl_root";
    v20 = v19(v18, &v35);
    (*(void (__fastcall **)(int, int, int (***)()))(*(_DWORD *)**v3 + 108))(**v3, v20, &v35);
    v39[0].x = v37;
    v39[0].y = v38;
    v39[0].z = 4500.0;
    sub_60237208(a1 + 7212, (int)v39, 0, a1 + 144);
  }
  v21 = (_DWORD *)(*v3)[3];
  v22 = (*v3)[17];
  if ( (*v3)[2] > v22 )
    v21 += v22;
  if ( sub_60418548(*v21 + 4) )
  {
    v23 = a1 + 6332;
    v24 = "SE_BOSS_KK_MAGIC_STOCK";
LABEL_24:
    sub_60813430(v23, v24, 0);
    goto LABEL_25;
  }
  v25 = (_DWORD *)(*v3)[3];
  v26 = (*v3)[17];
  if ( (*v3)[2] > v26 )
    v25 += v26;
  if ( sub_60418548(*v25 + 4) )
  {
    v23 = a1 + 6332;
    v24 = "SE_VOC_BKK_TRANSFORM";
    goto LABEL_24;
  }
LABEL_25:
  v27 = (*v3)[3];
  v28 = (*v3)[17];
  if ( (*v3)[2] > v28 )
    v27 += 4 * v28;
  result = *(unsigned __int8 *)(*(_DWORD *)v27 + 28);
  if ( (result & 0x20) != 0 )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C7FB00);
    v30 = FIELD_U32(a1, 7380);
    sub_60421938(*v3, FIELD_U32(a1, 7100), (int)&dword_60C7F720);
    v31 = (*v3)[3];
    v32 = (*v3)[17];
    if ( (*v3)[2] > v32 )
      v31 += 4 * v32;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v31 + 4), 1);
    v33 = (*v3)[3];
    v34 = (*v3)[17];
    if ( (*v3)[2] > v34 )
      v33 += 4 * v34;
    *(_DWORD *)(*(_DWORD *)v33 + 24) = v30;
    FIELD_U8(a1, 7426) = 0;
    FIELD_U32(a1, 144) = 1075838976;
    FIELD_U32(a1, 148) = 1075838976;
    FIELD_U32(a1, 152) = 1075838976;
    return 1075838976;
  }
  return result;
}
