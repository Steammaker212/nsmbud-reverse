/* sub_60764200
 * address: 0x60764200   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60764200(_DWORD *a1, int a2, int a3, int a4)
{
  bool v4; // zf
  int result; // r0
  int v7; // r1
  int v8; // lr
  int v9; // r2
  int v10; // r12
  int v11; // r4

  v4 = a2 == 0;
  result = 0;
  if ( a2 )
  {
    a4 = a1[1773];
    v4 = a4 == 0;
  }
  if ( !v4 )
  {
    v7 = FIELD_U32(a2, 8);
    v8 = a1[1771];
    v9 = a1[1772];
    v10 = a1[1770];
    while ( 1 )
    {
      v11 = v8;
      if ( v9 < v8 )
        v11 = 0;
      if ( *(_DWORD *)(v10 - 4 * v11 + 4 * v9) == v7 )
        break;
      ++v9;
      if ( !--a4 )
        return result;
    }
    return 1;
  }
  return result;
}
