/* sub_608C64DC
 * address: 0x608C64DC   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_608C64DC(_DWORD *a1, int a2, int a3, int a4)
{
  unsigned int v4; // r9
  _DWORD *v5; // lr
  unsigned int v6; // r3
  signed int v7; // r12
  _DWORD *v8; // r5
  unsigned int v9; // r7
  signed int v10; // r4
  _DWORD *v11; // r6
  unsigned int v12; // r7
  int v13; // r9
  int v14; // r8

  v4 = a4 + 3;
  v5 = (_DWORD *)((a2 + 3) & 0xFFFFFFFC);
  v6 = (a4 + 3) & 0xFFFFFFFC;
  v7 = (a2 + a3 - (int)v5) / v6;
  if ( v7 >= 1 )
  {
    v8 = (_DWORD *)*a1;
    v9 = ((a2 + a3 - (int)v5) / v6) & 3;
    v10 = 0;
    if ( (v7 & 3) != 0 )
    {
      v11 = (_DWORD *)((a2 + 3) & 0xFFFFFFFC);
      do
      {
        --v9;
        ++v10;
        *v11 = v8;
        v5 = (_DWORD *)((char *)v11 + v6);
        *a1 = v11;
        v8 = v11;
        v11 = (_DWORD *)((char *)v11 + v6);
      }
      while ( v9 );
    }
    if ( (unsigned int)(v7 - 1) >= 3 )
    {
      v12 = v4 >> 2;
      v13 = 2 * (v4 >> 2);
      v14 = 3 * v12;
      do
      {
        v10 += 4;
        *v5 = v8;
        *a1 = v5;
        *(_DWORD *)((char *)v5 + v6) = v5;
        *a1 = (char *)v5 + v6;
        v5[v13] = (char *)v5 + v6;
        *a1 = &v5[v13];
        v5[3 * v12] = &v5[v13];
        v8 = &v5[v14];
        *a1 = &v5[v14];
        v5 = (_DWORD *)((char *)v5 + v6 + v6 + v6 + v6);
      }
      while ( v10 < v7 );
    }
  }
  a1[1] = a2;
  a1[2] = a3;
  return v7;
}
