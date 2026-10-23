/* sub_608DEEE0
 * address: 0x608DEEE0   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DEEE0(int *a1, int a2, int (__fastcall *a3)(_DWORD, int))
{
  int v4; // r1
  _DWORD *v6; // r7
  int v7; // r4
  int v8; // r6
  int v9; // r5
  int v10; // r0

  v4 = *a1;
  if ( !*a1 )
    return -1;
  v6 = a1 + 2;
  if ( v4 <= 1 )
  {
    v8 = 0;
LABEL_12:
    if ( a3(*(_DWORD *)(*v6 + 4 * v8), a2) )
      return -1;
    return v8;
  }
  else
  {
    v7 = v4 - 1;
    v8 = 0;
    while ( 1 )
    {
      v9 = (v8 + v7) / 2;
      v10 = a3(*(_DWORD *)(*v6 + 4 * v9), a2);
      if ( !v10 )
        return (v8 + v7) / 2;
      if ( v10 < 0 )
        v8 = v9 + 1;
      else
        v7 = (v8 + v7) / 2;
      if ( v8 >= v7 )
        goto LABEL_12;
    }
  }
}
