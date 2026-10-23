/* sub_60293AB0
 * address: 0x60293AB0   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60293AB0(int a1)
{
  int v1; // r1
  int result; // r0

  v1 = FIELD_U32(a1, 7512) | 2;
  result = FIELD_U32(a1, 80) ^ 1;
  if ( v1 == 3 )
    return result | 2;
  return result;
}
