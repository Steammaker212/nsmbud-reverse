/* sub_605426E8
 * address: 0x605426E8   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605426E8(int result)
{
  _DWORD *v1; // r4

  if ( !FIELD_U8(result, 3608) )
  {
    v1 = (_DWORD *)(result + 60);
    *(_BYTE *)(FIELD_U32(result, 20) + 64) |= 1u;
    sub_60473DE4((_DWORD *)(result + 60), 0, &dword_60CABE08, 0);
    return sub_60473B58(v1, 0xEu, 0);
  }
  return result;
}
