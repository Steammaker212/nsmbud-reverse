/* sub_6095537C
 * address: 0x6095537C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095537C(int a1, unsigned int a2, int a3)
{
  unsigned int v4; // r2
  int v5; // r0
  int result; // r0

  v4 = FIELD_U32(a1, 120);
  v5 = FIELD_U32(a1, 124);
  if ( v4 > a2 )
    v5 += 1044 * a2;
  result = sub_6095862C(v5, a3);
  if ( result )
    return a3;
  return result;
}
