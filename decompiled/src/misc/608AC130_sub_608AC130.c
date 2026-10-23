/* sub_608AC130
 * address: 0x608AC130   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AC130(int a1, int a2, int a3)
{
  int v3; // r0
  int result; // r0
  int v5; // r1

  v3 = FIELD_U32(a1, 536);
  if ( !v3 )
    return 0;
  v5 = v3 + 4 * a2;
  result = FIELD_U32(v5, 4);
  FIELD_U32(v5, 4) = a3;
  return result;
}
