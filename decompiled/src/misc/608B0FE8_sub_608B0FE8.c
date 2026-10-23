/* sub_608B0FE8
 * address: 0x608B0FE8   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B0FE8(int a1, int a2, char a3)
{
  int result; // r0

  result = *(_DWORD *)(FIELD_U32(a1, 4) + 196);
  *(_BYTE *)(result + a2) = a3;
  return result;
}
