/* sub_606B3858
 * address: 0x606B3858   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B3858(_DWORD *a1)
{
  unsigned int v1; // r5
  unsigned int *v2; // lr
  _DWORD *v3; // r8
  int v4; // r9
  int *v5; // r12
  int v6; // r6
  int *v7; // r7
  int v8; // r4
  int v9; // r6
  _DWORD *v10; // r7
  int v11; // r0
  int v12; // r6

  v1 = a1[22714];
  v3 = a1 + 21609;
  v2 = a1 + 22714;
  v5 = a1 + 21610;
  v4 = *v5;
  v7 = a1 + 21612;
  v6 = a1[21612];
  if ( v6 < *v5 )
  {
    *v7 = v6 + 1;
    v8 = a1[21611] + v6;
    v9 = v8 - v4;
    if ( v8 < v4 )
      v9 = v8;
    if ( v1 >= 0x64 )
      v1 = 0;
    *(_DWORD *)(*v3 + 4 * v9) = &a1[10 * v1 + 21714];
    v6 = *v7;
    v1 = *v2;
  }
  *v2 = v1 + 1;
  v10 = (_DWORD *)*v3;
  if ( v6 >= 1 )
  {
    v11 = v6 + a1[21611] - 1;
    v12 = v11 - *v5;
    if ( v11 < *v5 )
      v12 = v11;
    v10 += v12;
  }
  return sub_606B395C(*v10);
}
