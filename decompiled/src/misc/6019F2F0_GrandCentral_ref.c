/* GrandCentral_ref
 * address: 0x6019F2F0   size: 952   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall GrandCentral_ref(int a1)
{
  int v1; // r6
  char v2; // r12
  int v4; // r4
  _DWORD *v5; // r0
  int v6; // r1
  bool v7; // zf
  int v8; // r2
  _DWORD *v9; // r7
  _DWORD *v10; // r5
  _DWORD *v11; // r1
  int (__fastcall ***v12)(_DWORD, int *); // r5
  int v13; // r6
  float v14; // s16
  float v15; // s18
  float v16; // s20
  int result; // r0
  int v18; // r5
  int v19; // r8
  int v20; // r9
  _DWORD *v21; // r8
  int v22; // t1
  char *v23; // r6
  float v24; // s0
  float v25; // s2
  float v26; // s4
  ModelWrapper *v27; // r7
  _DWORD *v28; // r1
  int v29; // [sp+4h] [bp-BCh]
  int v30; // [sp+8h] [bp-B8h]
  _DWORD v31[2]; // [sp+10h] [bp-B0h] BYREF
  int v32; // [sp+18h] [bp-A8h] BYREF
  int v33; // [sp+1Ch] [bp-A4h]
  int v34; // [sp+20h] [bp-A0h]
  float v35; // [sp+24h] [bp-9Ch]
  int v36; // [sp+28h] [bp-98h]
  int v37; // [sp+2Ch] [bp-94h]
  int v38; // [sp+30h] [bp-90h]
  float v39; // [sp+34h] [bp-8Ch]
  int v40; // [sp+38h] [bp-88h]
  int v41; // [sp+3Ch] [bp-84h]
  int v42; // [sp+40h] [bp-80h]
  float v43; // [sp+44h] [bp-7Ch]
  __int64 v44; // [sp+48h] [bp-78h]
  __int64 v45; // [sp+50h] [bp-70h]
  __int64 v46; // [sp+58h] [bp-68h]
  __int64 v47; // [sp+60h] [bp-60h]
  __int64 v48; // [sp+68h] [bp-58h]
  __int64 v49; // [sp+70h] [bp-50h]

  v4 = 0;
  v32 = 1065353216;
  v33 = 0;
  v34 = 0;
  v36 = 0;
  v37 = 1065353216;
  v38 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 1065353216;
  v35 = 0.0;
  v39 = 0.0;
  v43 = 0.0;
  do
  {
    v5 = (_DWORD *)(a1 + 16 * v4);
    if ( (int)v5[6] >= 1 )
    {
      v6 = v5[5];
      v7 = v6 == 0;
      if ( v6 )
      {
        v8 = v5[7];
        v1 = v6 - v8;
        v7 = v6 == v8;
      }
      if ( !v7 )
      {
        v9 = v5 + 4;
        v10 = v5 + 7;
        do
        {
          (*(void (__fastcall **)(_DWORD, int *))(***(_DWORD ***)(v1 + 4) + 60))(**(_DWORD **)(v1 + 4), &v32);
          ModelWrapper_updateModel(*(ModelWrapper **)(v1 + 4));
          v11 = *(_DWORD **)(*v10 + v1 + 4);
          v1 = (int)v11 - *v10;
          if ( v11 == v9 )
            v1 = 0;
        }
        while ( v1 );
      }
    }
    ++v4;
  }
  while ( v4 != 9 );
  v31[0] = &sead__SafeStringBase__vtable;
  v31[1] = "GrandCentral";
  v12 = **(int (__fastcall *****)(_DWORD, int *))(FIELD_U32(a1, 52) - FIELD_U32(a1, 60) + 4);
  if ( ((unsigned int)&dword_60C80400 & ~(1612313612 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
  {
    dword_60C803FC = (int)&off_60BC3228;
    _cxa_guard_release(&dword_60C80400);
  }
  if ( v12 )
  {
    v13 = (**v12)(v12, &dword_60C803FC);
    if ( v13 )
      v13 = (int)v12;
  }
  else
  {
    v13 = 0;
  }
  if ( (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v13 + 84))(v13, v31) < 0 )
  {
    v44 = 1065353216;
    v45 = 0;
    v46 = 0x3F80000000000000LL;
    v47 = 0;
    v48 = 0;
    v49 = 1065353216;
  }
  else
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 108))(v13);
  }
  v14 = *((float *)&v45 + 1);
  v15 = *((float *)&v47 + 1);
  v16 = *((float *)&v49 + 1);
  connectW_d_ref(a1, 2, 8);
  connectW_d_ref(a1, 2, 3);
  connectW_d_ref(a1, 3, 4);
  connectW_d_ref(a1, 4, 5);
  connectW_d_ref(a1, 5, 6);
  connectW_d_ref(a1, 6, 7);
  connectW_d_ref(a1, 2, 1);
  connectW_d_ref(a1, 1, 0);
  result = 0;
  v18 = 0;
  v29 = a1;
  do
  {
    v19 = a1 + 16 * result;
    v30 = result;
    v20 = 0;
    v22 = FIELD_U32(v19, 28);
    v21 = (_DWORD *)(v19 + 28);
    v23 = (char *)(*(v21 - 2) - v22);
    do
    {
      v24 = *((float *)v23 + 6) - v16;
      v25 = *((float *)v23 + 5) - v15;
      v26 = *((float *)v23 + 4) - v14;
      if ( v20 )
        v26 = v26 + (float)((float)++v18 * 20000.0);
      *((float *)v23 + 4) = v26;
      *((float *)v23 + 5) = v25;
      *((float *)v23 + 6) = v24;
      v32 = 1065353216;
      v33 = 0;
      v34 = 0;
      v36 = 0;
      v37 = 1065353216;
      v38 = 0;
      v40 = 0;
      v41 = 0;
      v42 = 1065353216;
      v35 = v26;
      v39 = v25;
      v43 = v24;
      (*(void (__fastcall **)(_DWORD, int *))(***((_DWORD ***)v23 + 1) + 60))(**((_DWORD **)v23 + 1), &v32);
      ModelWrapper_updateModel(*((ModelWrapper **)v23 + 1));
      v27 = *((ModelWrapper **)v23 + 2);
      (*(void (__fastcall **)(void *, int *))(*(_DWORD *)FIELD_U32(v27, 0x0) + 60))(FIELD_U32(v27, 0x0), &v32);
      ModelWrapper_updateModel(v27);
      sub_602278CC(v23);
      --v20;
      v28 = *(_DWORD **)&v23[*v21 + 4];
      v23 = (char *)v28 - *v21;
      if ( v28 == v21 - 3 )
        v23 = 0;
    }
    while ( v23 );
    a1 = v29;
    result = v30 + 1;
  }
  while ( v30 != 8 );
  return result;
}
