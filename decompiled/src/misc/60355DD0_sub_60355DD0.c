/* sub_60355DD0
 * address: 0x60355DD0   size: 1800   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60355DD0(int a1)
{
  int v2; // r1
  int v3; // r0
  _BYTE *v4; // r9
  _BYTE *v5; // r0
  bool v6; // zf
  float v7; // r2
  float v8; // r1
  TileCheck *v9; // r0
  float v10; // s0
  float v11; // s0
  int v12; // s2
  int v13; // r1
  _BYTE *v14; // r0
  int v15; // r0
  float v16; // r0
  float v17; // s0
  TileCheck *v18; // r0
  int v19; // r0
  int v20; // r0
  int (__fastcall *v21)(int, TileCheck *); // r2
  unsigned __int8 v22; // r0
  ActiveColliderMgr *v23; // r7
  ActiveColliderMgr *v24; // r6
  int v25; // r0
  float v27; // r0
  float v28; // s0
  TileCheck *v29; // r0
  TileCheck_Result v30; // [sp+8h] [bp-C0h] BYREF
  Vec2 positionOffset; // [sp+30h] [bp-98h] BYREF
  Vec2 a3; // [sp+38h] [bp-90h] BYREF
  TileCheck v33; // [sp+40h] [bp-88h] BYREF
  TileCheck_Param v34[5]; // [sp+8Ch] [bp-3Ch] BYREF

  FIELD_U8(a1, 6056) = 1;
  FIELD_U32(a1, 116) = 1153138688;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1098907648;
  FIELD_U32(a1, 500) = 1133510656;
  FIELD_U32(a1, 504) = 1115684864;
  FIELD_U32(a1, 508) = 1098907648;
  FIELD_U32(a1, 512) = 1098907648;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BEEEB4, a1 + 6408);
  ActiveCollider__init((ActiveCollider *)(a1 + 6464), (StageActor *)a1, &stru_60AFFE5C, a1 + 6408);
  v2 = FIELD_U32(a1, 20);
  v3 = v2 & 0xF;
  if ( (v2 & 0xF) != 0 )
  {
    if ( v3 != 1 )
      v3 = 0;
  }
  else
  {
    v3 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
    v2 = FIELD_U32(a1, 20);
  }
  FIELD_U32(a1, 80) = v3;
  FIELD_U32(a1, 160) = dword_60AF1F20[v3];
  FIELD_U8(a1, 6432) = BYTE1(v2) & 1;
  v4 = (_BYTE *)(a1 + 6432);
  v5 = *(_BYTE **)(a1 + 632);
  if ( v5 )
  {
    v6 = (*v5 & 4) == 0;
    *v5 &= 4u;
    if ( !v6 )
      *v4 = 0;
  }
  if ( FIELD_U8(dword_60C9A1F0, 6515) )
    *v4 = 0;
  v30.field_C = 0;
  v30.field_10 = 0;
  if ( (FIELD_U32(a1, 20) & 0xF) == 3 )
  {
    musasabi_ref(a1, 2);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95038);
    goto LABEL_15;
  }
  v7 = FIELD_F32(a1, 112);
  v8 = FIELD_F32(a1, 108);
  *(_WORD *)&v34[0].field_0 = 0;
  a3.x = v8;
  a3.y = v7;
  positionOffset.x = v8;
  positionOffset.y = v7 + -1.0;
  *(_WORD *)&v34[0].field_2 = FIELD_U16(a1, 86);
  v34[0].field_4 = 0;
  v34[0].field_8 = 0;
  v9 = TileCheck_ctor(&v33, v34);
  if ( TileCheck_check(v9, &v30, &a3, &positionOffset, 15) == 1 )
  {
    FIELD_F32(a1, 112) = v30.field_8;
    musasabi_ref(a1, 0);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95138);
    goto LABEL_15;
  }
  v16 = FIELD_F32(a1, 108);
  v17 = FIELD_F32(a1, 112);
  *(_WORD *)&v34[0].field_0 = 0;
  a3.x = v16;
  a3.y = v17 + 20.0;
  positionOffset.x = v16 + 32.0;
  positionOffset.y = v17 + 20.0;
  *(_WORD *)&v34[0].field_2 = FIELD_U16(a1, 86);
  v34[0].field_4 = 0;
  v34[0].field_8 = 0;
  v18 = TileCheck_ctor(&v33, v34);
  if ( TileCheck_check(v18, &v30, &a3, &positionOffset, 15) == 1 )
  {
    FIELD_U32(a1, 80) = 0;
    FIELD_F32(a1, 108) = v30.field_4 + -1.0;
    musasabi_ref(a1, 3);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95058);
    v19 = (unsigned __int8)*v4;
LABEL_39:
    FIELD_U32(a1, 160) = dword_60AF26E4[2 * v19 + FIELD_U32(a1, 80)];
    goto LABEL_15;
  }
  v27 = FIELD_F32(a1, 108);
  v28 = FIELD_F32(a1, 112);
  *(_WORD *)&v34[0].field_0 = 0;
  a3.x = v27;
  a3.y = v28 + 20.0;
  positionOffset.x = v27 + -32.0;
  positionOffset.y = v28 + 20.0;
  *(_WORD *)&v34[0].field_2 = FIELD_U16(a1, 86);
  v34[0].field_4 = 0;
  v34[0].field_8 = 0;
  v29 = TileCheck_ctor(&v33, v34);
  if ( TileCheck_check(v29, &v30, &a3, &positionOffset, 15) == 1 )
  {
    FIELD_U32(a1, 80) = 1;
    FIELD_F32(a1, 108) = v30.field_4 + 1.0;
    musasabi_ref(a1, 3);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95058);
    v19 = (unsigned __int8)*v4;
    goto LABEL_39;
  }
  musasabi_ref(a1, 2);
  if ( (FIELD_U8(a1, 20) & 0x10) != 0 )
  {
    FIELD_U32(a1, 156) = 715827882;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95098);
  }
  else
  {
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C95078);
  }
LABEL_15:
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFFE88, &stru_60AFFE94, &stru_60AFFEA0);
  v11 = CollisionMgr_process((_BYTE *)(a1 + 648), v10);
  FIELD_F64(a1, 6788) = ((double (__fastcall *)(int, float))**(_DWORD **)(a1 + 6784))(a1 + 6784, v11);
  FIELD_U32(a1, 6796) = v12;
  skl_root_ref_356684(a1);
  sub_60003C60(a1, (int)&stru_60AFFE88, 250.0);
  if ( *v4 != 1 )
    goto LABEL_27;
  v13 = FIELD_U32(a1, 6300);
  if ( !v13 )
  {
    FIELD_U8(a1, 6460) = 1;
    v15 = 0;
    FIELD_U32(a1, 6448) = 0;
    FIELD_U32(a1, 6452) = -1077936128;
LABEL_23:
    FIELD_U32(a1, 6456) = -1077936128;
    goto LABEL_24;
  }
  v14 = (_BYTE *)(a1 + 6460);
  if ( v13 != 2 )
  {
    *v14 = 1;
    v15 = 0;
    FIELD_U32(a1, 6448) = 0;
    FIELD_U32(a1, 6452) = 1065353216;
    goto LABEL_23;
  }
  *v14 = 0;
  FIELD_U32(a1, 6448) = 0;
  FIELD_U32(a1, 6452) = 1093664768;
  FIELD_U32(a1, 6456) = 1088421888;
  v15 = dword_60C95250[0];
LABEL_24:
  FIELD_U32(a1, 6436) = v15;
  FIELD_U32(a1, 6440) = 0;
  FIELD_U32(a1, 6444) = 0;
  v20 = **(_DWORD **)(a1 + 6332);
  v21 = *(int (__fastcall **)(int, TileCheck *))(*(_DWORD *)v20 + 84);
  *(_DWORD *)&v33.field_0 = &sead__SafeStringBase__vtable;
  v33.field_4 = (int)"loc_donguri";
  v22 = v21(v20, &v33);
  (*(void (__fastcall **)(_DWORD, _DWORD, TileCheck *))(***(_DWORD ***)(a1 + 6332) + 108))(
    **(_DWORD **)(a1 + 6332),
    v22,
    &v33);
  *(_DWORD *)&v34[0].field_0 = v33.field_C;
  v34[0].field_4 = v33.field_1C;
  v34[0].field_8 = v33.field_2C;
  if ( !sub_60466A00(dword_60C9D3E4, v34, FIELD_U32(a1, 8)) )
  {
    *v4 = 0;
    if ( FIELD_U32(a1, 6300) == 3 )
    {
      FIELD_U32(a1, 160) = dword_60AF26E4[FIELD_U32(a1, 80)];
      sub_60355C1C(a1, 3);
      skl_root_ref_356684(a1);
    }
  }
LABEL_27:
  if ( (FIELD_U32(a1, 20) & 0xF) != 3 )
  {
    v23 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v23, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v23, (ActiveCollider *)(a1 + 188));
    }
    v24 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6464))
      && !ActiveColliderMgr_isInCreateList(v24, (ActiveCollider *)(a1 + 6464)) )
    {
      ActiveColliderMgr_addToCreateList(v24, (ActiveCollider *)(a1 + 6464));
    }
  }
  FIELD_U32(a1, 620) = a1 + 6336;
  FIELD_U32(a1, 6352) = 3;
  FIELD_U32(a1, 624) = a1 + 6372;
  FIELD_U32(a1, 6400) = 1;
  FIELD_U32(a1, 6244) = 1;
  v25 = (unsigned __int8)*v4;
  if ( v25 != 1 )
    v25 = 0;
  FIELD_U32(a1, 6252) = v25;
  return 1;
}
