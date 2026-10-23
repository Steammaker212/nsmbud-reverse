/* sub_60211194
 * address: 0x60211194   size: 872   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60211194(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  int v5; // r6
  int v6; // r0
  char v7; // r12
  unsigned int v8; // r6
  void *ResArchiveById; // r8
  void *Model; // r6
  ModelWrapper *v11; // r7
  ModelWrapper *v12; // r0
  float v13; // s0
  unsigned int v14; // r0
  unsigned int v15; // r3
  int v16; // r1
  int v17; // s2
  int v18; // s14
  float *v19; // r3
  float *v20; // r1
  float *v21; // r0
  float v22; // s14
  float v23; // s0
  float v24; // s2
  float v25; // s10
  float v26; // s5
  float v27; // s6
  float v28; // s1
  float v29; // s13
  float v30; // s9
  float v32[20]; // [sp+18h] [bp-50h] BYREF

  v2 = sub_601DFFE4(a1 + 284);
  if ( sub_60178694(v2, 4u) && (v3 = sub_60178694(v2, 5u), v4 = 0, v3)
    || (v5 = 2, sub_60178694(v2, 2u)) && (v6 = sub_60178694(v2, 3u), v4 = 1, v6) )
  {
    FIELD_U32(a1, 276) = v4;
    FIELD_U8(a1, 280) = sub_60211530(a1);
    if ( ((unsigned int)dword_60C8CFD0 & ~(1612780068 << v7) & 1) == 0 && _cxa_guard_acquire(dword_60C8CFD0) )
    {
      dword_60C8CFDC = (int)&sead__SafeStringBase__vtable;
      dword_60C8CFE0 = (int)"cobRainbowYoko";
      dword_60C8CFE4 = (int)&sead__SafeStringBase__vtable;
      dword_60C8CFE8 = (int)"cobRainbowTate";
      sub_60000288();
      _cxa_guard_release(dword_60C8CFD0);
    }
    v8 = FIELD_U32(a1, 276);
    ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), v8);
    Model = (void *)Resource_getModel(
                      ResArchiveById,
                      (sead__SafeString *)&dword_60C8CFD0[2 * v8 + 3],
                      6,
                      0,
                      0,
                      1,
                      0,
                      0,
                      1,
                      0);
    v11 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v12 = ModelWrapper_ctor(v11, Model, 0, 0, 1, 0, 0);
    ModelWrapper_setup(v12, (int)ResArchiveById, 0, 0);
    FIELD_U32(a1, 268) = v11;
    if ( FIELD_U8(a1, 280) )
      v13 = -1.0;
    else
      v13 = 0.0;
    sub_602118F0(a1, 0, v13, 0.0);
    v14 = FIELD_U32(a1, 176);
    v15 = FIELD_U32(a1, 180);
    v16 = (v15 >> 20) & 0xFF0;
    v17 = v15 & 0xFFFFFF;
    v18 = v14 & 0xFFFFFF;
    v19 = (float *)((char *)sinLutTable + ((FIELD_U32(a1, 184) >> 20) & 0xFF0));
    v20 = (float *)((char *)sinLutTable + v16);
    v21 = (float *)((char *)sinLutTable + ((v14 >> 20) & 0xFF0));
    v22 = (float)(unsigned int)v18;
    v23 = (float)(FIELD_U32(a1, 184) & 0xFFFFFF) * 0.000000059605;
    v24 = (float)(unsigned int)v17 * 0.000000059605;
    v25 = v19[2] + (float)(v23 * v19[3]);
    v26 = v20[2] + (float)(v24 * v20[3]);
    v27 = *v19 + (float)(v23 * v19[1]);
    v28 = *v20 + (float)(v24 * v20[1]);
    v29 = v21[2] + (float)((float)(v22 * 0.000000059605) * v21[3]);
    v30 = *v21 + (float)((float)(v22 * 0.000000059605) * v21[1]);
    v32[0] = v26 * v25;
    v32[4] = v26 * v27;
    v32[8] = -v28;
    v32[1] = (float)((float)(v30 * v28) * v25) - (float)(v29 * v27);
    v32[5] = (float)(v29 * v25) + (float)((float)(v30 * v28) * v27);
    v32[9] = v30 * v26;
    v32[2] = (float)(v28 * (float)(v29 * v25)) + (float)(v30 * v27);
    v32[6] = (float)(v28 * (float)(v29 * v27)) - (float)(v30 * v25);
    v32[10] = v29 * v26;
    v32[3] = FIELD_F32(a1, 80);
    v32[7] = FIELD_F32(a1, 84);
    v32[11] = FIELD_F32(a1, 88);
    (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 268) + 60))(**(_DWORD **)(a1 + 268), v32);
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 268) + 56))(**(_DWORD **)(a1 + 268));
    *(_DWORD *)(**(_DWORD **)(a1 + 268) + 36) = 2;
    sub_60427BC8(
      dword_60C9BBD4,
      **(_DWORD **)(a1 + 268),
      FIELD_U8(a1, 240),
      FIELD_U8(a1, 244));
    v5 = 1;
    FIELD_U32(a1, 212) = 1135542272;
  }
  return v5;
}
