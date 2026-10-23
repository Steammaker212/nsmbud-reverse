/* sub_608CF59C
 * address: 0x608CF59C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CF59C(_DWORD *a1, int a2, int a3, int a4)
{
  if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 64))(a1) == 1 )
    return sub_608CFE44(a1 + 5, a2, a3, a4, a1[15], a1);
  else
    return sub_608CF91C(a1, a2, a3, a4);
}
