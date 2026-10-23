/* sub_6091BBEC
 * address: 0x6091BBEC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6091BBEC(_DWORD *result, int a2, char a3)
{
  *result = -1;
  result[1] = &sead__SafeStringBase__vtable;
  result[2] = FIELD_U32(a2, 4);
  *(_BYTE *)result = a3;
  return result;
}
