/* sub_604ED5EC
 * address: 0x604ED5EC   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604ED5EC(int a1)
{
  int v2; // r1

  if ( !FIELD_U8(a1, 3584) )
    return 0;
  v2 = FIELD_U32(a1, 3512);
  if ( *(float *)(*(_DWORD *)v2 + 44) == 0.0 )
  {
    if ( FIELD_U32(a1, 3508) > 1u )
      v2 += 20;
    if ( *(float *)(*(_DWORD *)v2 + 44) == 0.0 )
      FIELD_U8(a1, 3584) = 0;
  }
  ((void (__fastcall *)(int, _DWORD))loc_6098E024)(a1 + 3564, FIELD_U32(a1, 3560));
  return 1;
}
