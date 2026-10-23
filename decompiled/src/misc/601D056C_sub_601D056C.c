/* sub_601D056C
 * address: 0x601D056C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601D056C(int a1, int *a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r12
  int v5; // lr
  int i; // r4
  _DWORD *v7; // r1
  int v8; // r5
  bool v9; // zf

  v2 = FIELD_U32(a1, 24);
  if ( v2 >= 1 )
  {
    v3 = *a2;
    v4 = a2[1];
    v5 = a2[2];
    for ( i = 0; i < v2; ++i )
    {
      if ( v2 <= (unsigned int)i )
        break;
      v7 = *(_DWORD **)(FIELD_U32(a1, 32) + 4 * i);
      if ( !v7 )
        break;
      v8 = v7[271];
      v9 = v3 == v8;
      if ( v3 == v8 )
        v9 = v4 == v7[272];
      if ( v9 && v5 == v7[273] )
        return v7;
    }
  }
  return 0;
}
