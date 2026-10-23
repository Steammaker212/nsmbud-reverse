/* sub_601C6BF0
 * address: 0x601C6BF0   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall sub_601C6BF0(int a1)
{
  int v1; // r1
  void *result; // r0

  v1 = FIELD_U32(a1, 264);
  result = &unk_60AFC2B0;
  if ( v1 == 5 )
    return &unk_60AFC6BC;
  return result;
}
