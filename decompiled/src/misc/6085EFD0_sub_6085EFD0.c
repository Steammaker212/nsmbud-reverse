/* sub_6085EFD0
 * address: 0x6085EFD0   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085EFD0(int result)
{
  int v1; // r4
  int v2; // r6
  bool v3; // zf

  v1 = result;
  v2 = FIELD_U32(result, 16);
  if ( v2 )
  {
    result = FIELD_U32(v2, 128);
    v3 = result == 0;
    if ( result )
      v3 = *(_BYTE *)result == 0;
    if ( !v3 )
    {
      sub_6083D2EC(result);
      sub_6083D48C(FIELD_U32(v2, 136));
      FIELD_U32(v1, 16) = 0;
      return 0;
    }
  }
  return result;
}
