/* skl_root_ref_35F680
 * address: 0x6035F680   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref_35F680(int a1)
{
  float v2; // r8
  float v3; // r12
  float v4; // lr
  unsigned int v5; // r3
  unsigned int v6; // r6
  unsigned int v7; // r5
  float *v8; // r2
  float *v9; // r0
  float *v10; // r1
  float v11; // s2
  float v12; // s0
  float v13; // s4
  float v14; // s12
  float v15; // s5
  float v16; // s8
  float v17; // s1
  float v18; // s9
  float v19; // s13
  ModelWrapper **v20; // r6
  StateBase *CurrentState; // r0
  int v22; // r5
  int v23; // r0
  void (*v24)(void); // r2
  void *model; // r0
  int (__fastcall *v26)(void *, _DWORD *); // r2
  int v27; // r0
  _DWORD v29[2]; // [sp+0h] [bp-50h] BYREF
  float v30[18]; // [sp+8h] [bp-48h] BYREF

  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_F32(a1, 116);
  v5 = FIELD_U32(a1, 156);
  v6 = FIELD_U32(a1, 160);
  v7 = FIELD_U32(a1, 164);
  v8 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v9 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v11 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
  v12 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v13 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v14 = v9[2] + (float)(v11 * v9[3]);
  v15 = v8[2] + (float)(v12 * v8[3]);
  v16 = *v9 + (float)(v11 * v9[1]);
  v17 = *v8 + (float)(v12 * v8[1]);
  v18 = *v10 + (float)(v13 * v10[1]);
  v19 = v10[2] + (float)(v13 * v10[3]);
  v30[0] = (float)(v15 * v14) + (float)(v18 * (float)(v17 * v16));
  v30[4] = v19 * v16;
  v30[8] = (float)(v18 * (float)(v15 * v16)) - (float)(v17 * v14);
  v30[1] = (float)(v18 * (float)(v17 * v14)) - (float)(v15 * v16);
  v30[5] = v19 * v14;
  v30[9] = (float)(v17 * v16) + (float)(v18 * (float)(v15 * v14));
  v30[2] = v19 * v17;
  v30[6] = -v18;
  v30[10] = v19 * v15;
  v30[3] = v2;
  v30[7] = v3;
  v30[11] = v4;
  v20 = (ModelWrapper **)(a1 + 6304);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6304) + 60))(**(_DWORD **)(a1 + 6304), v30);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v22 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v23 = (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))();
  v24 = *(void (**)(void))(***(_DWORD ***)(a1 + 6304) + 68);
  if ( v22 == v23 )
  {
    v24();
  }
  else
  {
    v24();
    ModelWrapper_updateAnims(*v20);
  }
  ModelWrapper_updateModel(*v20);
  model = (*v20)->model;
  v26 = *(int (__fastcall **)(void *, _DWORD *))(*(_DWORD *)model + 84);
  v29[0] = &sead__SafeStringBase__vtable;
  v29[1] = "skl_root";
  v27 = v26(model, v29);
  return (*(int (__fastcall **)(void *, int, int))(*(_DWORD *)(*v20)->model + 108))((*v20)->model, v27, a1 + 6316);
}
