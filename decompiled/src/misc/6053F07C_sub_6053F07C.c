/* sub_6053F07C
 * address: 0x6053F07C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6053F07C(int a1, _DWORD *a2)
{
  int result; // r0

  result = FIELD_U8(a1, 83567);
  if ( result )
  {
    sub_60473B88((_DWORD *)(a1 + 12092), a2, 0);
    result = FIELD_U8(a1, 83569);
    if ( FIELD_U8(a1, 83569) )
      return sub_60541DE8(a1 + 17760, a2);
  }
  return result;
}
