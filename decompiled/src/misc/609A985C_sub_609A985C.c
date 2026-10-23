/* sub_609A985C
 * address: 0x609A985C   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A985C(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 148);
  if ( result )
    return sub_609AC5E8();
  return result;
}
