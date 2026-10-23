/* sub_6099EB58
 * address: 0x6099EB58   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099EB58(int a1, unsigned int a2, int a3)
{
  int result; // r0

  if ( a2 >= 3 )
    a2 = 0;
  result = a1 + 4 * a2;
  if ( !a3 )
    a3 = 1;
  FIELD_U32(result, 52) = a3;
  return result;
}
