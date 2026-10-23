/* sub_607BA534
 * address: 0x607BA534   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607BA534(int a1)
{
  int result; // r0

  if ( (FIELD_U8(a1, 1213) & 1) != 0 && FIELD_F32(a1, 124) < 0.0 )
  {
    FIELD_U32(a1, 100) = 0;
    ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 124, 0.0, 0.15, 1.0, 0.1);
  }
  result = FIELD_U32(a1, 12184);
  if ( result && FIELD_F32(a1, 124) < 0.0 )
  {
    FIELD_U32(a1, 100) = 0;
    JUMPOUT(0x60832560);
  }
  return result;
}
