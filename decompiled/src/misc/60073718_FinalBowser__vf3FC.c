/* FinalBowser__vf3FC
 * address: 0x60073718   size: 3208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026BF4
// 
// Overridden by: None
signed int __fastcall FinalBowser__vf3FC(_DWORD *a1)
{
  int v2; // r0
  float v3; // r1
  int v4; // r6
  int (__fastcall *v5)(int, ShapedColliderInfo *); // r2
  int (__fastcall *v6)(int, ShapedColliderInfo *); // r2
  int (__fastcall *v7)(int, ShapedColliderInfo *); // r2
  int (__fastcall *v8)(int, ShapedColliderInfo *); // r2
  int (__fastcall *v9)(int, ShapedColliderInfo *); // r2
  int (__fastcall *v10)(int, ShapedColliderInfo *); // r2
  int (__fastcall *v11)(int, ShapedColliderInfo *); // r2
  int (__fastcall *v12)(int, ShapedColliderInfo *); // r2
  int (__fastcall *v13)(int, ShapedColliderInfo *); // r2
  int (__fastcall *v14)(int, ShapedColliderInfo *); // r2
  int (__fastcall *v15)(int, ShapedColliderInfo *); // r2
  int (__fastcall *v16)(int, ShapedColliderInfo *); // r2
  int (__fastcall *v17)(int, ShapedColliderInfo *); // r2
  int (__fastcall *v18)(int, ShapedColliderInfo *); // r2
  int (__fastcall *v19)(int, ShapedColliderInfo *); // r2
  int (__fastcall *v20)(int, ShapedColliderInfo *); // r2
  int (__fastcall *v21)(int, ShapedColliderInfo *); // r2
  int (__fastcall *v22)(int, ShapedColliderInfo *); // r2
  int (__fastcall *v23)(int, ShapedColliderInfo *); // r2
  int (__fastcall *v24)(int, ShapedColliderInfo *); // r2
  int (__fastcall *v25)(int, ShapedColliderInfo *); // r2
  int (__fastcall *v26)(int, ShapedColliderInfo *); // r2
  int v27; // r1
  int v28; // r1
  int v29; // r2
  int v30; // r0
  ActiveColliderMgr *v31; // r6
  ActiveColliderMgr *v32; // r6
  ActiveColliderMgr *v33; // r6
  ActiveColliderMgr *v34; // r6
  ActiveColliderMgr *v35; // r6
  ActiveColliderMgr *v36; // r5
  ActiveColliderMgr *v37; // r5
  ActiveColliderMgr *v38; // r5
  ActiveColliderMgr *v39; // r5
  ActiveColliderMgr *v40; // r5
  ActiveColliderMgr *v41; // r5
  int v42; // r7
  ActiveCollider *v43; // r5
  float v44; // r0
  float v45; // r0
  float v46; // r0
  int v47; // r0
  ActiveCollider *v49; // [sp+4h] [bp-B4h]
  ActiveCollider *v50; // [sp+8h] [bp-B0h]
  ActiveCollider *v51; // [sp+Ch] [bp-ACh]
  ActiveCollider *v52; // [sp+10h] [bp-A8h]
  ActiveCollider *v53; // [sp+14h] [bp-A4h]
  ActiveCollider *v54; // [sp+18h] [bp-A0h]
  ActiveCollider *v55; // [sp+1Ch] [bp-9Ch]
  CircularColliderInfo v56; // [sp+20h] [bp-98h] BYREF
  CircularColliderInfo info; // [sp+40h] [bp-78h] BYREF
  ShapedColliderInfo v58; // [sp+64h] [bp-54h] BYREF
  int v59; // [sp+90h] [bp-28h]

  a1[36] = 1084227584;
  a1[37] = 1084227584;
  a1[38] = 1084227584;
  v2 = a1[27];
  a1[1843] = v2;
  v3 = *((float *)a1 + 28);
  *((float *)a1 + 1844) = v3;
  a1[1845] = a1[29];
  *((float *)a1 + 28) = v3 + 32.0;
  a1[29] = -985956352;
  a1[146] = v2;
  *((float *)a1 + 147) = v3 + 32.0;
  a1[148] = -985956352;
  a1[152] = v2;
  *((float *)a1 + 153) = v3 + 32.0;
  a1[154] = -985956352;
  a1[1786] = 1;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 1008))(a1);
  (*(void (__fastcall **)(_DWORD, _DWORD, ShapedColliderInfo *))(**(_DWORD **)a1[1778] + 108))(
    *(_DWORD *)a1[1778],
    a1[1888],
    &v58);
  a1[1846] = LODWORD(v58.field_C);
  a1[1847] = LODWORD(v58.bottomRight.y);
  a1[1848] = v59;
  (*(void (__fastcall **)(_DWORD, _DWORD, ShapedColliderInfo *))(**(_DWORD **)a1[1778] + 108))(
    *(_DWORD *)a1[1778],
    a1[1885],
    &v58);
  a1[1868] = LODWORD(v58.field_C);
  a1[1869] = LODWORD(v58.bottomRight.y);
  a1[1870] = v59;
  v4 = *(_DWORD *)a1[1778];
  v5 = *(int (__fastcall **)(int, ShapedColliderInfo *))(*(_DWORD *)v4 + 124);
  LODWORD(v58.distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(v58.distToCenter.y) = "mat_eyeB_L";
  a1[1883] = v5(v4, &v58);
  v6 = *(int (__fastcall **)(int, ShapedColliderInfo *))(*(_DWORD *)v4 + 124);
  LODWORD(v58.distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(v58.distToCenter.y) = "mat_eyeB_R";
  a1[1884] = v6(v4, &v58);
  v7 = *(int (__fastcall **)(int, ShapedColliderInfo *))(*(_DWORD *)v4 + 84);
  LODWORD(v58.distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(v58.distToCenter.y) = "Spine";
  a1[1885] = v7(v4, &v58);
  v8 = *(int (__fastcall **)(int, ShapedColliderInfo *))(*(_DWORD *)v4 + 84);
  LODWORD(v58.distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(v58.distToCenter.y) = "Armor";
  a1[1886] = v8(v4, &v58);
  v9 = *(int (__fastcall **)(int, ShapedColliderInfo *))(*(_DWORD *)v4 + 84);
  LODWORD(v58.distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(v58.distToCenter.y) = "KoopaArmor";
  a1[1887] = v9(v4, &v58);
  v10 = *(int (__fastcall **)(int, ShapedColliderInfo *))(*(_DWORD *)v4 + 84);
  LODWORD(v58.distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(v58.distToCenter.y) = "Face";
  a1[1888] = v10(v4, &v58);
  v11 = *(int (__fastcall **)(int, ShapedColliderInfo *))(*(_DWORD *)v4 + 84);
  LODWORD(v58.distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(v58.distToCenter.y) = "Nose";
  a1[1889] = v11(v4, &v58);
  v12 = *(int (__fastcall **)(int, ShapedColliderInfo *))(*(_DWORD *)v4 + 84);
  LODWORD(v58.distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(v58.distToCenter.y) = "Neck";
  a1[1890] = v12(v4, &v58);
  v13 = *(int (__fastcall **)(int, ShapedColliderInfo *))(*(_DWORD *)v4 + 84);
  LODWORD(v58.distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(v58.distToCenter.y) = "Tongue2";
  a1[1891] = v13(v4, &v58);
  v14 = *(int (__fastcall **)(int, ShapedColliderInfo *))(*(_DWORD *)v4 + 84);
  LODWORD(v58.distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(v58.distToCenter.y) = "ArmL2";
  a1[1892] = v14(v4, &v58);
  v15 = *(int (__fastcall **)(int, ShapedColliderInfo *))(*(_DWORD *)v4 + 84);
  LODWORD(v58.distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(v58.distToCenter.y) = "ArmR2";
  a1[1893] = v15(v4, &v58);
  v16 = *(int (__fastcall **)(int, ShapedColliderInfo *))(*(_DWORD *)v4 + 84);
  LODWORD(v58.distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(v58.distToCenter.y) = "WristL";
  a1[1894] = v16(v4, &v58);
  v17 = *(int (__fastcall **)(int, ShapedColliderInfo *))(*(_DWORD *)v4 + 84);
  LODWORD(v58.distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(v58.distToCenter.y) = "WristR";
  a1[1895] = v17(v4, &v58);
  v18 = *(int (__fastcall **)(int, ShapedColliderInfo *))(*(_DWORD *)v4 + 84);
  LODWORD(v58.distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(v58.distToCenter.y) = "FingerL3";
  a1[1896] = v18(v4, &v58);
  v19 = *(int (__fastcall **)(int, ShapedColliderInfo *))(*(_DWORD *)v4 + 84);
  LODWORD(v58.distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(v58.distToCenter.y) = "FingerR3";
  a1[1897] = v19(v4, &v58);
  v20 = *(int (__fastcall **)(int, ShapedColliderInfo *))(*(_DWORD *)v4 + 84);
  LODWORD(v58.distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(v58.distToCenter.y) = "LegL2";
  a1[1898] = v20(v4, &v58);
  v21 = *(int (__fastcall **)(int, ShapedColliderInfo *))(*(_DWORD *)v4 + 84);
  LODWORD(v58.distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(v58.distToCenter.y) = "LegR2";
  a1[1899] = v21(v4, &v58);
  v22 = *(int (__fastcall **)(int, ShapedColliderInfo *))(*(_DWORD *)v4 + 84);
  LODWORD(v58.distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(v58.distToCenter.y) = "FootL1";
  a1[1900] = v22(v4, &v58);
  v23 = *(int (__fastcall **)(int, ShapedColliderInfo *))(*(_DWORD *)v4 + 84);
  LODWORD(v58.distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(v58.distToCenter.y) = "FootR1";
  a1[1901] = v23(v4, &v58);
  v24 = *(int (__fastcall **)(int, ShapedColliderInfo *))(*(_DWORD *)v4 + 84);
  LODWORD(v58.distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(v58.distToCenter.y) = "FootL2";
  a1[1902] = v24(v4, &v58);
  v25 = *(int (__fastcall **)(int, ShapedColliderInfo *))(*(_DWORD *)v4 + 84);
  LODWORD(v58.distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(v58.distToCenter.y) = "FootR2";
  a1[1903] = v25(v4, &v58);
  v26 = *(int (__fastcall **)(int, ShapedColliderInfo *))(*(_DWORD *)v4 + 84);
  LODWORD(v58.distToCenter.x) = &sead__SafeStringBase__vtable;
  LODWORD(v58.distToCenter.y) = "ef_flame";
  a1[1904] = v26(v4, &v58);
  a1[20] = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)a1 + 9);
  sub_6007446C(a1);
  v27 = dword_60C81770;
  if ( a1[20] == 1 )
    v27 = -dword_60C81770;
  a1[40] = v27;
  CollisionMgr_init((CollisionMgr *)(a1 + 162), (StateActor *)a1, &stru_60AF53EC, &stru_60AF53F8, &stru_60AF5404);
  v28 = a1[796];
  v29 = a1[798] | 0x14000A40;
  v30 = a1[794] | 0x14000A40;
  a1[800] |= 0x14000A40u;
  a1[798] = v29;
  a1[794] = v30;
  a1[796] = v28 | 0x14000A40;
  a1[801] |= 0x10000u;
  ActiveCollider__init((ActiveCollider *)(a1 + 1905), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC6CD0, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 1981), (StageActor *)a1, &stru_60BC6CFC, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 2057), (StageActor *)a1, &stru_60BC6CFC, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 2133), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC6D28, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 2209), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC6D28, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 2285), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC6D54, 0);
  v51 = (ActiveCollider *)(a1 + 2361);
  ActiveCollider__init((ActiveCollider *)(a1 + 2361), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC6D54, 0);
  v53 = (ActiveCollider *)(a1 + 2437);
  ActiveCollider__init((ActiveCollider *)(a1 + 2437), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC6D80, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 2513), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC6D80, 0);
  v55 = (ActiveCollider *)(a1 + 2589);
  ActiveCollider__init((ActiveCollider *)(a1 + 2589), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC6D54, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 2665), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC6DAC, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 2741), (StageActor *)a1, &stru_60BC6CFC, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 2817), (StageActor *)a1, &stru_60BC6CFC, 0);
  v31 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 1905))
    && !ActiveColliderMgr_isInCreateList(v31, (ActiveCollider *)(a1 + 1905)) )
  {
    ActiveColliderMgr_addToCreateList(v31, (ActiveCollider *)(a1 + 1905));
  }
  v32 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 1981))
    && !ActiveColliderMgr_isInCreateList(v32, (ActiveCollider *)(a1 + 1981)) )
  {
    ActiveColliderMgr_addToCreateList(v32, (ActiveCollider *)(a1 + 1981));
  }
  v33 = ActiveColliderMgr_instance;
  v49 = (ActiveCollider *)(a1 + 2209);
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 2057))
    && !ActiveColliderMgr_isInCreateList(v33, (ActiveCollider *)(a1 + 2057)) )
  {
    ActiveColliderMgr_addToCreateList(v33, (ActiveCollider *)(a1 + 2057));
  }
  v34 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 2133))
    && !ActiveColliderMgr_isInCreateList(v34, (ActiveCollider *)(a1 + 2133)) )
  {
    ActiveColliderMgr_addToCreateList(v34, (ActiveCollider *)(a1 + 2133));
  }
  v35 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v49) && !ActiveColliderMgr_isInCreateList(v35, v49) )
    ActiveColliderMgr_addToCreateList(v35, v49);
  v36 = ActiveColliderMgr_instance;
  v50 = (ActiveCollider *)(a1 + 2285);
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 2285))
    && !ActiveColliderMgr_isInCreateList(v36, v50) )
  {
    ActiveColliderMgr_addToCreateList(v36, v50);
  }
  v37 = ActiveColliderMgr_instance;
  v54 = (ActiveCollider *)(a1 + 2513);
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v51) && !ActiveColliderMgr_isInCreateList(v37, v51) )
    ActiveColliderMgr_addToCreateList(v37, v51);
  v38 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v53) && !ActiveColliderMgr_isInCreateList(v38, v53) )
    ActiveColliderMgr_addToCreateList(v38, v53);
  v39 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v54) && !ActiveColliderMgr_isInCreateList(v39, v54) )
    ActiveColliderMgr_addToCreateList(v39, v54);
  v40 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v55) && !ActiveColliderMgr_isInCreateList(v40, v55) )
    ActiveColliderMgr_addToCreateList(v40, v55);
  v41 = ActiveColliderMgr_instance;
  v52 = (ActiveCollider *)(a1 + 2665);
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 2665))
    && !ActiveColliderMgr_isInCreateList(v41, v52) )
  {
    ActiveColliderMgr_addToCreateList(v41, v52);
  }
  v42 = 40;
  v43 = (ActiveCollider *)(a1 + 2893);
  do
  {
    ActiveCollider__init(v43, (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC6DD8, 0);
    LOBYTE(v43[1]._.vtable) = 0;
    --v42;
    v43 = (ActiveCollider *)((char *)v43 + 308);
  }
  while ( v42 );
  ((void (__fastcall *)(_DWORD *))loc_6006EF5C)(a1);
  ActiveCollider__init((ActiveCollider *)(a1 + 47), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC6E04, 0);
  v44 = *((float *)a1 + 2695);
  info.distToCenter.x = (float)a1[2694];
  info.distToCenter.y = v44;
  memset(&info.field_8, 0, 16);
  info.radius = (float)a1[2696];
  info.rotation = 0;
  CircularCollider_init((CircularCollider *)(a1 + 5974), (StageActor *)a1, &info);
  *((_BYTE *)a1 + 25352) = 2;
  a1[6014] = a1 + 6338;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 5974));
  v45 = *((float *)a1 + 1935);
  v56.distToCenter.x = (float)a1[1934];
  v56.distToCenter.y = v45;
  memset(&v56.field_8, 0, 16);
  v56.radius = (float)a1[1936];
  v56.rotation = 0;
  CircularCollider_init((CircularCollider *)(a1 + 6074), (StageActor *)a1, &v56);
  a1[6114] = a1 + 6338;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6074));
  v46 = *((float *)a1 + 2621);
  v58.distToCenter.x = (float)a1[2618];
  v58.distToCenter.y = v46;
  v58.field_8 = 0.0;
  v58.field_C = 32.0;
  v58.topLeft.x = -48.0;
  v58.topLeft.y = 64.0;
  v58.bottomRight.x = 48.0;
  v58.bottomRight.y = 0.0;
  v58.rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 6174), (StageActor *)a1, &v58);
  a1[6214] = a1 + 6338;
  a1[6252] = sub_60072754;
  a1[6253] = sub_60072C4C;
  a1[6254] = sub_6007275C;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6174));
  a1[1711] = 1125122048;
  a1[1712] = 1125122048;
  a1[1709] = 0;
  a1[1710] = 1125122048;
  a1[1668] = 2;
  (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C812AC);
  v47 = (*(int (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)a1[1780] + 132))(*(_DWORD *)a1[1780], 0);
  (*(void (__fastcall **)(int, _DWORD, _DWORD *))(*(_DWORD *)v47 + 20))(v47, 0, a1 + 1782);
  return 1;
}
