/* BobOmb_vf167
 * address: 0x60260724   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall BobOmb_vf167(int a1)
{
  unsigned int result; // r0

  CarryableEnemy__vf29C();
  result = Enemy_CommonRotations[FIELD_U32(a1, 80)];
  FIELD_U32(a1, 160) = result;
  return result;
}
