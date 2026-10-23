/* sub_60445224
 * address: 0x60445224   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60445224(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v6; // r4
  int v7; // r7
  int result; // r0
  int v9; // r4
  int v10; // r7
  int v11; // r5
  int v12; // r0
  int v13; // r0
  int *v14; // r10
  int v15; // r9
  int v16; // t1
  int v17; // r0
  int v18; // [sp+8h] [bp-30h]
  int v19; // [sp+Ch] [bp-2Ch]
  int v20; // [sp+10h] [bp-28h]

  v6 = a1[224];
  v7 = a1[225];
  sub_6090E560(a3[8], a3[10], a3[3]);
  result = a1[12];
  if ( v6 > a2 )
    v7 += a2 << 7;
  v19 = a1[12];
  if ( result )
  {
    v9 = v7 + 52;
    v10 = v7 + 4;
    v11 = 0;
    v18 = a1[13];
    do
    {
      v12 = a1[220];
      if ( v12 )
        (*(void (__fastcall **)(int, unsigned int, int, _DWORD *))(*(_DWORD *)v12 + 4))(v12, a2, v11, a3);
      v20 = v11;
      v13 = *(_DWORD *)(v18 + 12 * v11);
      if ( v13 )
      {
        v14 = *(int **)(v18 + 12 * v11 + 8);
        v15 = 4 * v13;
        do
        {
          v16 = *v14++;
          (*(void (__fastcall **)(int, _DWORD, unsigned int, int, int, _DWORD *))(*(_DWORD *)v16 + 24))(
            v16,
            a3[10],
            a2,
            v10,
            v9,
            a1);
          v15 -= 4;
        }
        while ( v15 );
      }
      v17 = a1[220];
      if ( v17 )
        (*(void (__fastcall **)(int, unsigned int, int, _DWORD *))(*(_DWORD *)v17 + 12))(v17, a2, v11, a3);
      result = v19;
      ++v11;
    }
    while ( v20 + 1 != v19 );
  }
  return result;
}
