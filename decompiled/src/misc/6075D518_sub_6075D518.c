/* sub_6075D518
 * address: 0x6075D518   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075D518(_DWORD *a1, int a2)
{
  int v2; // r1

  if ( a2 >= 3 )
    a2 = 3;
  a1[137] = a2;
  v2 = a1[120];
  a1[120] = 0;
  return (*(int (__fastcall **)(_DWORD *, int, _DWORD))(*a1 + 176))(a1, v2, 0);
}
