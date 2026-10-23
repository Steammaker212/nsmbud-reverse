/* sub_6080A3EC
 * address: 0x6080A3EC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080A3EC(int a1, int a2, int a3)
{
  int v6; // r0
  int result; // r0

  v6 = FIELD_U32(a1, 76);
  if ( v6 )
    sub_608AF328(v6, a2, a3);
  result = FIELD_U32(a1, 72);
  if ( result )
    return sub_608AF328(result, a2, a3);
  return result;
}
