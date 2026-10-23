/* Quicksand_onCreate
 * address: 0x605AA7A4   size: 904   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall Quicksand_onCreate(int a1)
{
  int v2; // r1
  signed int result; // r0
  float v4; // s0
  float v5; // s2
  void *v6; // r0
  char v7; // r1
  float v8; // s2
  int *v9; // r1
  ModelWrapper *v10; // r0
  ModelWrapper **v11; // r9
  int *v12; // r0
  int v13; // r3
  int v14; // r4
  int v15; // r5
  int v16; // r6
  int v17; // r7
  int v18; // r4
  int v19; // r5
  int v20; // r6
  int v21; // r7
  int v22; // r12
  void *model; // r5
  void (__fastcall *v24)(void *, int); // r4
  int v25; // r0
  int v26; // [sp+8h] [bp-50h]
  int v27; // [sp+Ch] [bp-4Ch]
  int v28; // [sp+10h] [bp-48h]
  int v29; // [sp+14h] [bp-44h]
  int v30; // [sp+18h] [bp-40h]
  int v31; // [sp+1Ch] [bp-3Ch]
  int v32; // [sp+20h] [bp-38h]
  int v33; // [sp+24h] [bp-34h]
  int v34; // [sp+28h] [bp-30h]
  int v35; // [sp+2Ch] [bp-2Ch]
  int v36; // [sp+30h] [bp-28h]
  int v37; // [sp+34h] [bp-24h]

  v2 = ((int (*)(void))TerrainActor_initLocation)();
  result = 2;
  if ( v2 != 1 )
    return result;
  ++FIELD_U32(EnemyCounterMaybe_instance, 32);
  if ( (FIELD_U8(a1, 21) & 8) == 0 )
  {
    FIELD_F32(a1, 6856) = FIELD_F32(a1, 6856) - 8.0;
    FIELD_U8(a1, 6894) = 1;
    sub_60002B50(a1 + 72256);
  }
  if ( FIELD_U32(a1, 6836) == 1 )
  {
    FIELD_F32(a1, 6860) = FIELD_F32(a1, 6860) + -8.0;
    v4 = FIELD_F32(a1, 6852);
    v5 = FIELD_F32(a1, 6856);
    FIELD_F32(a1, 492) = v4 * 0.5;
    FIELD_F32(a1, 496) = v5 * -0.5;
    FIELD_F32(a1, 500) = v4;
    FIELD_F32(a1, 504) = v5;
    FIELD_F32(a1, 508) = v4;
    FIELD_F32(a1, 512) = v5;
    ColliderBase_setType((ColliderBase *)(a1 + 0x17F8), 22);
    FIELD_U32(a1, 6360) = 2;
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 0x17F8));
    FIELD_U8(a1, 6893) = 1;
    if ( FIELD_U8(a1, 6894) )
    {
      v6 = *(void **)(a1 + 0x11A50);
      v7 = 0;
LABEL_9:
      TerrainEffects_init(a1 + 6900, v7, 1, 4, v6);
    }
  }
  else
  {
    FIELD_U32(a1, 6812) = 0;
    FIELD_U32(a1, 6808) = 0;
    FIELD_U32(a1, 6804) = 0;
    FIELD_U32(a1, 6800) = 0;
    FIELD_U32(a1, 6796) = 0;
    FIELD_U32(a1, 6792) = 0;
    v8 = FIELD_F32(a1, 6856);
    FIELD_U32(a1, 6816) = FIELD_U32(a1, 6852);
    FIELD_F32(a1, 6820) = -(float)(v8 + 64.0);
    FIELD_U32(a1, 6824) = 0;
    ShapedCollider_init((ShapedCollider *)(a1 + 0x17F8), (StageActor *)a1, (ShapedColliderInfo *)(a1 + 6792));
    ColliderBase_setType((ColliderBase *)(a1 + 0x17F8), 22);
    FIELD_U32(a1, 6360) = 2;
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 0x17F8));
    FIELD_U8(a1, 6893) = 1;
    if ( FIELD_U8(a1, 6894) )
    {
      v7 = 1;
      v6 = *(void **)(a1 + 72272);
      goto LABEL_9;
    }
  }
  if ( (FIELD_U8(a1, 27) & 0x20) != 0 )
    v9 = &dword_60CB002C;
  else
    v9 = &dword_60CAFEC8;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v9);
  obj_quicksand_ref(a1);
  ((void (__fastcall *)(int))loc_605A4EAC)(a1);
  v11 = (ModelWrapper **)(a1 + 72324);
  v10 = *(ModelWrapper **)(a1 + 72324);
  if ( v10 )
  {
    ModelWrapper_updateAnims(v10);
    v12 = (int *)(*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 6104) + 64))(**(_DWORD **)(a1 + 6104));
    v13 = *v12;
    v14 = v12[1];
    v15 = v12[2];
    v16 = v12[3];
    v17 = v12[4];
    v12 += 5;
    v26 = v13;
    v27 = v14;
    v28 = v15;
    v29 = v16;
    v30 = v17;
    v18 = v12[1];
    v19 = v12[2];
    v20 = v12[3];
    v21 = v12[4];
    v22 = v12[5];
    v31 = *v12;
    v32 = v18;
    v33 = v19;
    v34 = v20;
    v35 = v21;
    v36 = v22;
    v37 = 1139146752;
    (*(void (__fastcall **)(void *))(*(_DWORD *)(*v11)->model + 60))((*v11)->model);
    model = (*v11)->model;
    v24 = *(void (__fastcall **)(void *, int))(*(_DWORD *)model + 68);
    v25 = (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 6104) + 72))(**(_DWORD **)(a1 + 6104));
    v24(model, v25);
    ModelWrapper_updateModel(*v11);
  }
  if ( FIELD_U8(a1, 6894) )
    TerrainEffects_update(a1 + 6900);
  FIELD_U32(a1, 76) |= 2u;
  return 1;
}
