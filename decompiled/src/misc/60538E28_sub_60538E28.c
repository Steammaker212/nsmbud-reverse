/* sub_60538E28
 * address: 0x60538E28   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60538E28(int a1, _DWORD *a2)
{
  int result; // r0

  result = FIELD_U8(a1, 83627);
  if ( result )
  {
    sub_60473B88((_DWORD *)(a1 + 12092), a2, 0);
    result = FIELD_U8(a1, 83629);
    if ( FIELD_U8(a1, 83629) )
      return sub_60541DE8(a1 + 17780, a2);
  }
  return result;
}
