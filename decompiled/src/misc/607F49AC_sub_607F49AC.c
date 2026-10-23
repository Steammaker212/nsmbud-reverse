/* sub_607F49AC
 * address: 0x607F49AC   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F49AC(int a1, _DWORD *a2)
{
  int result; // r0

  result = FIELD_U32(dword_60C99DD4, 240);
  if ( result )
  {
    if ( FIELD_U8(result, 13005) )
      return sub_60473B88((_DWORD *)(result + 40), a2, 0);
  }
  return result;
}
