/* sub_60996F34
 * address: 0x60996F34   size: 1016   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60996F34(int a1)
{
  int v2; // r0
  _DWORD *v3; // r11
  int v4; // r0
  int v5; // r9
  _BYTE *v6; // r5
  int result; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  bool v12; // nf
  int v13; // r10
  bool v14; // cc
  int v15; // r3
  int v16; // r7
  int v17; // r8
  int v18; // r7
  bool v19; // cc
  int v20; // r1
  int v21; // r2
  int v22; // r1
  int v23; // r2
  int v24; // r1
  int v25; // r3
  bool v26; // cc
  int v27; // r3
  int v28; // r2
  float v29; // s16
  int v30; // r7
  int v31; // r1
  int v32; // r10
  int v33; // r8
  int v34; // r11
  int v35; // r7
  float v36; // s0
  bool v37; // cc
  int v38; // r1
  int v39; // r2
  int v40; // r5
  bool v41; // zf
  bool v42; // zf
  int v43; // [sp+4h] [bp-4Ch]
  _DWORD *v44; // [sp+8h] [bp-48h]
  int v45; // [sp+Ch] [bp-44h]
  float v46; // [sp+10h] [bp-40h] BYREF
  float v47; // [sp+14h] [bp-3Ch]
  int v48; // [sp+18h] [bp-38h]
  int v49; // [sp+1Ch] [bp-34h]

  v2 = *(_DWORD *)(FIELD_U32(a1, 16) + 72);
  v3 = *(_DWORD **)(v2 + 20);
  v49 = sub_6098BED8(v2);
  v4 = FIELD_U32(a1, 40);
  if ( v4 )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4) )
    {
      v5 = FIELD_U32(a1, 40);
      FIELD_U32(a1, 40) = 0;
      if ( v5 )
      {
LABEL_74:
        v40 = FIELD_U32(a1, 36);
        FIELD_U32(a1, 36) = v5;
        v42 = v40 == 0;
        if ( v40 )
          v42 = v40 == v5;
        if ( !v42 )
          (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(v40 + 12) + 156))(FIELD_U32(v40, 12));
        goto LABEL_78;
      }
    }
    else
    {
      FIELD_U32(a1, 40) = 0;
    }
  }
  v6 = (_BYTE *)v3[8];
  result = v3[5];
  v8 = 0;
  v9 = (char)*v6;
  if ( result >= 1 && v9 < 0 )
  {
    v10 = 1;
    do
    {
      v11 = v10 + 1;
      if ( v10 >= result )
        break;
      v12 = (char)v6[v10++] < 0;
    }
    while ( v12 );
    v8 = v11 - 1;
  }
  v13 = v3[7];
  v14 = v13 < result;
  if ( v13 < result )
    v14 = (char)v6[v13] < 0;
  if ( v14 )
  {
    v15 = v13 + 1;
    do
    {
      v16 = v15 + 1;
      if ( v15 >= result )
        break;
      v12 = (char)v6[v15++] < 0;
    }
    while ( v12 );
    v13 = v16 - 1;
  }
  if ( v8 != v13 )
  {
    while ( 1 )
    {
      v17 = v8;
      v18 = *(_DWORD *)(v3[6] + 4 * v8);
      v48 = sub_6098BED8(v18);
      if ( v48 == v49 )
      {
        v5 = FIELD_U32(v18, 104);
        if ( v5 )
        {
          if ( (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)v5 + 20))(FIELD_U32(v18, 104), v48) )
            goto LABEL_74;
        }
        v5 = FIELD_U32(v18, 100);
        if ( v5 )
        {
          if ( (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)v5 + 20))(FIELD_U32(v18, 100), v48) )
            goto LABEL_74;
        }
      }
      result = v3[5];
      v8 = v17 + 1;
      v19 = v17 + 1 < result;
      if ( v17 + 1 < result )
        v19 = (char)v6[v8] < 0;
      if ( v19 )
      {
        v20 = v17 + 2;
        do
        {
          v21 = v20 + 1;
          if ( v20 >= result )
            break;
          v12 = (char)v6[v20++] < 0;
        }
        while ( v12 );
        v8 = v21 - 1;
      }
      if ( v8 == v13 )
      {
        v6 = (_BYTE *)v3[8];
        LOBYTE(v9) = *v6;
        break;
      }
    }
  }
  v22 = 0;
  if ( result >= 1 && (v9 & 0x80u) != 0 )
  {
    v23 = 1;
    do
    {
      v24 = v23 + 1;
      if ( v23 >= result )
        break;
      v12 = (char)v6[v23++] < 0;
    }
    while ( v12 );
    v22 = v24 - 1;
  }
  v25 = v3[7];
  v26 = v25 < result;
  if ( v25 < result )
    v26 = (char)v6[v25] < 0;
  if ( v26 )
  {
    v27 = v25 + 1;
    do
    {
      v28 = v27 + 1;
      if ( v27 >= result )
        break;
      v12 = (char)v6[v27++] < 0;
    }
    while ( v12 );
    v25 = v28 - 1;
  }
  v5 = 0;
  if ( v22 != v25 )
  {
    v29 = 3.4028e38;
    v5 = 0;
    v43 = v25;
    v44 = v3;
    do
    {
      v30 = v22;
      v31 = *(_DWORD *)(v3[6] + 4 * v22);
      v32 = FIELD_U32(v31, 72);
      if ( v32 != v31 + 68 )
      {
        v45 = v30;
        v33 = FIELD_U32(v31, 80);
        v34 = v31 + 68 - v33;
        v35 = v32 - v33;
        do
        {
          if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v35 + 20))(v35, v49) == 1 )
          {
            sub_609978D8(v35, &v46);
            v36 = sqrtf(
                    (float)((float)(FIELD_F32(a1, 48) - v47) * (float)(FIELD_F32(a1, 48) - v47))
                  + (float)((float)(FIELD_F32(a1, 44) - v46) * (float)(FIELD_F32(a1, 44) - v46)));
            if ( v36 < v29 )
            {
              v29 = v36;
              v5 = v35;
            }
          }
          v32 = FIELD_U32(v32, 4);
          v35 = v32 - v33;
        }
        while ( v32 - v33 != v34 );
        v3 = v44;
        v25 = v43;
        v30 = v45;
        result = v44[5];
      }
      v22 = v30 + 1;
      v37 = v30 + 1 < result;
      if ( v30 + 1 < result )
        v37 = (char)v6[v22] < 0;
      if ( v37 )
      {
        v38 = v30 + 2;
        do
        {
          v39 = v38 + 1;
          if ( v38 >= result )
            break;
          v12 = (char)v6[v38++] < 0;
        }
        while ( v12 );
        v22 = v39 - 1;
      }
    }
    while ( v22 != v25 );
  }
  v40 = FIELD_U32(a1, 36);
  FIELD_U32(a1, 36) = v5;
  v41 = v40 == 0;
  if ( v40 )
    v41 = v40 == v5;
  if ( !v41 )
    result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v40 + 12) + 156))(FIELD_U32(v40, 12));
  if ( v5 )
  {
LABEL_78:
    sub_609978D8(v5, a1 + 44);
    result = FIELD_U32(v5, 16);
    FIELD_U32(result, 104) = v5;
    if ( v40 != v5 )
      return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v5 + 12) + 152))(FIELD_U32(v5, 12));
  }
  return result;
}
