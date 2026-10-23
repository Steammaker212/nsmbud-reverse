/* sub_604D19FC
 * address: 0x604D19FC   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D19FC(int a1, _DWORD *a2)
{
  int result; // r0

  result = FIELD_U8(a1, 20241);
  if ( result )
  {
    sub_60473B88((_DWORD *)(a1 + 40), a2, 0);
    if ( FIELD_U8(a1, 21905) )
      sub_60473B88((_DWORD *)(a1 + 21908), a2, 0);
    if ( FIELD_U8(a1, 35269) )
      sub_60473B88((_DWORD *)(a1 + 35276), a2, 0);
    return sub_6054550C(a1 + 55740, a2);
  }
  return result;
}
