/* sub_607AEC78
 * address: 0x607AEC78   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AEC78(int a1)
{
  if ( (FIELD_U8(a1, 6902) & 4) != 0 && (FIELD_U8(a1, 6914) & 4) == 0 )
    ((void (__fastcall *)(int))loc_607BC154)(a1);
  return sub_6076FCC0(a1);
}
