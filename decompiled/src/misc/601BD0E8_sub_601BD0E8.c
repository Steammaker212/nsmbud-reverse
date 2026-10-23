/* sub_601BD0E8
 * address: 0x601BD0E8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601BD0E8(_DWORD *a1)
{
  if ( (a1[66] | 1) == 7 )
    return sub_60418548(**(_DWORD **)(*(_DWORD *)(a1[236] + 12) + 12) + 4);
  else
    return sub_60793DA0(*(_DWORD *)(a1[a1[368] + 230] + 4));
}
