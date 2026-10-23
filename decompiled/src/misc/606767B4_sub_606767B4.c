/* sub_606767B4
 * address: 0x606767B4   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606767B4(int result, int a2)
{
  unsigned int v2; // r3

  FIELD_U32(result, 6124) = FIELD_U32(a2, 8);
  v2 = FIELD_U8(result, 6128);
  if ( v2 <= 3 )
    __asm { ADD             PC, R3, LR }
  return result;
}
