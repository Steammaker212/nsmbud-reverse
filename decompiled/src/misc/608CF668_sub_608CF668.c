/* sub_608CF668
 * address: 0x608CF668   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CF668(int a1, int a2, int a3)
{
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1) == 1 )
    return sub_608D06A4(a1 + 20, a2, a3);
  else
    return sub_608CFA04(a1, a2, a3);
}
