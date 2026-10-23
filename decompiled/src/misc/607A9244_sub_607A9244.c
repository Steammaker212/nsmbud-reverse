/* sub_607A9244
 * address: 0x607A9244   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A9244(_BYTE *a1)
{
  bool v1; // zf

  v1 = (a1[1205] & 0x40) == 0;
  if ( (a1[1205] & 0x40) == 0 )
    v1 = (a1[1219] & 8) == 0;
  if ( v1 )
    return sub_6076DD50(a1);
  else
    return 0;
}
