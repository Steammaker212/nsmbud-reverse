/* sub_60230BCC
 * address: 0x60230BCC   size: 1444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_60230BCC(sead_IDisposer *a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r7
  __int64 v8; // kr00_8
  unsigned int v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r8
  _DWORD *v12; // r5
  int v13; // r6
  int v14; // r6
  bool v15; // cc
  int v16; // r0
  int v17; // r1
  int v18; // r8
  int v19; // r10
  int (**v20)(); // r9
  int v21; // r5
  int v22; // r0
  int v23; // r2
  int (**v24)(); // r4
  int v25; // r9
  int v26; // r2
  int v27; // r2
  int v28; // r1
  int v29; // r0
  int v30; // r5
  int v31; // r2
  bool v32; // vf
  int v33; // r1
  int v34; // r1
  int v35; // r0
  int v36; // r5
  int v37; // r6
  int vtable; // r1
  int v39; // r0
  int containingHeap; // r5
  int v41; // r1
  int v42; // r0
  int v43; // r1
  int v44; // r0
  int v45; // r5
  int v46; // r6
  int v47; // r5
  int v48; // r0
  int v49; // r2
  int v50; // r2
  int v51; // r1
  int v52; // r5
  int v53; // r0
  int v54; // r2
  int v55; // r1
  int v56; // r1
  int v57; // r5
  int v59; // [sp+4h] [bp-44h]
  int (**v60)(); // [sp+1Ch] [bp-2Ch] BYREF
  int v61; // [sp+20h] [bp-28h]

  sead_IDisposer_ctor(a1);
  FIELD_U32(a1, 0x0) = (int)&off_60BD9484;
  FIELD_U32(a1 + (1) * 16, 0x0) = a3;
  FIELD_U32(a1 + (1) * 16, 0x4) = 0;
  FIELD_U32(a1 + (1) * 16, 0x8) = 0;
  FIELD_U32(a1 + (1) * 16, 0xC) = 0;
  FIELD_U32(a1 + (2) * 16, 0x0) = 0;
  v6 = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 92))(a3);
  v7 = v6;
  if ( v6 >= 1 )
  {
    v8 = 112LL * (unsigned int)v6;
    v9 = v8 + 8;
    if ( (int)v8 + 8 < (unsigned int)v8 )
      v9 = -1;
    if ( HIDWORD(v8) )
      v9 = -1;
    v10 = (_DWORD *)sub_608DE334(v9, a2, 4);
    if ( v10 )
    {
      *v10 = 112;
      v10[1] = v7;
      v11 = v10 + 2;
      v12 = v10 + 2;
      v13 = (int)&v10[28 * v7 + 2];
      do
      {
        *v12 = -1;
        v12[1] = -1;
        EffectWrapper_ctor((EffectWrapper *)(v12 + 2));
        v12[2] = off_60BC1450;
        v12 += 28;
      }
      while ( v12 != (_DWORD *)v13 );
      FIELD_U32(a1 + (1) * 16, 0x4) = (int)v11;
      FIELD_U32(a1 + (1) * 16, 0x8) = v7;
      FIELD_U32(a1 + (1) * 16, 0xC) = 0;
      FIELD_U32(a1 + (2) * 16, 0x0) = 0;
    }
    (*(void (__fastcall **)(int *))(dword_60C8D8E8[0] + 12))(dword_60C8D8E8);
    v14 = 0;
    while ( *(_BYTE *)(dword_60C8D8EC + v14) )
    {
      if ( !*(_BYTE *)(dword_60C8D8EC + v14 + 1) )
      {
        ++v14;
        break;
      }
      if ( !*(_BYTE *)(dword_60C8D8EC + v14 + 2) )
      {
        v14 += 2;
        break;
      }
      v15 = v14 + 2 <= 0x7FFFF;
      v14 += 3;
      if ( !v15 )
      {
        v14 = 0;
        break;
      }
    }
    (*(void (__fastcall **)(int *))(dword_60C8D8F4 + 12))(&dword_60C8D8F4);
    v16 = 0;
    while ( *(_BYTE *)(dword_60C8D8F8 + v16) )
    {
      if ( !*(_BYTE *)(dword_60C8D8F8 + v16 + 1) )
      {
        ++v16;
        break;
      }
      if ( !*(_BYTE *)(dword_60C8D8F8 + v16 + 2) )
      {
        v16 += 2;
        break;
      }
      v15 = v16 + 2 <= 0x7FFFF;
      v16 += 3;
      if ( !v15 )
      {
        v16 = 0;
        break;
      }
    }
    v17 = 0x80000;
    v18 = 0x80000;
    if ( v16 < 0x80000 )
      v17 = v16;
    if ( v14 < 0x80000 )
      v18 = v14;
    v59 = v17;
    if ( v14 <= 0 )
    {
      v37 = 0;
      do
      {
        (*(void (__fastcall **)(int, int))(*(_DWORD *)FIELD_U32(a1 + (1) * 16, 0x0) + 88))(FIELD_U32(a1 + (1) * 16, 0x0), v37);
        (*(void (__fastcall **)(int *))(dword_60C8D8E8[0] + 12))(dword_60C8D8E8);
        vtable = FIELD_U32(a1 + (2) * 16, 0x0);
        v39 = FIELD_U32(a1 + (1) * 16, 0x8);
        FIELD_U32(a1 + (2) * 16, 0x0) = vtable + 1;
        containingHeap = FIELD_U32(a1 + (1) * 16, 0x4);
        v41 = FIELD_U32(a1 + (1) * 16, 0xC) + vtable;
        v32 = __OFSUB__(v41, v39);
        v42 = v41 - v39;
        if ( v42 < 0 != v32 )
          v42 = v41;
        v43 = dword_60C8D8F0;
        v44 = 7 * v42;
        *(_DWORD *)(containingHeap + 16 * v44) = v37;
        v45 = containingHeap + 16 * v44;
        FIELD_U32(v45, 4) = v43;
        EffectWrapper_ctor((EffectWrapper *)(v45 + 8));
        ++v37;
        FIELD_U32(v45, 8) = off_60BC1450;
      }
      while ( v7 != v37 );
    }
    else
    {
      if ( v16 >= 1 )
      {
        v19 = 0;
        v20 = &sead__SafeStringBase__vtable;
        while ( 1 )
        {
          v21 = (*(int (__fastcall **)(int, int))(*(_DWORD *)FIELD_U32(a1 + (1) * 16, 0x0) + 88))(FIELD_U32(a1 + (1) * 16, 0x0), v19);
          v60 = v20;
          v61 = v21;
          (*(void (__fastcall **)(int *))(dword_60C8D8E8[0] + 12))(dword_60C8D8E8);
          v22 = 0;
          if ( v21 != dword_60C8D8EC )
          {
            v23 = 0;
            while ( *(unsigned __int8 *)(v61 + v23) == *(unsigned __int8 *)(dword_60C8D8EC + v23) )
            {
              v22 = 0;
              if ( *(_BYTE *)(v61 + v23) )
              {
                if ( ++v23 < v18 )
                  continue;
              }
              goto LABEL_46;
            }
            v24 = v20;
            ((void (__fastcall *)(int (***)()))v60[3])(&v60);
            ((void (__fastcall *)(int (***)()))v60[3])(&v60);
            v25 = v61;
            (*(void (__fastcall **)(int *))(dword_60C8D8F4 + 12))(&dword_60C8D8F4);
            v22 = 1;
            if ( v25 != dword_60C8D8F8 )
            {
              v26 = 0;
              v20 = v24;
              while ( *(unsigned __int8 *)(v61 + v26) == *(unsigned __int8 *)(dword_60C8D8F8 + v26) )
              {
                if ( *(_BYTE *)(v61 + v26) )
                {
                  if ( ++v26 < v59 )
                    continue;
                }
                goto LABEL_46;
              }
              goto LABEL_49;
            }
            v20 = v24;
          }
LABEL_46:
          v27 = FIELD_U32(a1 + (2) * 16, 0x0);
          v28 = FIELD_U32(a1 + (1) * 16, 0x8);
          v29 = 3 * v22;
          FIELD_U32(a1 + (2) * 16, 0x0) = v27 + 1;
          v30 = FIELD_U32(a1 + (1) * 16, 0x4);
          v31 = FIELD_U32(a1 + (1) * 16, 0xC) + v27;
          v32 = __OFSUB__(v31, v28);
          v33 = v31 - v28;
          if ( v33 < 0 != v32 )
            v33 = v31;
          v34 = 7 * v33;
          v35 = dword_60C8D8E8[v29 + 2];
          *(_DWORD *)(v30 + 16 * v34) = v19;
          v36 = v30 + 16 * v34;
          FIELD_U32(v36, 4) = v35;
          EffectWrapper_ctor((EffectWrapper *)(v36 + 8));
          FIELD_U32(v36, 8) = off_60BC1450;
LABEL_49:
          if ( ++v19 == v7 )
            return a1;
        }
      }
      v46 = 0;
      do
      {
        v47 = (*(int (__fastcall **)(int, int))(*(_DWORD *)FIELD_U32(a1 + (1) * 16, 0x0) + 88))(FIELD_U32(a1 + (1) * 16, 0x0), v46);
        v60 = &sead__SafeStringBase__vtable;
        v61 = v47;
        (*(void (__fastcall **)(int *))(dword_60C8D8E8[0] + 12))(dword_60C8D8E8);
        v48 = 0;
        if ( v47 != dword_60C8D8EC )
        {
          v49 = 0;
          while ( *(unsigned __int8 *)(v61 + v49) == *(unsigned __int8 *)(dword_60C8D8EC + v49) )
          {
            v48 = 0;
            if ( *(_BYTE *)(v61 + v49) )
            {
              if ( ++v49 < v18 )
                continue;
            }
            goto LABEL_64;
          }
          ((void (__fastcall *)(int (***)()))v60[3])(&v60);
          ((void (__fastcall *)(int (***)()))v60[3])(&v60);
          (*(void (__fastcall **)(int *))(dword_60C8D8F4 + 12))(&dword_60C8D8F4);
          v48 = 1;
        }
LABEL_64:
        v50 = FIELD_U32(a1 + (2) * 16, 0x0);
        v51 = FIELD_U32(a1 + (1) * 16, 0x8);
        FIELD_U32(a1 + (2) * 16, 0x0) = v50 + 1;
        v52 = FIELD_U32(a1 + (1) * 16, 0x4);
        v53 = dword_60C8D8E8[3 * v48 + 2];
        v54 = FIELD_U32(a1 + (1) * 16, 0xC) + v50;
        v32 = __OFSUB__(v54, v51);
        v55 = v54 - v51;
        if ( v55 < 0 != v32 )
          v55 = v54;
        v56 = 7 * v55;
        *(_DWORD *)(v52 + 16 * v56) = v46;
        v57 = v52 + 16 * v56;
        FIELD_U32(v57, 4) = v53;
        EffectWrapper_ctor((EffectWrapper *)(v57 + 8));
        FIELD_U32(v57, 8) = off_60BC1450;
        ++v46;
      }
      while ( v46 != v7 );
    }
  }
  return a1;
}
