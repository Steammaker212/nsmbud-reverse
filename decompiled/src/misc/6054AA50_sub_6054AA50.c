/* sub_6054AA50
 * address: 0x6054AA50   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054AA50(int a1, _DWORD *a2)
{
  int result; // r0

  result = sub_60377C74(dword_60C96478);
  if ( !result )
  {
    result = FIELD_U8(a1, 3637);
    if ( FIELD_U8(a1, 3637) )
      return sub_60473B88((_DWORD *)(a1 + 44), a2, 0);
  }
  return result;
}
