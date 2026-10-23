/* sub_60850120
 * address: 0x60850120   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60850120(_DWORD *a1, int a2)
{
  int v3; // r0
  int (*v4)(); // r1

  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 84))(a2);
  if ( v3 == 3 )
  {
    v4 = sub_6085028C;
  }
  else if ( v3 == 2 )
  {
    v4 = sub_608502A0;
  }
  else
  {
    v4 = 0;
    if ( v3 == 1 )
      v4 = (int (*)())sub_60850240;
  }
  *a1 = 0;
  a1[1] = v4;
  a1[2] = 0;
  return 0;
}
