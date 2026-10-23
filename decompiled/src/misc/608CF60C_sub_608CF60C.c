/* sub_608CF60C
 * address: 0x608CF60C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CF60C(int a1, int a2, int a3, int a4)
{
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1) == 1 )
    return sub_608D0338(a1 + 20, a2, a3, a4);
  else
    return sub_608CF998(a1, a2, a3, a4);
}
