/* sub_604752D4
 * address: 0x604752D4   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604752D4(int a1, int a2, _DWORD *a3, int *a4)
{
  int v8; // r6
  int v9; // r4
  int v10; // r0

  v8 = 1;
  if ( *a4 >= 1 )
  {
    v9 = 0;
    do
    {
      v10 = sub_6047488C(a1, a3);
      *(_DWORD *)(a2 + 4 * v9++) = v10;
      a3 += 2;
      v8 = (unsigned __int8)v8 & (v10 != 0);
    }
    while ( v9 < *a4 );
  }
  return v8;
}
