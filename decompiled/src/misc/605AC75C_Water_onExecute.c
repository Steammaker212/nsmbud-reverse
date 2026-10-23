/* Water_onExecute
 * address: 0x605AC75C   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall Water_onExecute(int a1)
{
  signed int v2; // r8
  int v3; // r0
  float v4; // s0
  float v5; // s2
  int v6; // r2
  int v7; // r3
  _DWORD **v8; // r6
  ModelWrapper *v9; // r0
  ModelWrapper **v10; // r10
  int *v11; // r0
  int v12; // r3
  int v13; // r4
  int v14; // r5
  int v15; // r6
  int v16; // r7
  int v17; // r4
  int v18; // r5
  int v19; // r6
  int v20; // r7
  int v21; // r12
  void *model; // r6
  void (__fastcall *v23)(void *, int); // r4
  int v24; // r0
  float v26[3]; // [sp+4h] [bp-64h] BYREF
  int v27; // [sp+10h] [bp-58h] BYREF
  int v28; // [sp+14h] [bp-54h]
  int v29; // [sp+18h] [bp-50h]
  int v30; // [sp+1Ch] [bp-4Ch]
  int v31; // [sp+20h] [bp-48h]
  int v32; // [sp+24h] [bp-44h]
  int v33; // [sp+28h] [bp-40h]
  int v34; // [sp+2Ch] [bp-3Ch]
  int v35; // [sp+30h] [bp-38h]
  int v36; // [sp+34h] [bp-34h]
  int v37; // [sp+38h] [bp-30h]
  int v38; // [sp+3Ch] [bp-2Ch]

  v2 = TerrainActor_onExecute(a1);
  if ( !FIELD_U8(a1, 6894) && !FIELD_U32(a1, 6836) )
  {
    v3 = FIELD_U32(a1, 6132);
    v4 = FIELD_F32(dword_60CC6484, 104);
    v5 = FIELD_F32(dword_60CC6484, 108);
    v6 = FIELD_U32(dword_60CC6484, 116);
    v7 = FIELD_U32(dword_60CC6484, 128);
    v27 = 1065353216;
    v28 = 0;
    v29 = 0;
    v31 = 0;
    v32 = 1065353216;
    v33 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 1065353216;
    v30 = v6;
    v34 = v7;
    v38 = v3;
    v26[0] = v4 * 0.0625;
    v26[1] = v5 * 0.0625;
    v26[2] = 1.0;
    v8 = (_DWORD **)(a1 + 6104);
    (*(void (__fastcall **)(_DWORD, int *))(***(_DWORD ***)(a1 + 6104) + 60))(**(_DWORD **)(a1 + 6104), &v27);
    (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)**v8 + 68))(**v8, v26);
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v8 + 56))(**v8);
  }
  if ( !FIELD_U32(dword_60C995D0, 32) )
  {
    v10 = (ModelWrapper **)(a1 + 72328);
    v9 = *(ModelWrapper **)(a1 + 72328);
    if ( v9 )
    {
      ModelWrapper_updateAnims(v9);
      v11 = (int *)(*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 6104) + 64))(**(_DWORD **)(a1 + 6104));
      v12 = *v11;
      v13 = v11[1];
      v14 = v11[2];
      v15 = v11[3];
      v16 = v11[4];
      v11 += 5;
      v27 = v12;
      v28 = v13;
      v29 = v14;
      v30 = v15;
      v31 = v16;
      v17 = v11[1];
      v18 = v11[2];
      v19 = v11[3];
      v20 = v11[4];
      v21 = v11[5];
      v32 = *v11;
      v33 = v17;
      v34 = v18;
      v35 = v19;
      v36 = v20;
      v37 = v21;
      v38 = -972251136;
      (*(void (__fastcall **)(void *))(*(_DWORD *)(*v10)->model + 60))((*v10)->model);
      model = (*v10)->model;
      v23 = *(void (__fastcall **)(void *, int))(*(_DWORD *)model + 68);
      v24 = (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 6104) + 72))(**(_DWORD **)(a1 + 6104));
      v23(model, v24);
      ModelWrapper_updateModel(*v10);
    }
    Water_onExecute_helper(a1);
  }
  return v2;
}
