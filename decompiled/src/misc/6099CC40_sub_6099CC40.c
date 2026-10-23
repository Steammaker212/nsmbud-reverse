/* sub_6099CC40
 * address: 0x6099CC40   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6099CC40(_DWORD *a1, int a2)
{
  int v3; // r3
  int v4; // r1
  _DWORD *v5; // r2
  unsigned int v6; // r12
  unsigned int *v7; // r5
  unsigned int result; // r0
  unsigned int v9; // r6
  unsigned int v10; // r7
  unsigned int v11; // r6
  unsigned int v12; // r7
  unsigned int v13; // r1
  unsigned int v14; // r2
  unsigned int v15; // r1

  v3 = -a2;
  v4 = a2 - 1;
  v5 = (_DWORD *)a1[32];
  v6 = a1[7];
  if ( v5 == a1 + 31 )
  {
    result = 0;
    v9 = v6;
  }
  else
  {
    v7 = v5 - 2;
    result = 0;
    v9 = v6;
    do
    {
      v10 = (v4 + v9) & v3;
      v11 = *v7;
      if ( v10 < *v7 )
      {
        v12 = v11 - v10;
        if ( result < v12 )
          result = v12;
      }
      v5 = (_DWORD *)v5[1];
      v9 = v7[1] + v11;
      v7 = v5 - 2;
    }
    while ( v5 - 2 != a1 + 29 );
  }
  v13 = (v4 + v9) & v3;
  v14 = a1[8] + v6;
  if ( v13 < v14 )
  {
    v15 = v14 - v13;
    if ( result < v15 )
      return v15;
  }
  return result;
}
