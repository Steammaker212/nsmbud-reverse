/* sub_603612EC
 * address: 0x603612EC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603612EC(int a1)
{
  int result; // r0

  result = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  FIELD_F32(result, 20) = (float)(FIELD_U32(dword_60C99DD4, 1052) % (unsigned int)FIELD_F32(result, 8));
  FIELD_U32(result, 28) |= 2u;
  return result;
}
