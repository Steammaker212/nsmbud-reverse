/* sub_606B35BC
 * address: 0x606B35BC   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B35BC(_DWORD *a1)
{
  int result; // r0
  bool v3; // zf
  int v4; // r5
  int v5; // r1
  int v6; // r2
  int *v7; // r8
  int v8; // r5
  _DWORD *v9; // r6
  int *v10; // r7
  _DWORD *v11; // r4
  int v12; // r0

  result = dword_60C995D0;
  v3 = dword_60C995D0 == 0;
  if ( dword_60C995D0 )
  {
    result = FIELD_U32(dword_60C995D0, 32);
    v3 = result == 0;
  }
  if ( v3 )
  {
    if ( a1[7] )
    {
      v4 = 0;
      do
      {
        v5 = a1[5];
        v6 = a1[6];
        if ( v4 + v6 >= v5 )
          v6 -= v5;
        sub_606B2DE0(*(_DWORD *)(a1[4] + 4 * (v4 + v6)));
        ++v4;
      }
      while ( v4 != a1[7] );
    }
    v7 = a1 + 21612;
    result = a1[21612];
    if ( result )
    {
      v8 = 0;
      v9 = a1 + 21610;
      v10 = a1 + 21611;
      v11 = a1 + 21609;
      do
      {
        v12 = *v10;
        if ( v8 + *v10 >= *v9 )
          v12 -= *v9;
        sub_606B39DC(*(_DWORD *)(*v11 + 4 * (v8 + v12)));
        result = *v7;
        ++v8;
      }
      while ( v8 != *v7 );
    }
  }
  return result;
}
