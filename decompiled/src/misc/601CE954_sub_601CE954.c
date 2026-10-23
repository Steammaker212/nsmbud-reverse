/* sub_601CE954
 * address: 0x601CE954   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601CE954(int a1, int a2)
{
  int v2; // r1

  if ( a2 == 1 )
    v2 = 13;
  else
    v2 = 0;
  return (*(int (__fastcall **)(int, int, int, float))(*(_DWORD *)a1 + 336))(a1, v2, -1, 0.0);
}
