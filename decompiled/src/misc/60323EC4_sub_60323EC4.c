/* sub_60323EC4
 * address: 0x60323EC4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60323EC4(int a1)
{
  int result; // r0

  if ( ((int (*)(void))loc_60326A08)() )
    FIELD_U32(a1, 7684) = 32;
  result = FIELD_U8(a1, 7681);
  if ( FIELD_U8(a1, 7681) )
  {
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6100));
    result = *(unsigned __int8 *)(**(_DWORD **)(FIELD_U32(a1, 6100) + 12) + 28);
    if ( (result & 4) != 0 )
    {
      FIELD_U8(a1, 7681) = 0;
      return 0;
    }
  }
  return result;
}
