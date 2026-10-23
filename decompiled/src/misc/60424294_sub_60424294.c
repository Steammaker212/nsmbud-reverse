/* sub_60424294
 * address: 0x60424294   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60424294(int result)
{
  if ( *(_DWORD *)result )
    *(_DWORD *)(*(_DWORD *)result + 20) = 0;
  return result;
}
