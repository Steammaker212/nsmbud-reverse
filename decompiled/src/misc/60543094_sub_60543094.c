/* sub_60543094
 * address: 0x60543094   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60543094(int result, _DWORD *a2)
{
  if ( FIELD_U8(result, 3584) )
  {
    if ( *(_BYTE *)(FIELD_U32(result, 3552) + 208) )
      return sub_60473B88((_DWORD *)(result + 4), a2, 0);
  }
  return result;
}
