/* sub_60555638
 * address: 0x60555638   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60555638(int a1)
{
  *(_BYTE *)a1 = 0;
  FIELD_U32(a1, 4) = 0;
  sub_60850328(a1 + 52);
  memset((void *)(a1 + 8), 0, 44);
  return a1;
}
