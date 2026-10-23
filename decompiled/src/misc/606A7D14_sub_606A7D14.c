/* sub_606A7D14
 * address: 0x606A7D14   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A7D14(int result, int a2)
{
  *(_DWORD *)result = a2;
  FIELD_U16(result, 4) = 0;
  FIELD_U8(result, 6) = 0;
  return result;
}
