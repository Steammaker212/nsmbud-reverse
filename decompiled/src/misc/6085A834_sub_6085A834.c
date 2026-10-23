/* sub_6085A834
 * address: 0x6085A834   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6085A834(int a1, int a2, char a3)
{
  unsigned int result; // r0

  result = a1 + ((a2 + ((unsigned int)(a2 >> 31) >> 30)) & 0xFFFFFFFC) + a2 % 4;
  FIELD_U8(result, 176) = a3;
  return result;
}
