/* sub_602AE264
 * address: 0x602AE264   size: 1092   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_602AE264(int a1, int a2)
{
  int v4; // r4
  __n128 result; // q0
  char v6; // r12
  char v7; // r12
  float v8; // s0
  float v9; // s2
  float v10; // s4
  float **v11; // r4
  float *v12; // t1
  float v13; // s14
  float v14; // s24
  float v15; // s26
  float v16; // s28
  float v17; // s0
  float v18; // s2
  float *v19; // r4
  float v20; // s4
  float v21; // s2
  float v22; // s2
  float v23; // s4
  float v24; // s2
  float v25; // s2
  float v26; // s4
  float v27; // s2
  float *v28; // r5
  float *v29; // r0
  float v30; // s2
  float v31; // s4
  float v32; // s2
  float v33; // [sp+4h] [bp-6Ch] BYREF
  float v34; // [sp+8h] [bp-68h] BYREF
  float v35; // [sp+Ch] [bp-64h]
  float v36; // [sp+10h] [bp-60h] BYREF
  char v37; // [sp+14h] [bp-5Ch] BYREF

  v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 4));
  if ( ((unsigned int)dword_60C90B98 & ~(1613423272 << v6) & 1) == 0 && _cxa_guard_acquire(dword_60C90B98) )
  {
    dword_60C90B94 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C90B98);
  }
  if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C90B94) == 1 )
  {
    if ( ((unsigned int)&dword_60C7B410 & ~(1613423388 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B410) )
    {
      dword_60C7B40C = (int)&off_60BC00D4;
      _cxa_guard_release(&dword_60C7B410);
    }
    if ( a2 )
    {
      if ( (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B40C) == 1 )
      {
        v36 = 1.0;
        sub_605E3D3C(a2, &v37, &v36, FIELD_U32(a1, 4));
        v8 = FIELD_F32(a1, 12) * v36;
        v9 = FIELD_F32(a1, 16) * v36;
        v10 = FIELD_F32(a1, 20) * v36;
        FIELD_F32(v4, 144) = v8;
        FIELD_F32(v4, 148) = v9;
        FIELD_F32(v4, 152) = v10;
        v12 = *(float **)(v4 + 6800);
        v11 = (float **)(v4 + 6800);
        v12[4] = v8;
        v12[5] = v9;
        v12[6] = v10;
        v12[115] = v8;
        v12[116] = v9;
        v12[117] = v10;
        v12[226] = v8;
        v12[227] = v9;
        v12[228] = v10;
        v12[337] = v8;
        v12[338] = v9;
        v12[339] = v10;
        v13 = *((float *)v11 - 1672);
        v14 = FIELD_F32(a2, 108) + FIELD_F32(a2, 572);
        v15 = FIELD_F32(a2, 112) + FIELD_F32(a2, 576);
        v16 = FIELD_F32(a2, 116) + FIELD_F32(a2, 580);
        v17 = *((float *)v11 - 1671) - v16;
        v33 = *((float *)v11 - 1673) - v14;
        v34 = v13 - v15;
        v35 = v17;
        ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(&v33, 0.0, 0.7, 2.0, 0.5);
        ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(&v34, 0.0, 0.7, 2.0, 0.5);
        v18 = v15 + v34;
        *((float *)v11 - 1673) = v14 + v33;
        *((float *)v11 - 1672) = v18;
        v19 = *v11;
        v20 = v19[3];
        v21 = v19[2] - v15;
        v33 = v19[1] - v14;
        v34 = v21;
        v35 = v20 - v16;
        ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(&v33, 0.0, 0.7, 2.0, 0.5);
        ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(&v34, 0.0, 0.7, 2.0, 0.5);
        v22 = v15 + v34;
        v19[1] = v14 + v33;
        v19[2] = v22;
        v23 = v19[114];
        v24 = v19[113] - v15;
        v33 = v19[112] - v14;
        v34 = v24;
        v35 = v23 - v16;
        ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(&v33, 0.0, 0.7, 2.0, 0.5);
        ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(&v34, 0.0, 0.7, 2.0, 0.5);
        v25 = v15 + v34;
        v19[112] = v14 + v33;
        v19[113] = v25;
        v26 = v19[225];
        v27 = v19[224] - v15;
        v33 = v19[223] - v14;
        v34 = v27;
        v35 = v26 - v16;
        ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(&v33, 0.0, 0.7, 2.0, 0.5);
        ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(&v34, 0.0, 0.7, 2.0, 0.5);
        v28 = v19 + 334;
        v29 = v19 + 336;
        v30 = v15 + v34;
        v19[223] = v14 + v33;
        v19[224] = v30;
        v19 += 335;
        v31 = *v29;
        v32 = *v19 - v15;
        v33 = *v28 - v14;
        v34 = v32;
        v35 = v31 - v16;
        ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(&v33, 0.0, 0.7, 2.0, 0.5);
        ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(&v34, 0.0, 0.7, 2.0, 0.5);
        result.n128_f32[0] = v14 + v33;
        result.n128_f32[2] = v15 + v34;
        *v28 = v14 + v33;
        *v19 = result.n128_f32[2];
      }
    }
  }
  return result;
}
