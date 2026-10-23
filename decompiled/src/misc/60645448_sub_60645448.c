/* sub_60645448
 * address: 0x60645448   size: 656   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60645448(int a1, int a2, float a3)
{
  float v4; // r0
  int v5; // r2
  int v6; // r1
  float v7; // s16
  unsigned int v8; // r0
  float v9; // s20
  void (__fastcall ***v10)(_DWORD, _DWORD, float *, int *, float *); // r0
  float v11; // s16
  float v12; // s18
  void (__fastcall ***v13)(_DWORD, _DWORD, float *, float *, int *); // r0
  void (__fastcall *v14)(_DWORD, _DWORD, float *, float *, int *); // r7
  void (__fastcall ***v15)(_DWORD); // r0
  void (__fastcall *v16)(_DWORD); // r7
  float v17; // s18
  void (__fastcall ***v18)(_DWORD, _DWORD, float *, float *, int *); // r0
  void (__fastcall *v19)(_DWORD, _DWORD, float *, float *, int *); // r5
  void (__fastcall ***v20)(_DWORD, _DWORD, float *, float *, int *); // r0
  void (__fastcall *v21)(_DWORD, _DWORD, float *, float *, int *); // r6
  void (__fastcall ***v22)(_DWORD); // r0
  void (__fastcall *v23)(_DWORD); // r7
  int v25; // [sp+4h] [bp-44h] BYREF
  float v26[2]; // [sp+8h] [bp-40h] BYREF
  float v27; // [sp+10h] [bp-38h] BYREF
  int v28; // [sp+14h] [bp-34h]

  v4 = *(float *)a2;
  FIELD_U32(a1, 136) = *(_DWORD *)a2;
  v5 = FIELD_U32(a2, 4);
  FIELD_U32(a1, 140) = v5;
  v6 = FIELD_U32(a2, 8);
  FIELD_U32(a1, 144) = v6;
  FIELD_F32(a1, 212) = a3;
  v7 = FIELD_F32(a1, 208);
  if ( v7 == 0.0 )
  {
    if ( FIELD_U32(a1, 224) == 2 )
    {
      v17 = FIELD_F32(a1, 216);
      v18 = (void (__fastcall ***)(_DWORD, _DWORD, float *, float *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 4) + 132))(
                                                                              **(_DWORD **)(a1 + 4),
                                                                              0);
      v27 = (float)(v7 * (float)(-4.0 / v17)) + 5.0;
      v28 = 1065353216;
      v19 = **v18;
      v26[0] = 0.0;
      v19(v18, 0, &v27, v26, &dword_60B3B944);
      v20 = (void (__fastcall ***)(_DWORD, _DWORD, float *, float *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 12) + 132))(
                                                                              **(_DWORD **)(a1 + 12),
                                                                              0);
      v27 = (float)(v7 * (float)(-4.0 / v17)) + 5.0;
      v28 = 1065353216;
      v21 = **v20;
      v26[0] = 0.0;
      v21(v20, 0, &v27, v26, &dword_60B3B944);
    }
  }
  else
  {
    FIELD_U32(a1, 152) = v5;
    FIELD_U32(a1, 156) = v6;
    FIELD_F32(a1, 148) = v4 + (float)(a3 * 0.5);
    v8 = FIELD_U32(a1, 224);
    if ( v8 > 8 )
      goto LABEL_8;
    if ( ((1 << v8) & 0x183) == 0 )
    {
      if ( v8 == 2 )
      {
        v9 = FIELD_F32(a1, 216);
        v27 = 0.5;
        v28 = 0;
        v10 = (void (__fastcall ***)(_DWORD, _DWORD, float *, int *, float *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 8) + 132))(
                                                                                **(_DWORD **)(a1 + 8),
                                                                                0);
        v25 = 0;
        v26[0] = (float)(v7 + (float)(v9 - v7)) * 0.5;
        v26[1] = 1.0;
        (**v10)(v10, 0, v26, &v25, &v27);
        v11 = FIELD_F32(a1, 208);
        v12 = FIELD_F32(a1, 216);
        v13 = (void (__fastcall ***)(_DWORD, _DWORD, float *, float *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 4) + 132))(
                                                                                **(_DWORD **)(a1 + 4),
                                                                                0);
        v27 = (float)((float)(-4.0 / v12) * v11) + 5.0;
        v28 = 1065353216;
        v14 = **v13;
        v26[0] = 0.0;
        v14(v13, 0, &v27, v26, &dword_60B3B944);
        v15 = (void (__fastcall ***)(_DWORD))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 12) + 132))(
                                               **(_DWORD **)(a1 + 12),
                                               0);
        v27 = (float)((float)(-4.0 / v12) * v11) + 5.0;
        v28 = 1065353216;
        v16 = **v15;
        v26[0] = 0.0;
        v16(v15);
        return ((int (__fastcall *)(int))loc_60644DD8)(a1);
      }
LABEL_8:
      v22 = (void (__fastcall ***)(_DWORD))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 8) + 132))(
                                             **(_DWORD **)(a1 + 8),
                                             0);
      v27 = FIELD_F32(a1, 208);
      v28 = 1065353216;
      v23 = **v22;
      v26[0] = 0.0;
      v23(v22);
    }
  }
  return ((int (__fastcall *)(int))loc_60644DD8)(a1);
}
