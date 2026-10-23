/* sub_60153898
 * address: 0x60153898   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60153898(_DWORD *a1, _DWORD *a2, __int64 *a3, _QWORD *a4)
{
  __int64 v7; // r0
  __int64 v8; // r2
  signed int v9; // r6
  int v11; // r1
  int v12; // r3
  _DWORD *v13; // r1
  int v14; // r0
  _DWORD *v15; // r8
  int v16; // t1
  _DWORD *v17; // r1
  _DWORD *v18; // r0
  int v19; // r2
  int v20; // t1
  int v21; // t1

  if ( !a2[5] && !a2[6] )
  {
    v9 = 0;
    if ( (_DWORD *)a1[5] != a2 + 4 )
      return v9;
  }
  v7 = *a4;
  v8 = *a3;
  v9 = 0;
  if ( v8 == *a4 )
    return v9;
  v11 = BYTE4(v7) & 0xF;
  v12 = BYTE4(v8) & 0xF;
  if ( !v12 || v11 )
  {
    if ( v12 || !v11 )
      return v9;
    if ( (unsigned int)(unsigned __int16)v8 - 2 > 2 )
    {
      v17 = a2 + 10;
      if ( a2[11] || a2[12] || (_DWORD *)a1[11] == v17 )
      {
        v18 = a1 + 10;
        v19 = a1[10];
        goto LABEL_32;
      }
    }
    else
    {
      v17 = a2 + 16;
      if ( a2[17] || a2[18] || (_DWORD *)a1[14] == v17 )
      {
        v18 = a1 + 13;
        v19 = a1[13];
LABEL_32:
        (*(void (__fastcall **)(_DWORD *, _DWORD *))(v19 + 4))(v18, v17);
      }
    }
    v9 = 1;
    if ( !a2[8] && !a2[9] && (_DWORD *)a1[8] != a2 + 7 )
    {
      v21 = a1[7];
      v15 = a1 + 7;
      v14 = v21;
      goto LABEL_37;
    }
    return v9;
  }
  v13 = a2 + 7;
  if ( a2[8] || a2[9] || (_DWORD *)a1[8] == v13 )
  {
    (*(void (__fastcall **)(_DWORD *, _DWORD *))(a1[7] + 4))(a1 + 7, v13);
    LODWORD(v7) = *(_DWORD *)a4;
  }
  if ( (unsigned int)(unsigned __int16)v7 - 2 > 2 )
  {
    v9 = 1;
    if ( !a2[11] && !a2[12] && (_DWORD *)a1[11] != a2 + 10 )
    {
      v20 = a1[10];
      v15 = a1 + 10;
      v14 = v20;
      goto LABEL_37;
    }
    return v9;
  }
  v9 = 1;
  if ( a2[17] || a2[18] || (_DWORD *)a1[14] == a2 + 16 )
    return v9;
  v16 = a1[13];
  v15 = a1 + 13;
  v14 = v16;
LABEL_37:
  (*(void (__fastcall **)(_DWORD *))(v14 + 8))(v15);
  return 1;
}
