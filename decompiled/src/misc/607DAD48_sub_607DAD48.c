/* sub_607DAD48
 * address: 0x607DAD48   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DAD48(int *a1)
{
  int result; // r0

  result = *a1;
  if ( result )
  {
    if ( a1[1] == FIELD_U32(result, 12) )
      return sub_607DD550();
  }
  return result;
}
