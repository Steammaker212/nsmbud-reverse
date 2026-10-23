/* sub_6084376C
 * address: 0x6084376C   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084376C(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0
  int v9; // r10
  bool v10; // zf
  int v11; // r9
  int v12; // r8
  _DWORD v14[10]; // [sp+10h] [bp-68h] BYREF
  _DWORD v15[16]; // [sp+38h] [bp-40h] BYREF

  result = a5;
  if ( a5 >= 2 )
  {
    result = a5 - 1;
    v9 = 0;
    do
    {
      v10 = a3 == 1;
      if ( a3 == 1 )
        v10 = a4 == 1;
      if ( v10 )
        break;
      memset(v15, 0, 36);
      sub_60998FA0(v15);
      v11 = 1;
      v15[4] = a4;
      v12 = 1;
      v15[3] = a3;
      LOWORD(v15[6]) = v9;
      if ( a3 >= 2 )
        v11 = a3 / 2;
      if ( a4 >= 2 )
        v12 = a4 / 2;
      memset(v14, 0, 36);
      sub_60998FA0(v14);
      ++v9;
      v14[4] = v12;
      v14[3] = v11;
      LOWORD(v14[6]) = v9;
      sub_60835E70(a1, a2, (int)v14, a2, (int)v15, 1);
      result = a5 - 1;
      a4 = v12;
      a3 = v11;
    }
    while ( v9 < a5 - 1 );
  }
  return result;
}
