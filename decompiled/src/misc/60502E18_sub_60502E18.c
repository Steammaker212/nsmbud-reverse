/* sub_60502E18
 * address: 0x60502E18   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60502E18(int a1, int a2)
{
  int v4; // r0
  int v5; // r1
  int result; // r0

  v4 = sub_608DE61C(a1 + 52, a2);
  if ( v4 )
    v5 = v4 - FIELD_U32(a1, 64);
  else
    v5 = 0;
  result = FIELD_U32(v5, 164);
  if ( result == 4 )
  {
    FIELD_U32(a1, 1028) = a2;
    return sub_6047EBB4(a1 + 40, v5);
  }
  return result;
}
