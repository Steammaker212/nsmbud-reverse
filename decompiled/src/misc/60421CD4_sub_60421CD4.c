/* sub_60421CD4
 * address: 0x60421CD4   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60421CD4(int result)
{
  if ( !dword_60C9BB38 )
  {
    dword_60C9BB38 = result;
    FIELD_U8(result, 112) = 1;
  }
  return result;
}
