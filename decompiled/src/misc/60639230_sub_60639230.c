/* sub_60639230
 * address: 0x60639230   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60639230(int a1)
{
  int result; // r0

  sub_60636C3C(a1);
  result = FIELD_U8(a1, 1096);
  if ( FIELD_U8(a1, 1096) )
    return sub_60638D9C(a1 + 148);
  return result;
}
