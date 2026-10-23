/* sub_6041FD48
 * address: 0x6041FD48   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6041FD48(int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // r5
  _DWORD *v6; // r7
  int v7; // r6
  int v8; // r0
  int v9; // r1
  int v10; // r3
  int v11; // r7
  _DWORD *v13; // r0
  int v14; // r1
  _DWORD *v15; // r4
  int v16; // r1
  int v17; // r1
  int v18; // r2

  v3 = a2;
  if ( !a2 )
  {
    a3[1] = 0;
    a3[2] = 0;
    a3[3] = 0;
    return a3;
  }
  v6 = a3 + 4;
  (*(void (__fastcall **)(_DWORD *))(a3[4] + 12))(a3 + 4);
  (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(a3 + 4);
  v7 = a3[5];
  (*(void (__fastcall **)(_DWORD *))(v3[4] + 12))(v3 + 4);
  v8 = v3[5];
  if ( v7 == v8 )
  {
LABEL_7:
    if ( v3 != a3 )
    {
      a3[2] = v3[2];
      a3[1] = v3[1];
      a3[3] = v3[3];
      (*(void (__fastcall **)(_DWORD *))(*v3 + 8))(v3);
      v3 = a3;
    }
  }
  else
  {
    v9 = a3[5];
    v10 = 0;
    while ( 1 )
    {
      v11 = *(unsigned __int8 *)(v9 + v10);
      if ( v11 != *(unsigned __int8 *)(v8 + v10) )
        break;
      if ( *(_BYTE *)(v9 + v10) )
      {
        if ( ++v10 < 0x80000 )
          continue;
      }
      goto LABEL_7;
    }
    if ( v11 - *(unsigned __int8 *)(v8 + v10) < 0 )
      v3[1] = sub_6041FD48(a1, v3[1], a3);
    else
      v3[2] = sub_6041FD48(a1, v3[2], a3);
  }
  v13 = (_DWORD *)v3[2];
  if ( v13 && (v13[3] & 1) == 0 && ((v14 = v3[1]) == 0 || (FIELD_U8(v14, 12) & 1) != 0) )
  {
    v3[2] = v13[1];
    v13[1] = v3;
    v13[3] = v3[3];
    v3[3] = 0;
  }
  else
  {
    v13 = v3;
  }
  v15 = (_DWORD *)v13[1];
  if ( v15 )
  {
    if ( (v15[3] & 1) != 0 || (v16 = v15[1]) == 0 || (FIELD_U8(v16, 12) & 1) != 0 )
    {
      v17 = v13[1];
    }
    else
    {
      v13[1] = v15[2];
      v15[2] = v13;
      v15[3] = v13[3];
      v13[3] = 0;
      v13 = v15;
      v17 = v15[1];
      if ( !v17 )
        return v15;
    }
    if ( (FIELD_U8(v17, 12) & 1) == 0 )
    {
      v18 = v13[2];
      if ( v18 )
      {
        if ( (FIELD_U8(v18, 12) & 1) == 0 )
        {
          v13[3] ^= 1u;
          FIELD_U32(v17, 12) ^= 1u;
          *(_DWORD *)(v13[2] + 12) ^= 1u;
        }
      }
    }
  }
  return v13;
}
