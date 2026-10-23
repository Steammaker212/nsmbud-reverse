/* sub_607A51F4
 * address: 0x607A51F4   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607A51F4(_DWORD *a1)
{
  int v2; // r4

  v2 = 0;
  if ( a1[330] == 3 )
  {
    if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 1064))(a1) == 1 )
      return sub_6079D894((int)a1) != 0;
    return 1;
  }
  return v2;
}
