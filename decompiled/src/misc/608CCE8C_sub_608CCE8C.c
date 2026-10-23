/* sub_608CCE8C
 * address: 0x608CCE8C   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CCE8C(_DWORD *a1, int a2, unsigned int a3, int *a4)
{
  int v6; // r0
  unsigned int v7; // r1
  int v8; // r11
  int *v9; // r10
  _DWORD *v10; // r7
  int v11; // r0
  int v12; // r4
  _DWORD *v13; // r8
  int v14; // r0
  unsigned int v16; // [sp+0h] [bp-38h]
  int v18; // [sp+Ch] [bp-2Ch]

  v6 = sub_608B0CEC((int)a4);
  v16 = a3;
  v7 = 2 * v6 + 792;
  if ( !v6 )
    v7 = 768;
  v18 = a3 / v7;
  if ( (int)(a3 / v7) >= 1 )
  {
    v8 = 0;
    v9 = (int *)(a2 + 428);
    v10 = (_DWORD *)(a2 + 768 * v18);
    do
    {
      sub_608CB6D0((int)(v9 - 107), (int)a1);
      v11 = *v9;
      *v9 = a1[6];
      FIELD_U32(v11, 4) = a1 + 6;
      *(_DWORD *)(a1[6] + 4) = v9;
      a1[6] = v11;
      v12 = sub_608B0CEC((int)a4);
      if ( v12 )
      {
        *v10 = 0;
        v10[1] = 0;
        v10[2] = 0;
        sub_608B0D44(v10, v10 + 3, v12, (int)a4);
        *(_DWORD *)((char *)v10 + v12 + 12) = 0;
        v13 = (_DWORD *)((char *)v10 + v12 + 12);
        v13[1] = 0;
        v13[2] = 0;
        sub_608B0D44(v13, v13 + 3, v12, (int)a4);
        sub_608B0420((int)(v9 - 107), 0, (int)v10, (int)v13);
        v10 = (_DWORD *)((char *)v13 + v12 + 12);
      }
      ++v8;
      v9 += 192;
    }
    while ( v8 < v18 );
  }
  *a1 = a2;
  a1[1] = v16;
  v14 = *a4;
  a1[3] = a4[1];
  a1[2] = v14;
  return v18;
}
