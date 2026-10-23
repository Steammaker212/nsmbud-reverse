/* sub_6074DBCC
 * address: 0x6074DBCC   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074DBCC(int a1)
{
  void *v2; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r6
  int v7; // r3
  int v8; // r4
  float v9; // r5
  int v10; // r6
  int v11; // r7
  float v12; // r3
  int v13; // r4
  int v14; // r5
  int v15; // r6
  float v16; // r7
  float v17; // s4
  float v18; // s4
  int v19; // r4
  int v21; // [sp+18h] [bp-58h]
  int v22; // [sp+1Ch] [bp-54h]
  int v23; // [sp+20h] [bp-50h]
  float v24; // [sp+24h] [bp-4Ch]
  int v25; // [sp+28h] [bp-48h]
  int v26; // [sp+2Ch] [bp-44h]
  int v27; // [sp+30h] [bp-40h]
  float v28; // [sp+34h] [bp-3Ch]
  int v29; // [sp+38h] [bp-38h]
  int v30; // [sp+3Ch] [bp-34h]
  int v31; // [sp+40h] [bp-30h]
  float v32; // [sp+44h] [bp-2Ch]

  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1103626240;
  FIELD_U32(a1, 580) = 0;
  v2 = *(void **)(a1 + 644);
  Model2 = (void *)Resource_getModel2(v2, (sead__SafeString *)&dword_60CBEA30, 2, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 0, 1, 0, 0);
  j_ModelWrapper_setupModel(v5, v2, 0, 0);
  FIELD_U32(a1, 648) = v4;
  *((_DWORD *)FIELD_U32(v4, 0x0) + 8) = 0;
  *(_DWORD *)(**(_DWORD **)(a1 + 648) + 36) = 0;
  FIELD_U32(a1, 144) = 1078460416;
  FIELD_U32(a1, 148) = 1078460416;
  FIELD_U32(a1, 152) = 1078460416;
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 648) + 68))(**(_DWORD **)(a1 + 648), a1 + 144);
  v6 = sub_60232E78(dword_60C8D904);
  AnimationCtrl_setRepeat((ModelAnimation *)v6, 0);
  FIELD_U32(v6, 16) = 0;
  FIELD_U32(v6, 24) |= 2u;
  FIELD_U32(v6, 20) = 0;
  FIELD_U32(a1, 660) = sub_6023351C(dword_60C8D904);
  sub_60233544(dword_60C8D904);
  StateMgr__changeState((StateMgr *)(a1 + 736), (StateBase *)&dword_60CBE9AC);
  v7 = FIELD_U32(a1, 668);
  v8 = FIELD_U32(a1, 672);
  v9 = FIELD_F32(a1, 676);
  v10 = FIELD_U32(a1, 680);
  v11 = FIELD_U32(a1, 684);
  v21 = FIELD_U32(a1, 664);
  v22 = v7;
  v23 = v8;
  v24 = v9;
  v25 = v10;
  v26 = v11;
  v12 = FIELD_F32(a1, 692);
  v13 = FIELD_U32(a1, 696);
  v14 = FIELD_U32(a1, 700);
  v15 = FIELD_U32(a1, 704);
  v16 = FIELD_F32(a1, 708);
  v27 = FIELD_U32(a1, 688);
  v28 = v12;
  v29 = v13;
  v30 = v14;
  v31 = v15;
  v32 = v16;
  v17 = FIELD_F32(a1, 712);
  v24 = v24 + 0.0;
  v18 = v17 + v12;
  v28 = v18;
  v32 = v16 + 0.0;
  FIELD_F32(a1, 108) = v24;
  FIELD_F32(a1, 112) = v18;
  FIELD_F32(a1, 116) = v16 + 0.0;
  v19 = **(_DWORD **)(a1 + 648);
  (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 60))(v19);
  (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 52))(v19);
  (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 56))(v19);
  return 1;
}
