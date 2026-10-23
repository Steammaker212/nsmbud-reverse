/* sub_609898C0
 * address: 0x609898C0   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609898C0(int a1)
{
  int result; // r0

  result = sub_60850328(a1);
  *(_DWORD *)result = &off_60C5FECC;
  FIELD_U32(result, 36) = result + 36;
  FIELD_U32(result, 40) = result + 36;
  FIELD_U32(result, 44) = 0;
  FIELD_U16(result, 48) = 0;
  FIELD_U8(result, 50) = 0;
  FIELD_U8(result, 51) = 32;
  FIELD_U32(result, 52) = 0;
  FIELD_U32(result, 56) = 0;
  return result;
}
