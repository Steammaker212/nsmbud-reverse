/* sub_6030DA0C
 * address: 0x6030DA0C   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6030DA0C(int result, unsigned int a2)
{
  int v2; // r2
  _BYTE *v3; // r2
  int v4; // r3
  int v5; // t1
  int v6; // r5
  int v8; // r1
  int v9; // r7
  int v10; // r2
  int *v11; // r2
  int v12; // r3
  int v13; // t1
  int v14; // r6
  unsigned int v15; // r3
  int (__fastcall *v16)(int, unsigned int); // r1
  int (__fastcall **v17)(int, unsigned int); // r6
  int (__fastcall *v18)(int, unsigned int); // t1
  char *v19; // r2
  int *v20; // r9
  char v21; // r3
  int v22; // r2
  _BYTE *v23; // r8
  int (__fastcall *v24)(int, unsigned int); // r2
  _DWORD *v25; // r0
  int (__fastcall *v26)(int, unsigned int); // r0
  char v27; // r3
  int v28; // r2
  int (__fastcall *v29)(int, unsigned int); // r2
  _DWORD *v30; // r0
  int (__fastcall *v31)(int, unsigned int); // r2
  _DWORD *v32; // r0

  v2 = result;
  if ( a2 < 8 )
    v2 = result + a2;
  v5 = FIELD_U8(v2, 7592);
  v3 = (_BYTE *)(v2 + 7592);
  v4 = v5;
  if ( v5 != 255 )
  {
    if ( !v4 )
    {
      FIELD_U32(result, 80) = FIELD_U32(result, 80) & ~(1 << a2)
                               | (((unsigned __int8)((FIELD_U32(result, 80) & (1 << a2)) >> a2) ^ 1) << a2);
      result = (unsigned __int8)*v3 + 1;
      *v3 = result;
      return result;
    }
    v6 = result;
    v8 = 1 << a2;
    v9 = dword_60AF1EC0[(unsigned __int8)((FIELD_U32(result, 80) & (1 << a2)) >> a2)];
    result = a2;
    if ( a2 >= 8 )
      result = 0;
    v10 = v6 + 4 * result;
    v13 = FIELD_U32(v10, 7536);
    v11 = (int *)(v10 + 7536);
    v12 = v13;
    if ( v13 != v9 )
    {
      result = dword_60AFE3EC[(unsigned __int8)(FIELD_U8(v6, 7606) & v8) >> a2] + v12;
      *v11 = result;
      return result;
    }
    v14 = v6 + 8 * result;
    v15 = (unsigned __int8)(FIELD_U8(v6, 7604) & v8);
    v18 = *(int (__fastcall **)(int, unsigned int))(v14 + 7248);
    v17 = (int (__fastcall **)(int, unsigned int))(v14 + 7248);
    v16 = v18;
    v20 = (int *)(v17 + 1);
    v19 = (char *)v17[1];
    if ( (unsigned __int8)(v15 >> a2) )
    {
      v21 = (unsigned __int8)v19 & 1 | (unsigned __int8)v16;
      if ( (unsigned int)v17[1] & 1 | (unsigned int)v16 )
        v21 = 1;
      v22 = (v19 != 0) & (unsigned __int8)v21;
      if ( v16 != sub_6030C3AC || v22 == 1 )
      {
        v23 = (_BYTE *)(v6 + result + 7592);
        if ( (v16 != 0) | v22 )
        {
          *v23 = -1;
          v24 = *v17;
          v25 = (_DWORD *)(v6 + (*v20 >> 1));
          if ( (*v20 & 1) != 0 )
            v24 = *(int (__fastcall **)(int, unsigned int))((char *)v24 + *v25);
          v24((int)v25, a2);
        }
        v26 = sub_6030C3AC;
LABEL_30:
        *v17 = v26;
        *v20 = 0;
        *v23 = 0;
        v31 = *v17;
        v32 = (_DWORD *)(v6 + (*v20 >> 1));
        if ( (*v20 & 1) != 0 )
          v31 = *(int (__fastcall **)(int, unsigned int))((char *)v31 + *v32);
        v31((int)v32, a2);
        result = (unsigned __int8)*v23 + 1;
        *v23 = result;
      }
    }
    else
    {
      v27 = (unsigned __int8)v19 & 1 | (unsigned __int8)v16;
      if ( (unsigned int)v17[1] & 1 | (unsigned int)v16 )
        v27 = 1;
      v28 = (v19 != 0) & (unsigned __int8)v27;
      if ( v16 != sub_6030C2DC || v28 == 1 )
      {
        v23 = (_BYTE *)(v6 + result + 7592);
        if ( (v16 != 0) | v28 )
        {
          *v23 = -1;
          v29 = *v17;
          v30 = (_DWORD *)(v6 + (*v20 >> 1));
          if ( (*v20 & 1) != 0 )
            v29 = *(int (__fastcall **)(int, unsigned int))((char *)v29 + *v30);
          v29((int)v30, a2);
        }
        v26 = sub_6030C2DC;
        goto LABEL_30;
      }
    }
  }
  return result;
}
