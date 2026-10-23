/* sub_6043C96C
 * address: 0x6043C96C   size: 1492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6043C96C(int a1, _DWORD *a2, _DWORD *a3)
{
  int v6; // r5
  int v7; // r2
  _BOOL4 v8; // r0
  int v9; // r1
  int v10; // r3
  int v11; // r5
  int v12; // r1
  _DWORD *v13; // r7
  int v14; // r0
  int v15; // r0
  _DWORD *v16; // r7
  int v17; // r5
  int v18; // r0
  int v19; // r1
  int v20; // r3
  _DWORD *v21; // r0
  int v22; // r1
  _DWORD *result; // r0
  int v24; // r1
  _DWORD *v25; // r9
  int v26; // r0
  int v27; // r5
  int v28; // r0
  int v29; // r1
  int v30; // r3
  _DWORD *v31; // r0
  _DWORD *v32; // r4
  int v33; // r10
  int v34; // r0
  int v35; // r1
  int v36; // r2
  int v37; // r3
  bool v38; // cc
  _DWORD *v39; // r0
  _DWORD *v40; // r1
  int v41; // r2
  int v42; // r3
  int v43; // r3
  int v44; // r1

  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  v6 = a3[1];
  (*(void (__fastcall **)(_DWORD *))(a2[4] + 12))(a2 + 4);
  v7 = a2[5];
  v8 = 0;
  v9 = 0;
  if ( v6 != v7 )
  {
    v10 = a3[1];
    v11 = 0;
    while ( 1 )
    {
      v12 = *(unsigned __int8 *)(v10 + v11) - *(unsigned __int8 *)(v7 + v11);
      if ( v12 )
        break;
      v9 = 0;
      if ( *(_BYTE *)(v10 + v11) )
      {
        if ( ++v11 < 0x80000 )
          continue;
      }
      goto LABEL_8;
    }
    v9 = (v12 >> 31) | 1;
  }
LABEL_8:
  v13 = (_DWORD *)a2[1];
  if ( v13 )
    v8 = (v13[3] & 1) == 0;
  if ( v9 < 0 )
  {
    if ( v8
      || (v14 = v13[1]) != 0 && (FIELD_U8(v14, 12) & 1) == 0
      || (a2[3] ^= 1u, v13[3] ^= 1u, *(_DWORD *)(a2[2] + 12) ^= 1u, v15 = a2[2], (v16 = *(_DWORD **)(v15 + 4)) == 0)
      || (v16[3] & 1) != 0 )
    {
      v16 = a2;
    }
    else
    {
      FIELD_U32(v15, 4) = v16[2];
      v16[2] = v15;
      v16[3] = FIELD_U32(v15, 12);
      FIELD_U32(v15, 12) = 0;
      a2[2] = v16;
      a2[2] = v16[1];
      v16[1] = a2;
      v16[3] = a2[3];
      a2[3] = 0;
      v16[3] ^= 1u;
      *(_DWORD *)(v16[1] + 12) ^= 1u;
      *(_DWORD *)(v16[2] + 12) ^= 1u;
    }
    v16[1] = sub_6043C96C(a1, v16[1], a3);
    goto LABEL_57;
  }
  if ( v8 )
  {
    a2[1] = v13[2];
    v13[2] = a2;
    v13[3] = a2[3];
    a2[3] = 0;
  }
  else
  {
    v13 = a2;
  }
  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  v17 = a3[1];
  (*(void (__fastcall **)(_DWORD *))(v13[4] + 12))(v13 + 4);
  v18 = v13[5];
  if ( v17 == v18 )
  {
LABEL_27:
    v21 = v13 + 2;
    v22 = v13[2];
    if ( !v22 )
    {
      (*(void (__fastcall **)(_DWORD *))(*v13 + 8))(v13);
      return 0;
    }
LABEL_30:
    if ( (FIELD_U8(v22, 12) & 1) == 0 )
      goto LABEL_36;
    goto LABEL_31;
  }
  v20 = 0;
  while ( 1 )
  {
    v19 = a3[1];
    if ( *(unsigned __int8 *)(v19 + v20) != *(unsigned __int8 *)(v18 + v20) )
      break;
    if ( *(_BYTE *)(v19 + v20) )
    {
      if ( ++v20 < 0x80000 )
        continue;
    }
    goto LABEL_27;
  }
  v21 = v13 + 2;
  v22 = v13[2];
  if ( v22 )
    goto LABEL_30;
LABEL_31:
  v24 = *(_DWORD *)(*v21 + 4);
  if ( !v24 || (FIELD_U8(v24, 12) & 1) != 0 )
  {
    v13[3] ^= 1u;
    *(_DWORD *)(v13[1] + 12) ^= 1u;
    *(_DWORD *)(*v21 + 12) ^= 1u;
    v25 = (_DWORD *)v13[1];
    v26 = v25[1];
    if ( v26 )
    {
      if ( (FIELD_U8(v26, 12) & 1) == 0 )
      {
        v13[1] = v25[2];
        v25[2] = v13;
        v25[3] = v13[3];
        v13[3] = 0;
        v25[3] ^= 1u;
        *(_DWORD *)(v25[1] + 12) ^= 1u;
        *(_DWORD *)(v25[2] + 12) ^= 1u;
        goto LABEL_37;
      }
    }
  }
LABEL_36:
  v25 = v13;
LABEL_37:
  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  v27 = a3[1];
  (*(void (__fastcall **)(_DWORD *))(v25[4] + 12))(v25 + 4);
  v28 = v25[5];
  if ( v27 == v28 )
  {
LABEL_42:
    v16 = (_DWORD *)v25[2];
    v31 = v16;
    do
    {
      v32 = v31;
      v31 = (_DWORD *)v31[1];
    }
    while ( v31 );
    if ( v16 )
    {
      while ( 1 )
      {
        (*(void (__fastcall **)(_DWORD *))(v32[4] + 12))(v32 + 4);
        (*(void (__fastcall **)(_DWORD *))(v32[4] + 12))(v32 + 4);
        v33 = v32[5];
        (*(void (__fastcall **)(_DWORD *))(v16[4] + 12))(v16 + 4);
        v34 = v16[5];
        if ( v33 == v34 )
          break;
        v35 = v32[5];
        v36 = 0;
        while ( 1 )
        {
          v37 = *(unsigned __int8 *)(v35 + v36);
          v38 = v37 - *(unsigned __int8 *)(v34 + v36) < 0;
          if ( v37 != *(unsigned __int8 *)(v34 + v36) )
            break;
          if ( *(_BYTE *)(v35 + v36) )
          {
            if ( ++v36 < 0x80000 )
              continue;
          }
          goto LABEL_55;
        }
        v39 = v16 + 2;
        if ( v38 )
          v39 = v16 + 1;
        v16 = (_DWORD *)*v39;
        if ( !*v39 )
          goto LABEL_54;
      }
    }
    else
    {
LABEL_54:
      v16 = 0;
    }
LABEL_55:
    v16[2] = sub_6043CF50(v25[2]);
    v16[1] = v25[1];
    v16[3] = v25[3];
    (*(void (__fastcall **)(_DWORD *))(*v25 + 8))(v25);
  }
  else
  {
    v29 = a3[1];
    v30 = 0;
    while ( *(unsigned __int8 *)(v29 + v30) == *(unsigned __int8 *)(v28 + v30) )
    {
      if ( *(_BYTE *)(v29 + v30) )
      {
        if ( ++v30 < 0x80000 )
          continue;
      }
      goto LABEL_42;
    }
    v25[2] = sub_6043C96C(a1, v25[2], a3);
    v16 = v25;
  }
LABEL_57:
  result = (_DWORD *)v16[2];
  if ( !result || (result[3] & 1) != 0 )
  {
    result = v16;
  }
  else
  {
    v16[2] = result[1];
    result[1] = v16;
    result[3] = v16[3];
    v16[3] = 0;
  }
  v40 = (_DWORD *)result[1];
  if ( !v40 )
    return result;
  v41 = v40[3];
  if ( (v41 & 1) != 0 || (v42 = v40[1]) == 0 || (FIELD_U8(v42, 12) & 1) != 0 )
  {
    v43 = result[1];
    if ( (v41 & 1) != 0 )
      return result;
    goto LABEL_69;
  }
  result[1] = v40[2];
  v40[2] = result;
  v40[3] = result[3];
  result[3] = 0;
  v43 = v40[1];
  if ( !v43 )
    return v40;
  result = v40;
  if ( (FIELD_U32(v43, 12) & 1) == 0 )
  {
LABEL_69:
    v44 = result[2];
    if ( v44 )
    {
      if ( (FIELD_U8(v44, 12) & 1) == 0 )
      {
        result[3] ^= 1u;
        FIELD_U32(v43, 12) ^= 1u;
        *(_DWORD *)(result[2] + 12) ^= 1u;
      }
    }
  }
  return result;
}
