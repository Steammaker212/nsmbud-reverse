/* sub_6086A288
 * address: 0x6086A288   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086A288(int result, int a2, __int16 a3)
{
  *(_DWORD *)result = a2;
  FIELD_U16(result, 4) = 0;
  FIELD_U16(result, 6) = a3;
  FIELD_U16(result, 8) = 0;
  FIELD_U16(result, 10) = 0;
  return result;
}
