/* sub_6025261C
 * address: 0x6025261C   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6025261C(int a1)
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
  _DWORD *v20; // r6
  StateBase *CurrentState; // r0
  int v22; // r5
  int v23; // r0
  void (*v24)(void); // r2
  float v26[18]; // [sp+0h] [bp-48h] BYREF

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
  v26[0] = (float)(v15 * v14) + (float)(v18 * (float)(v17 * v16));
  v26[4] = v19 * v16;
  v26[8] = (float)(v18 * (float)(v15 * v16)) - (float)(v17 * v14);
  v26[1] = (float)(v18 * (float)(v17 * v14)) - (float)(v15 * v16);
  v26[5] = v19 * v14;
  v26[9] = (float)(v17 * v16) + (float)(v18 * (float)(v15 * v14));
  v26[2] = v19 * v17;
  v26[6] = -v18;
  v26[10] = v19 * v15;
  v26[3] = v2;
  v26[7] = v3;
  v26[11] = v4;
  v20 = (_DWORD *)(a1 + 6304);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6304) + 60))(**(_DWORD **)(a1 + 6304), v26);
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
    j_ModelWrapper_updateAnims(*v20);
  }
  return sub_60421880(*v20);
}
