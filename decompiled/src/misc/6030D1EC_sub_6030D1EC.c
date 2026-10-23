/* sub_6030D1EC
 * address: 0x6030D1EC   size: 660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6030D1EC(int a1, unsigned int a2)
{
  unsigned int v2; // r4
  signed int v4; // r2
  int result; // r0
  int v6; // r1
  unsigned int v7; // r2
  bool v8; // zf
  unsigned int v9; // r1
  int v10; // r6
  char **v11; // r6
  int v12; // t1
  char *v13; // r2
  int *v14; // r7
  char v15; // r3
  int v16; // r2
  _BYTE *v17; // r8
  char *v18; // r2
  _DWORD *v19; // r0
  int v20; // r1
  int v21; // r1
  unsigned int v22; // r2
  bool v23; // zf
  unsigned int v24; // r1
  int v25; // r6
  int v26; // t1
  char *v27; // r2
  char v28; // r3
  int v29; // r2
  char *v30; // r2
  _DWORD *v31; // r0
  char *v32; // r2
  _DWORD *v33; // r0

  v2 = a2;
  v4 = FIELD_U8(a1, 7605);
  result = a1 + 7604;
  while ( (int)++a2 < v4 )
  {
    if ( !((*(unsigned __int8 *)result & (unsigned int)(1 << a2)) >> a2) )
    {
      result = 0;
      if ( a2 >= 8 )
        a2 = 0;
      v6 = a1 + 8 * a2;
      v7 = FIELD_U32(v6, 7248);
      if ( !FIELD_U32(v6, 7252) )
        result = 1;
      v8 = v7 == (_DWORD)sub_6030DA0C;
      if ( (int (*)())v7 == sub_6030DA0C )
      {
        result |= (FIELD_U32(v6, 7252) & 1 | v7) == 0;
        v8 = result == 1;
      }
      if ( v8 )
      {
        v9 = v2;
        if ( v2 >= 8 )
          v9 = 0;
        v10 = a1 + 8 * v9;
        v12 = FIELD_U32(v10, 7248);
        v11 = (char **)(v10 + 7248);
        result = v12;
        v14 = (int *)(v11 + 1);
        v13 = v11[1];
        v15 = (unsigned __int8)v13 & 1 | v12;
        if ( (unsigned __int8)v13 & 1 | v12 )
          v15 = 1;
        v16 = (v13 != 0) & (unsigned __int8)v15;
        if ( (int (*)())result != sub_6030DA0C || v16 == 1 )
        {
          v17 = (_BYTE *)(a1 + v9 + 7592);
          if ( (result != 0) | v16 )
          {
            *v17 = -1;
            v18 = *v11;
            v19 = (_DWORD *)(a1 + (*v14 >> 1));
            if ( (*v14 & 1) != 0 )
              v18 = *(char **)&v18[*v19];
            ((void (__fastcall *)(_DWORD *, unsigned int))v18)(v19, v2);
          }
LABEL_44:
          *v11 = (char *)sub_6030DA0C;
          *v14 = 0;
          *v17 = 0;
          v32 = *v11;
          v33 = (_DWORD *)(a1 + (*v14 >> 1));
          if ( (*v14 & 1) != 0 )
            v32 = *(char **)&v32[*v33];
          ((void (__fastcall *)(_DWORD *, unsigned int))v32)(v33, v2);
          result = (unsigned __int8)*v17 + 1;
          *v17 = result;
        }
      }
      return result;
    }
  }
  v20 = v2;
  while ( v20 >= 1 )
  {
    --v20;
    if ( !((*(unsigned __int8 *)result & (unsigned int)(1 << v20)) >> v20) )
    {
      result = 0;
      if ( (unsigned int)v20 >= 8 )
        v20 = 0;
      v21 = a1 + 8 * v20;
      v22 = FIELD_U32(v21, 7248);
      if ( !FIELD_U32(v21, 7252) )
        result = 1;
      v23 = v22 == (_DWORD)sub_6030DA0C;
      if ( (int (*)())v22 == sub_6030DA0C )
      {
        result |= (FIELD_U32(v21, 7252) & 1 | v22) == 0;
        v23 = result == 1;
      }
      if ( v23 )
      {
        v24 = v2;
        if ( v2 >= 8 )
          v24 = 0;
        v25 = a1 + 8 * v24;
        v26 = FIELD_U32(v25, 7248);
        v11 = (char **)(v25 + 7248);
        result = v26;
        v14 = (int *)(v11 + 1);
        v27 = v11[1];
        v28 = (unsigned __int8)v27 & 1 | v26;
        if ( (unsigned __int8)v27 & 1 | v26 )
          v28 = 1;
        v29 = (v27 != 0) & (unsigned __int8)v28;
        if ( (int (*)())result != sub_6030DA0C || v29 == 1 )
        {
          v17 = (_BYTE *)(a1 + v24 + 7592);
          if ( (result != 0) | v29 )
          {
            *v17 = -1;
            v30 = *v11;
            v31 = (_DWORD *)(a1 + (*v14 >> 1));
            if ( (*v14 & 1) != 0 )
              v30 = *(char **)&v30[*v31];
            ((void (__fastcall *)(_DWORD *, unsigned int))v30)(v31, v2);
          }
          goto LABEL_44;
        }
      }
      return result;
    }
  }
  return result;
}
