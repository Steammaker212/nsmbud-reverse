/* sub_60736510
 * address: 0x60736510   size: 1248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60736510(int a1)
{
  char v1; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r8
  char v4; // r12
  float v5; // s16
  int v6; // r0
  float v7; // s18
  float v8; // r5
  void (__fastcall ***v9)(_DWORD, int *); // r6
  int (__fastcall ***v10)(_DWORD, int *); // r6
  float *v11; // r0
  float v12; // s22
  float v13; // s20
  int v14; // r6
  int v15; // r4
  unsigned int v16; // r0
  int v17; // r2
  int v18; // r3
  int (__fastcall ***v19)(_DWORD, int *); // r6
  float v20; // s26
  float v21; // s16
  float *v22; // r0
  float v23; // s0
  int v24; // r0
  int v25; // r1
  unsigned int v26; // r5
  int v27; // r3
  int v28; // r3
  int v29; // r3
  float v30; // s18
  float v31; // s20
  float v32; // s18
  int v33; // r0
  int *v34; // r7
  float v35; // s20
  int v36; // r4
  float **v37; // r6
  float *v38; // r1
  bool v39; // cc
  float *v40; // r3
  int v42; // [sp+0h] [bp-88h] BYREF
  int v43; // [sp+4h] [bp-84h]
  int v44; // [sp+8h] [bp-80h]
  float v45; // [sp+Ch] [bp-7Ch] BYREF
  int v46; // [sp+10h] [bp-78h]
  int v47; // [sp+14h] [bp-74h]
  float v48; // [sp+18h] [bp-70h] BYREF
  float v49; // [sp+1Ch] [bp-6Ch]
  int v50; // [sp+20h] [bp-68h]
  _DWORD v51[25]; // [sp+24h] [bp-64h] BYREF

  FIELD_U8(a1, 7402) = 0;
  v3 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
  if ( ((unsigned int)&dword_60CBDD28 & ~(1618175300 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDD28) )
  {
    dword_60CBDD24 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CBDD28);
  }
  if ( v3 && (**v3)(v3, &dword_60CBDD24) == 1 )
  {
    v5 = sub_6073AF6C(v3);
    v6 = FIELD_U32(a1, 116);
    v7 = FIELD_F32(a1, 112) + 8.0;
    v8 = FIELD_F32(dword_60CC6484, 116);
    FIELD_F32(a1, 7584) = v8;
    FIELD_F32(a1, 7588) = v7;
    FIELD_U32(a1, 7592) = v6;
    v9 = *(void (__fastcall ****)(_DWORD, int *))(a1 + 56);
    if ( ((unsigned int)&dword_60CBDD28 & ~(1618175492 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDD28) )
    {
      dword_60CBDD24 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CBDD28);
    }
    if ( v9 )
      (**v9)(v9, &dword_60CBDD24);
    v10 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
    if ( ((unsigned int)&dword_60CBDD28 & ~(1618175604 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDD28) )
    {
      dword_60CBDD24 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CBDD28);
    }
    if ( v10 && (**v10)(v10, &dword_60CBDD24) == 1 )
      v11 = (float *)(v10 + 1535);
    else
      v11 = (float *)(a1 + 108);
    v12 = *v11;
    v13 = v8 - v5;
    v14 = FIELD_U32(a1, 56);
    if ( ((unsigned int)&dword_60CBDD28 & ~(1618175752 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDD28) )
    {
      dword_60CBDD24 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CBDD28);
    }
    v15 = 3;
    if ( v14 && (**(int (__fastcall ***)(int, int *))v14)(v14, &dword_60CBDD24) == 1 )
      v15 = FIELD_U8(v14, 6108);
    v16 = FIELD_U8(a1, 7392);
    v17 = FIELD_U32(a1, 112);
    v18 = FIELD_U32(a1, 116);
    v42 = FIELD_U32(a1, 108);
    v43 = v17;
    v44 = v18;
    v19 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
    v20 = (float)v16;
    if ( ((unsigned int)&dword_60CBDD28 & ~(1618175936 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDD28) )
    {
      dword_60CBDD24 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CBDD28);
    }
    v21 = v5 + v7;
    if ( v19 && (**v19)(v19, &dword_60CBDD24) == 1 )
      v22 = (float *)(v19 + 1535);
    else
      v22 = (float *)(a1 + 108);
    v23 = *v22;
    v24 = FIELD_U32(a1, 112);
    v25 = FIELD_U32(a1, 116);
    v26 = 0;
    v45 = (float)((float)(v20 * (float)((float)(v13 - v12) / (float)(v15 - 1))) + -4.0) + v23;
    v46 = v24;
    v47 = v25;
    v48 = v13;
    v49 = v21;
    v50 = v25;
    v51[0] = FIELD_U32(a1, 7584);
    *(float *)&v51[1] = v21;
    v51[2] = v25;
    ((void (__fastcall *)(int, _DWORD, int *))sub_6083421C)(a1 + 7464, 0, &v42);
    ((void (__fastcall *)(int, int, float *, int, int, int, int))sub_6083421C)(a1 + 7464, 1, &v45, v27, v42, v43, v44);
    ((void (__fastcall *)(int, int, float *, int, int, int, int, _DWORD, int, int))sub_6083421C)(
      a1 + 7464,
      2,
      &v48,
      v28,
      v42,
      v43,
      v44,
      LODWORD(v45),
      v46,
      v47);
    ((void (__fastcall *)(int, int, _DWORD *, int, int, int, int, _DWORD, int, int, _DWORD, _DWORD, int))sub_6083421C)(
      a1 + 7464,
      3,
      v51,
      v29,
      v42,
      v43,
      v44,
      LODWORD(v45),
      v46,
      v47,
      LODWORD(v48),
      LODWORD(v49),
      v50);
    v30 = sub_6073AF40(v3);
    v31 = sub_6073AF74(v3, v30);
    sub_60833B74(a1 + 7464, v31);
    v32 = v30 * v31;
    v34 = (int *)(a1 + 7500);
    v33 = FIELD_U32(a1, 7500);
    v35 = 0.0;
    if ( v33 >= 2 )
    {
      v35 = 0.0;
      v36 = 3;
      v37 = (float **)(a1 + 7504);
      do
      {
        v38 = *v37;
        v39 = v33 > v26++;
        v40 = *v37;
        if ( v39 )
          v40 = &(*v37)[v36 - 3];
        if ( v33 > v26 )
          v38 = &(*v37)[v36];
        v33 = *v34;
        v35 = v35
            + sqrtf(
                (float)((float)((float)(v40[1] - v38[1]) * (float)(v40[1] - v38[1]))
                      + (float)((float)(*v40 - *v38) * (float)(*v40 - *v38)))
              + (float)((float)(v40[2] - v38[2]) * (float)(v40[2] - v38[2])));
        v36 += 3;
      }
      while ( (int)v26 < *v34 - 1 );
    }
    FIELD_U32(a1, 7480) = 2;
    ((void (__fastcall *)(int, float, float, float))loc_608342B0)(
      a1 + 7464,
      0.0,
      100.0,
      (float)((float)(v35 - (float)(v32 * 0.0)) + (float)(v35 - (float)(v32 * 0.0))) / (float)(v32 * v32));
    ((void (__fastcall *)(int))loc_60737E34)(a1);
  }
  FIELD_U16(a1, 7404) = 1;
  FIELD_U16(a1, 7460) = 0;
  return 7460;
}
