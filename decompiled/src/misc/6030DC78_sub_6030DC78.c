/* sub_6030DC78
 * address: 0x6030DC78   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6030DC78(int a1, unsigned int a2)
{
  unsigned int v2; // r4
  int result; // r0
  int v5; // r3
  bool v6; // zf
  char v7; // r3
  int v8; // r6
  int (__fastcall *v9)(int, unsigned int); // r1
  int (__fastcall **v10)(int, unsigned int); // r6
  int (__fastcall *v11)(int, unsigned int); // t1
  char *v12; // r2
  int *v13; // r9
  char v14; // r3
  int v15; // r2
  _BYTE *v16; // r8
  int (__fastcall *v17)(int, unsigned int); // r2
  _DWORD *v18; // r0
  int (__fastcall *v19)(int, unsigned int); // r0
  char v20; // r3
  int v21; // r2
  int (__fastcall *v22)(int, unsigned int); // r2
  _DWORD *v23; // r0
  int (__fastcall *v24)(int, unsigned int); // r2
  _DWORD *v25; // r0

  v2 = a2;
  if ( a2 >= 8 )
    a2 = 0;
  result = a1 + a2;
  v5 = *(unsigned __int8 *)(a1 + a2 + 7568);
  v6 = v5 == 0;
  if ( *(_BYTE *)(a1 + a2 + 7568) )
  {
    v7 = v5 - 1;
    *(_BYTE *)(a1 + a2 + 7568) = v7;
    v6 = v7 == 0;
  }
  if ( v6 )
  {
    v8 = a1 + 8 * a2;
    v11 = *(int (__fastcall **)(int, unsigned int))(v8 + 7248);
    v10 = (int (__fastcall **)(int, unsigned int))(v8 + 7248);
    v9 = v11;
    v13 = (int *)(v10 + 1);
    v12 = (char *)v10[1];
    if ( (FIELD_U8(a1, 7604) & (unsigned int)(1 << v2)) >> v2 )
    {
      v14 = (unsigned __int8)v12 & 1 | (unsigned __int8)v9;
      if ( (unsigned int)v10[1] & 1 | (unsigned int)v9 )
        v14 = 1;
      v15 = (v12 != 0) & (unsigned __int8)v14;
      if ( v9 == sub_6030C3AC && v15 != 1 )
        return result;
      v16 = (_BYTE *)(result + 7592);
      if ( (v9 != 0) | v15 )
      {
        *v16 = -1;
        v17 = *v10;
        v18 = (_DWORD *)(a1 + (*v13 >> 1));
        if ( (*v13 & 1) != 0 )
          v17 = *(int (__fastcall **)(int, unsigned int))((char *)v17 + *v18);
        v17((int)v18, v2);
      }
      v19 = sub_6030C3AC;
    }
    else
    {
      v20 = (unsigned __int8)v12 & 1 | (unsigned __int8)v9;
      if ( (unsigned int)v10[1] & 1 | (unsigned int)v9 )
        v20 = 1;
      v21 = (v12 != 0) & (unsigned __int8)v20;
      if ( v9 == sub_6030C2DC && v21 != 1 )
        return result;
      v16 = (_BYTE *)(result + 7592);
      if ( (v9 != 0) | v21 )
      {
        *v16 = -1;
        v22 = *v10;
        v23 = (_DWORD *)(a1 + (*v13 >> 1));
        if ( (*v13 & 1) != 0 )
          v22 = *(int (__fastcall **)(int, unsigned int))((char *)v22 + *v23);
        v22((int)v23, v2);
      }
      v19 = sub_6030C2DC;
    }
    *v10 = v19;
    *v13 = 0;
    *v16 = 0;
    v24 = *v10;
    v25 = (_DWORD *)(a1 + (*v13 >> 1));
    if ( (*v13 & 1) != 0 )
      v24 = *(int (__fastcall **)(int, unsigned int))((char *)v24 + *v25);
    v24((int)v25, v2);
    result = (unsigned __int8)*v16 + 1;
    *v16 = result;
  }
  return result;
}
