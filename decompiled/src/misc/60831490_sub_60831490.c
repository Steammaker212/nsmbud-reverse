/* sub_60831490
 * address: 0x60831490   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60831490(int a1)
{
  int result; // r0

  FIELD_U32(a1, 6104) = 0;
  FIELD_U32(a1, 6100) = 0;
  result = FIELD_U32(dword_60C99DD4, 260);
  if ( result )
    FIELD_U8(result, 4043) = 1;
  return result;
}
