/* sub_60511584
 * address: 0x60511584   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60511584(int result, _DWORD *a2)
{
  bool v2; // zf

  v2 = FIELD_U8(result, 9572) == 0;
  if ( FIELD_U8(result, 9572) )
    v2 = FIELD_U8(result, 9574) == 0;
  if ( !v2 )
    return sub_60473B88((_DWORD *)(result + 56), a2, 0);
  return result;
}
