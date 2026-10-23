/* sub_60213FC4
 * address: 0x60213FC4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60213FC4(int result)
{
  int v1; // r1

  FIELD_U16(result, 424) = 256;
  FIELD_U32(result, 412) = FIELD_U32(result, 80);
  FIELD_U32(result, 416) = FIELD_U32(result, 84);
  FIELD_U32(result, 420) = FIELD_U32(result, 88);
  v1 = FIELD_U32(result, 448);
  FIELD_U32(result, 128) = v1;
  FIELD_U32(result, 132) = v1;
  FIELD_U32(result, 136) = v1;
  FIELD_U32(result, 464) = 4;
  return result;
}
