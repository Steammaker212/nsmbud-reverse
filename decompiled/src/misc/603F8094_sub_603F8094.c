/* sub_603F8094
 * address: 0x603F8094   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F8094(int result)
{
  if ( !dword_60C99DD4 )
  {
    dword_60C99DD4 = result;
    FIELD_U8(result, 192) = 1;
  }
  return result;
}
