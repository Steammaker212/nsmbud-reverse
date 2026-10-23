/* sub_60926F90
 * address: 0x60926F90   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60926F90(_DWORD *a1, int a2)
{
  int v4; // r6
  unsigned int v5; // r0
  int v6; // r2
  int v7; // r7
  unsigned int v8; // r0
  unsigned __int16 *v9; // r1
  _DWORD *v10; // r6
  unsigned int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  int v14; // r2
  _DWORD *v16; // r2
  _DWORD *v17; // r7
  void *v18; // r4
  const void *v19; // r9
  int v20; // r0
  signed int v21; // r7
  bool v22; // cc
  signed int v23; // r0

  v4 = 0;
  if ( a2 )
  {
    v5 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 88))(a2);
    v6 = a1[4];
    if ( a1[3] > v5 )
      v6 += 4 * v5;
    if ( FIELD_U16(v6, 2) )
    {
      v7 = 0;
      while ( 1 )
      {
        v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 88))(a2);
        v9 = (unsigned __int16 *)a1[4];
        v10 = (_DWORD *)a1[50];
        if ( a1[3] > v8 )
          v9 += 2 * v8;
        v11 = v7 + *v9;
        if ( a1[49] > v11 )
          v10 += 41 * v11;
        v12 = v10[21];
        if ( v12 != -2 && v12 < 0 )
          break;
        ++v7;
        v13 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 88))(a2);
        v14 = a1[4];
        if ( a1[3] > v13 )
          v14 += 4 * v13;
        if ( v7 >= FIELD_U16(v14, 2) )
          return 0;
      }
      v16 = (_DWORD *)a1[6];
      if ( a1[5] > v11 )
        v16 += v11;
      *v16 = a2;
      v17 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a2 + 64))(a2);
      v18 = (void *)v10[11];
      (*(void (__fastcall **)(_DWORD *))(*v17 + 12))(v17);
      v19 = (const void *)v17[1];
      if ( v18 != v19 )
      {
        (*(void (__fastcall **)(_DWORD *))(*v17 + 12))(v17);
        v20 = v17[1];
        v21 = 0;
        while ( *(_BYTE *)(v20 + v21) )
        {
          if ( !*(_BYTE *)(v20 + v21 + 1) )
          {
            ++v21;
            break;
          }
          if ( !*(_BYTE *)(v20 + v21 + 2) )
          {
            v21 += 2;
            break;
          }
          v22 = v21 + 2 < 0x80000;
          v21 += 3;
          if ( !v22 )
          {
            v21 = 0;
            break;
          }
        }
        v23 = v10[12];
        if ( v21 >= v23 )
          v21 = v23 - 1;
        qmemcpy(v18, v19, v21);
        *((_BYTE *)v18 + v21) = 0;
      }
      sub_60940904(v10 + 7);
      return 1;
    }
  }
  return v4;
}
