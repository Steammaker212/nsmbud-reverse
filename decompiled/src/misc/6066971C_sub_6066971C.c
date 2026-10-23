/* sub_6066971C
 * address: 0x6066971C   size: 860   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6066971C(int a1)
{
  unsigned int v2; // r2
  float v3; // r0
  float v4; // r1
  int v5; // r3
  int v6; // s0
  int v7; // r2
  float v8; // s0
  float v9; // s6
  float v10; // s2
  float v11; // s10
  float v12; // s14
  int result; // r0
  int v14; // r11
  int v15; // r5
  float v16; // s20
  unsigned int v17; // r10
  int v18; // r9
  float *v19; // r1
  float v20; // s26
  float v21; // s30
  float v22; // s28
  float v23; // s17
  float v24; // s22
  float v25; // s24
  void (__fastcall ***v26)(_DWORD, _DWORD, float *, int *, int *); // r0
  float v27; // r1
  void (__fastcall *v28)(_DWORD, _DWORD, float *, int *, int *); // r6
  float *v29; // r1
  float v30; // s0
  float v31; // s14
  float v32; // s10
  float v33; // s2
  float v34; // s6
  float v35; // s0
  int *v36; // [sp+18h] [bp-A0h]
  float v37; // [sp+1Ch] [bp-9Ch] BYREF
  float v38; // [sp+20h] [bp-98h]
  float v39; // [sp+24h] [bp-94h]
  float v40; // [sp+28h] [bp-90h]
  float v41; // [sp+2Ch] [bp-8Ch]
  float v42; // [sp+30h] [bp-88h]
  float v43; // [sp+34h] [bp-84h]
  float v44; // [sp+38h] [bp-80h]
  float v45; // [sp+3Ch] [bp-7Ch]
  float v46; // [sp+40h] [bp-78h]
  float v47; // [sp+44h] [bp-74h]
  int v48; // [sp+48h] [bp-70h]
  int v49; // [sp+4Ch] [bp-6Ch] BYREF

  v2 = FIELD_U32(a1, 164);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_F32(a1, 108);
  v5 = (v2 >> 20) & 0xFF0;
  v6 = v2 & 0xFFFFFF;
  v7 = FIELD_U32(a1, 6216);
  v8 = (float)(unsigned int)v6 * 0.000000059605;
  v9 = (float)(-0.00030118 * 0.0) + 1.0;
  v10 = (float)(0.024541 * 0.0) + 0.0;
  v11 = *(float *)((char *)sinLutTable + v5) + (float)(v8 * *(float *)((char *)&sinLutTable[1] + v5));
  v12 = *(float *)((char *)&sinLutTable[2] + v5) + (float)(v8 * *(float *)((char *)&sinLutTable[3] + v5));
  v37 = v9 * v12;
  v41 = v9 * v11;
  v45 = -v10;
  v38 = (float)((float)(v10 * v10) * v12) - (float)(v9 * v11);
  v42 = (float)(v9 * v12) + (float)((float)(v10 * v10) * v11);
  v46 = v10 * v9;
  v39 = (float)(v10 * (float)(v9 * v12)) + (float)(v10 * v11);
  v43 = (float)(v10 * (float)(v9 * v11)) - (float)(v10 * v12);
  v47 = v9 * v9;
  v40 = v4;
  v44 = v3;
  v48 = v7;
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6104) + 60))(**(_DWORD **)(a1 + 6104), &v37);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 6104) + 68))(**(_DWORD **)(a1 + 6104), a1 + 144);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6104));
  result = FIELD_U32(a1, 6224);
  v36 = (int *)(a1 + 6224);
  if ( result >= 1 )
  {
    v14 = 0;
    v15 = a1 + 6108;
    v16 = (float)(FIELD_F32(a1, 6204) * 0.5) + 4.0;
    v17 = FIELD_U32(a1, 164);
    do
    {
      v18 = FIELD_U32(a1, 6216);
      v19 = (float *)((char *)sinLutTable + ((v17 >> 20) & 0xFF0));
      v20 = *v19;
      v21 = v19[1];
      v22 = v19[2];
      v23 = v19[3];
      v24 = FIELD_F32(a1, 108);
      v25 = FIELD_F32(a1, 112);
      v26 = (void (__fastcall ***)(_DWORD, _DWORD, float *, int *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(v15 + 4 * v14) + 132))(
                                                                            **(_DWORD **)(v15 + 4 * v14),
                                                                            0);
      v27 = FIELD_F32(a1, 6148);
      v37 = 1.0;
      v38 = v27;
      v28 = **v26;
      v49 = 0;
      v28(v26, 0, &v37, &v49, &dword_60B3B944);
      v29 = (float *)((char *)sinLutTable + (((v17 + 0x40000000) >> 20) & 0xFF0));
      v30 = (float)((v17 + 0x40000000) & 0xFFFFFF) * 0.000000059605;
      v31 = (float)(-0.00030118 * 0.0) + 1.0;
      v32 = (float)(0.024541 * 0.0) + 0.0;
      v33 = *v29 + (float)(v30 * v29[1]);
      v34 = v29[2] + (float)(v30 * v29[3]);
      v37 = v31 * v34;
      v41 = v31 * v33;
      v45 = -v32;
      v38 = (float)((float)(v32 * v32) * v34) - (float)(v31 * v33);
      v42 = (float)(v31 * v34) + (float)((float)(v32 * v32) * v33);
      v46 = v32 * v31;
      v39 = (float)(v32 * (float)(v31 * v34)) + (float)(v32 * v33);
      v43 = (float)(v32 * (float)(v31 * v33)) - (float)(v32 * v34);
      v47 = v31 * v31;
      v35 = (float)(v17 & 0xFFFFFF) * 0.000000059605;
      v40 = v24 + (float)(v16 * (float)(v22 + (float)(v35 * v23)));
      v44 = v25 + (float)(v16 * (float)(v20 + (float)(v35 * v21)));
      v48 = v18;
      (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(v15 + 4 * v14) + 60))(
        **(_DWORD **)(v15 + 4 * v14),
        &v37);
      (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(v15 + 4 * v14) + 68))(
        **(_DWORD **)(v15 + 4 * v14),
        a1 + 6144);
      ModelWrapper_updateModel(*(ModelWrapper **)(v15 + 4 * v14++));
      v17 += FIELD_U32(a1, 6236);
      result = *v36;
    }
    while ( v14 < *v36 );
  }
  return result;
}
