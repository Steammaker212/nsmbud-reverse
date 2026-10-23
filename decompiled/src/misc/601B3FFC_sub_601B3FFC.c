/* sub_601B3FFC
 * address: 0x601B3FFC   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_601B3FFC(int a1)
{
  unsigned int result; // r0

  FIELD_U32(a1, 1224) = sub_601CFDE0(dword_60C8AEF0);
  result = FIELD_U32(a1, 1120) & 0xFFFF7FFF;
  FIELD_U32(a1, 1120) = result;
  return result;
}
