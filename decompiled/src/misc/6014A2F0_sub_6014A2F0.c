/* sub_6014A2F0
 * address: 0x6014A2F0   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6014A2F0(int result, int a2)
{
  int v2; // r1

  FIELD_U32(result, 32) = a2;
  if ( a2 )
  {
    v2 = FIELD_U32(a2, 144);
    if ( v2 )
      FIELD_U32(result, 28) = FIELD_U32(v2, 8);
  }
  return result;
}
