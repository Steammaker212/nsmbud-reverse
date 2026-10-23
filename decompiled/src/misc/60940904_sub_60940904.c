/* sub_60940904
 * address: 0x60940904   size: 684   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__fastcall ***__fastcall sub_60940904(_DWORD *a1))(_DWORD, _DWORD *)
{
  int (__fastcall ***result)(_DWORD, _DWORD *); // r0
  char *v3; // r4
  char *v4; // r6
  int i; // r1
  char *v6; // r8
  signed int v7; // r7
  bool v8; // cc
  int v9; // r8
  int v10; // r10
  _DWORD *v11; // r6
  int v12; // r4
  int v13; // r0
  int v14; // r1
  int j; // r2
  signed int v16; // r0

  result = (int (__fastcall ***)(_DWORD, _DWORD *))a1[18];
  if ( result )
  {
    (*(void (__fastcall **)(_DWORD *))(a1[3] + 12))(a1 + 3);
    (*(void (__fastcall **)(_DWORD *))(a1[3] + 12))(a1 + 3);
    v3 = (char *)a1[4];
    off_60C5CB30[3]();
    v4 = (char *)a1[4];
    if ( v3 == off_60C5CB34 )
    {
LABEL_10:
      a1[14] = -1;
      off_60C5CB30[3]();
      v6 = off_60C5CB34;
      if ( v4 != off_60C5CB34 )
      {
        off_60C5CB30[3]();
        v7 = 0;
        while ( off_60C5CB34[v7] )
        {
          if ( !off_60C5CB34[v7 + 1] )
          {
            ++v7;
            break;
          }
          if ( !off_60C5CB34[v7 + 2] )
          {
            v7 += 2;
            break;
          }
          v8 = v7 + 2 <= 0x7FFFF;
          v7 += 3;
          if ( !v8 )
          {
            v7 = 0;
            break;
          }
        }
        v16 = a1[5];
        if ( v7 >= v16 )
          v7 = v16 - 1;
        qmemcpy(v4, v6, v7);
        v4[v7] = 0;
      }
    }
    else
    {
      for ( i = 1; v4[i - 1] == off_60C5CB34[i - 1]; i += 2 )
      {
        if ( !v4[i - 1] )
          goto LABEL_10;
        if ( i >= 524289 || v4[i] != off_60C5CB34[i] )
          break;
        if ( !v4[i] )
          goto LABEL_10;
      }
      a1[14] = -2;
      v9 = (*(int (__fastcall **)(_DWORD *))(*a1 + 76))(a1);
      if ( v9 >= 1 )
      {
        v10 = 0;
        while ( 1 )
        {
          v11 = (_DWORD *)(*(int (__fastcall **)(_DWORD *, int))(*a1 + 72))(a1, v10);
          (*(void (__fastcall **)(_DWORD *))(a1[3] + 12))(a1 + 3);
          (*(void (__fastcall **)(_DWORD *))(a1[3] + 12))(a1 + 3);
          v12 = a1[4];
          (*(void (__fastcall **)(_DWORD *))(*v11 + 12))(v11);
          v13 = v11[1];
          if ( v12 == v13 )
            break;
          v14 = a1[4];
          for ( j = 1; *(unsigned __int8 *)(v14 + j - 1) == *(unsigned __int8 *)(v13 + j - 1); j += 2 )
          {
            if ( !*(_BYTE *)(v14 + j - 1) )
              goto LABEL_30;
            if ( j >= 524289 || *(unsigned __int8 *)(v14 + j) != *(unsigned __int8 *)(v13 + j) )
              break;
            if ( !*(_BYTE *)(v14 + j) )
              goto LABEL_30;
          }
          if ( ++v10 >= v9 )
            goto LABEL_36;
        }
LABEL_30:
        a1[14] = v10;
      }
    }
LABEL_36:
    result = (int (__fastcall ***)(_DWORD, _DWORD *))a1[17];
    if ( result )
      return (int (__fastcall ***)(_DWORD, _DWORD *))(**result)(result, a1);
  }
  return result;
}
