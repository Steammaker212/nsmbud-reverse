/* sub_606C5A7C
 * address: 0x606C5A7C   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C5A7C(int result, int a2, char a3)
{
  *(_DWORD *)result = a2;
  FIELD_U8(result, 4) = 30;
  FIELD_U8(result, 5) = a3;
  return result;
}
