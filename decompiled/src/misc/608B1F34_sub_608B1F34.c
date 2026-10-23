/* sub_608B1F34
 * address: 0x608B1F34   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B1F34(int a1)
{
  int result; // r0
  int v3; // r2

  result = 0;
  v3 = FIELD_U32(a1, 28);
  if ( v3 != -1 && FIELD_U16(a1, 24) == 8720 )
    return a1 + v3;
  return result;
}
