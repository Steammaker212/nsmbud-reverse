/* sub_607F4A1C
 * address: 0x607F4A1C   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F4A1C(int a1, _DWORD *a2)
{
  int result; // r0

  result = FIELD_U32(dword_60C99DD4, 244);
  if ( result )
  {
    if ( (FIELD_U8(result, 52) & 2) != 0 )
      return sub_60473B88((_DWORD *)(result + 2140), a2, 0);
  }
  return result;
}
