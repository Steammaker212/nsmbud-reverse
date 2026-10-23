/* sub_601A7C90
 * address: 0x601A7C90   size: 656   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A7C90(int a1)
{
  int result; // r0
  unsigned int v3; // r0
  unsigned int v4; // r1
  unsigned int v5; // r2
  int v6; // s2
  int v7; // s0
  float *v8; // r2
  float *v9; // r7
  float *v10; // r1
  float v11; // s14
  float v12; // s0
  float v13; // s2
  float v14; // s10
  float v15; // s5
  float v16; // s6
  float v17; // s1
  float v18; // s13
  float v19; // s9
  StateBase *CurrentState; // r0
  int v21; // r6
  int v22; // r0
  int v23; // r0
  int (__fastcall *v24)(int, float32x2_t *); // r2
  int v25; // r6
  float32x2_t target[6]; // [sp+4h] [bp-7Ch] BYREF
  int speed; // [sp+34h] [bp-4Ch] BYREF
  float v28[18]; // [sp+38h] [bp-48h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 268));
  result = FIELD_U8(a1, 216);
  if ( (result & 8) == 0 )
  {
    (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 268) + 68))(**(_DWORD **)(a1 + 268), a1 + 128);
    v3 = FIELD_U32(a1, 176);
    v4 = FIELD_U32(a1, 180);
    v5 = FIELD_U32(a1, 184);
    v6 = v4 & 0xFFFFFF;
    v7 = v5 & 0xFFFFFF;
    v8 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
    v9 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
    v10 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
    v11 = (float)(v3 & 0xFFFFFF);
    v12 = (float)(unsigned int)v7 * 0.000000059605;
    v13 = (float)(unsigned int)v6 * 0.000000059605;
    v14 = v8[2] + (float)(v12 * v8[3]);
    v15 = v9[2] + (float)(v13 * v9[3]);
    v16 = *v8 + (float)(v12 * v8[1]);
    v17 = *v9 + (float)(v13 * v9[1]);
    v18 = v10[2] + (float)((float)(v11 * 0.000000059605) * v10[3]);
    v19 = *v10 + (float)((float)(v11 * 0.000000059605) * v10[1]);
    v28[0] = v15 * v14;
    v28[4] = v15 * v16;
    v28[8] = -v17;
    v28[1] = (float)((float)(v19 * v17) * v14) - (float)(v18 * v16);
    v28[5] = (float)(v18 * v14) + (float)((float)(v19 * v17) * v16);
    v28[9] = v19 * v15;
    v28[2] = (float)(v17 * (float)(v18 * v14)) + (float)(v19 * v16);
    v28[6] = (float)(v17 * (float)(v18 * v16)) - (float)(v19 * v14);
    v28[10] = v18 * v15;
    v28[3] = FIELD_F32(a1, 80);
    v28[7] = FIELD_F32(a1, 84);
    v28[11] = FIELD_F32(a1, 88);
    (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 268) + 60))(**(_DWORD **)(a1 + 268), v28);
    sub_604218E0(*(_DWORD **)(a1 + 268));
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 268) + 52))(**(_DWORD **)(a1 + 268));
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 296));
    v21 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v21 == (*(int (**)(void))(dword_60C8A2B8 + 8))() )
    {
      v22 = sub_608332B0(a1 + 80, a1 + 452);
      FIELD_U32(a1, 464) = v22;
      target[0].n64_u32[0] = v22;
      speed = 0x2000000;
      moveValueTo((int *)(a1 + 468), (int *)target, &speed);
      v23 = **(_DWORD **)(a1 + 268);
      v24 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v23 + 84);
      target[0].n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
      target[0].n64_u32[1] = (unsigned __int32)"Head";
      v25 = v24(v23, target);
      sub_604302C8(**(_DWORD **)(a1 + 268), v25, target);
      Mtx34_rotateY(target, (unsigned int *)(a1 + 468));
      (*(void (__fastcall **)(_DWORD, int, float32x2_t *, int *))(***(_DWORD ***)(a1 + 268) + 96))(
        **(_DWORD **)(a1 + 268),
        v25,
        target,
        &dword_60B3B98C);
    }
    return (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 268) + 56))(**(_DWORD **)(a1 + 268));
  }
  return result;
}
