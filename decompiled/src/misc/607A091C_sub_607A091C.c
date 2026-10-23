/* sub_607A091C
 * address: 0x607A091C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A091C(int a1, int a2, int a3)
{
  int v6; // r4

  v6 = 0;
  if ( a2 )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1172))(a1) == 1 )
    {
      sub_60765948(a1, a2, 10);
      v6 = 1;
      if ( a3 == 7 )
        nullsub_43();
    }
  }
  return v6;
}
