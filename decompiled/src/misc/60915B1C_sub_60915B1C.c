/* sub_60915B1C
 * address: 0x60915B1C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60915B1C(int a1, void *a2)
{
  int v3; // r0
  int result; // r0

  v3 = operator_new_8DE25C(0x248u, a2, 4);
  result = untitled_ref(v3);
  FIELD_U32(a1, 20) = result;
  return result;
}
