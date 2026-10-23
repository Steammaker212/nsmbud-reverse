/* sub_60999968
 * address: 0x60999968   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60999968(_DWORD *a1, _DWORD *a2, int *a3)
{
  int v6; // r0
  int v7; // r1
  int v8; // r7
  int v9; // r6
  unsigned int v10; // r5
  int v12; // [sp+8h] [bp+0h] BYREF
  int v13; // [sp+Ch] [bp+4h]
  int v14; // [sp+10h] [bp+8h]
  int v15; // [sp+14h] [bp+Ch]

  v15 = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  sub_6083D5B0(&v12);
  v13 = *a3;
  a1[4] = sub_608352A0(a2, (int)&v12);
  if ( *((_BYTE *)a3 + 29) )
  {
    *a1 |= 2u;
  }
  else
  {
    v6 = a3[1];
    a1[3] = v6;
    v7 = a3[2];
    a1[5] = v7;
    v12 = v6;
    a1[1] = ((int (__fastcall *)(int, int, int))a3[5])(72 * v7, 4, a3[6]);
    a1[2] = ((int (__fastcall *)(int, int, int))a3[5])(16 * a1[5], 4, a3[6]);
    if ( a1[5] )
    {
      v8 = 0;
      v9 = 0;
      v10 = 0;
      do
      {
        sub_608353A4(a1[1] + v8);
        sub_608353C0(a1[1] + v8, a2, &v12, (_DWORD *)a3[3], a3[4] + ((a1[3] + a1[4] - 1) & -a1[4]) * v10);
        sub_60835528(a1[1] + v8, a1[2] + v9);
        ++v10;
        v8 += 72;
        v9 += 16;
      }
      while ( v10 < a1[5] );
    }
    if ( *((_BYTE *)a3 + 28) )
    {
      *a1 |= 1u;
      a1[9] = ((int (__fastcall *)(int, int, int))a3[5])(4, 4, a3[6]);
      a1[10] = ((int (__fastcall *)(int, int, int))a3[5])(4, 4, a3[6]);
    }
  }
  return 1;
}
