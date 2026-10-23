/* sub_609865C0
 * address: 0x609865C0   size: 1136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609865C0(_DWORD *a1, int a2, int a3, int a4, signed int *a5, int a6)
{
  signed int *v7; // r4
  int v8; // r5
  __int64 v9; // r6
  unsigned int v10; // r0
  _QWORD *v11; // r0
  _QWORD *v12; // r4
  int v13; // r6
  int v14; // r0
  signed int v15; // r6
  __int64 v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r3
  int v20; // r7
  int v21; // r2
  unsigned int v22; // r10
  int v23; // r11
  int v24; // r0
  int v25; // r0
  signed int v26; // r1
  signed int v27; // r12
  unsigned int v28; // r0
  int v29; // r7
  int v31; // r2
  _DWORD *v32; // r7
  int result; // r0
  bool v34; // zf
  int v35; // r10
  signed int v36; // r9
  int v37; // r5
  unsigned int i; // r7
  int v39; // r1
  int *v40; // r2
  char *v41; // [sp+24h] [bp-244h] BYREF
  int v42; // [sp+28h] [bp-240h]
  int v43; // [sp+2Ch] [bp-23Ch]
  char v44; // [sp+30h] [bp-238h] BYREF
  _DWORD v45[20]; // [sp+B0h] [bp-1B8h] BYREF
  int v46; // [sp+100h] [bp-168h]
  unsigned int v47; // [sp+104h] [bp-164h]
  int (**v48)(); // [sp+108h] [bp-160h]
  _BYTE v49[40]; // [sp+10Ch] [bp-15Ch] BYREF
  int (**v50)(); // [sp+134h] [bp-134h] BYREF
  _BYTE *v51; // [sp+138h] [bp-130h]
  int v52; // [sp+13Ch] [bp-12Ch]
  _BYTE v53[296]; // [sp+140h] [bp-128h] BYREF

  v7 = a5;
  v8 = a2;
  a1[11] = a6;
  if ( a6 )
    FIELD_U32(a6, 20) = a1;
  if ( a3 )
  {
    sub_6098DA18(a1 + 5, a2);
    HIDWORD(v9) = *(_DWORD *)(a1[5] + 36);
    if ( SHIDWORD(v9) >= 1 )
    {
      LODWORD(v9) = 120;
      v10 = 120 * HIDWORD(v9) + 8;
      if ( v10 < 120 * HIDWORD(v9) )
        v10 = -1;
      if ( !is_mul_ok(0x78u, HIDWORD(v9)) )
        v10 = -1;
      v11 = (_QWORD *)sub_608DE334(v10, v8, 4);
      if ( v11 )
      {
        *v11 = v9;
        v12 = v11 + 1;
        v13 = 120 * HIDWORD(v9);
        v14 = (int)(v11 + 1);
        do
        {
          v13 -= 120;
          v14 = sub_60999BDC(v14) + 120;
        }
        while ( v13 );
        a1[6] = HIDWORD(v9);
        a1[7] = v12;
        v7 = a5;
      }
    }
  }
  v15 = *v7;
  if ( *v7 >= 1 )
  {
    v16 = 4LL * (unsigned int)v15;
    if ( !is_mul_ok(4u, v15) )
      HIDWORD(v16) = 1;
    if ( HIDWORD(v16) )
      LODWORD(v16) = -1;
    v17 = sub_608DE334(v16, v8, 4);
    if ( v17 )
    {
      a1[8] = v15;
      a1[9] = v17;
    }
    else
    {
      v15 = a1[8];
      if ( v15 < 1 )
        goto LABEL_29;
    }
    if ( (v15 & 3) != 0 )
    {
      a2 = 0;
      do
        *(_DWORD *)(a1[9] + 4 * a2++) = 0;
      while ( (v15 & 3) != a2 );
    }
    else
    {
      a2 = 0;
    }
    if ( (unsigned int)(v15 - 1) >= 3 )
    {
      v18 = a2 - v15;
      a2 *= 4;
      v19 = 0;
      do
      {
        *(_DWORD *)(a1[9] + a2 - 4 * v19) = 0;
        *(_DWORD *)(a1[9] + a2 - 4 * v19 + 4) = 0;
        *(_DWORD *)(a1[9] + a2 - 4 * v19 + 8) = 0;
        v20 = a1[9] + a2 - 4 * v19;
        v19 -= 4;
        FIELD_U32(v20, 12) = 0;
      }
      while ( v18 != v19 );
    }
  }
LABEL_29:
  if ( a1[5] )
  {
    sub_6090B310(dword_60CCF464);
    sub_6043C320((int)v45, 0);
    v47 = -1;
    memset(v49, 0, sizeof(v49));
    v48 = &off_60BFAA14;
    v51 = v53;
    v50 = &BufferedSafeStringBase_char_vtable_probably;
    v52 = 256;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v50);
    *v51 = 0;
    v50 = &off_60BD94BC;
    v53[256] = 0;
    sub_6098DBCC(a1 + 5, v45);
    if ( sub_6098DC7C(v45) == 1 )
    {
      do
      {
        v41 = &v44;
        v42 = 0;
        v43 = 128;
        v44 = 0;
        ((void (__fastcall *)(int (***)()))v50[3])(&v50);
        sub_608FDFB8((int)&v41, v51, -1);
        v21 = (*(int (__fastcall **)(int, unsigned int, _DWORD))(*(_DWORD *)v46 + 28))(v46, v47, 0);
        v22 = v47;
        v23 = 15 * v47;
        v24 = a1[7];
        if ( a1[6] > v47 )
          v24 += 120 * v47;
        sub_60999C60(v24, FIELD_U32(dword_60CCF464, 36), v21, 0, 0, 0);
        v25 = a1[7];
        if ( a1[6] > v22 )
          v25 += 8 * v23;
        sub_6099A1C0(v25, sub_609909D8, 0);
        v26 = *v7;
        if ( *v7 )
        {
          if ( v42 < 0 )
          {
            v28 = 0;
LABEL_45:
            v31 = a1[7];
            v32 = (_DWORD *)a1[9];
            if ( a1[8] > v28 )
              v32 += v28;
            if ( a1[6] > v22 )
              v31 += 8 * v23;
            *v32 = v31;
          }
          else
          {
            v27 = v7[1];
            v28 = 0;
            do
            {
              v29 = 0;
              while ( v41[v29] == *(_BYTE *)(*(_DWORD *)(v27 + 4 * v28) + v29) )
              {
                if ( v29++ >= v42 )
                {
                  v7 = a5;
                  goto LABEL_45;
                }
              }
              v7 = a5;
              ++v28;
            }
            while ( v28 != v26 );
          }
        }
      }
      while ( sub_6098DC7C(v45) );
    }
    sub_6098DC24(v45);
    sub_6090B32C(dword_60CCF464);
  }
  result = a1[11];
  v34 = result == 0;
  if ( result )
  {
    a2 = *v7;
    v34 = *v7 == 0;
  }
  if ( !v34 )
  {
    v35 = a2 - 1;
    v36 = v7[1];
    v37 = 0;
    for ( i = 0; ; ++i )
    {
      v39 = *(_DWORD *)(v36 + v37);
      v45[0] = &sead__SafeStringBase__vtable;
      v45[1] = v39;
      result = sub_60987738(result, v45);
      if ( result )
      {
        v40 = (int *)a1[9];
        if ( a1[8] > i )
          v40 = (int *)((char *)v40 + v37);
        *v40 = result;
      }
      if ( v35 == i )
        break;
      result = a1[11];
      v37 += 4;
    }
  }
  return result;
}
