/* sub_607EC71C
 * address: 0x607EC71C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607EC71C(int a1)
{
  int result; // r0

  FIELD_U32(dword_60CC6D78, 412) = 0;
  FIELD_U32(dword_60CA146C, 95252) = a1 + 504;
  FIELD_U32(a1, 55944) = a1 + 504;
  result = dword_60C99DEC;
  FIELD_U8(dword_60C99DEC, 522) = 0;
  return result;
}
