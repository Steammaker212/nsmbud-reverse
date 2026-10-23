/* sub_6003F9E4
 * address: 0x6003F9E4   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6003F9E4(int result)
{
  FIELD_U32(result, 11784) = FIELD_U32(result, 108);
  FIELD_U32(result, 11788) = FIELD_U32(result, 112);
  FIELD_U32(result, 11792) = FIELD_U32(result, 116);
  FIELD_F32(result, 11788) = FIELD_F32(dword_60CC6484, 124) + -80.0;
  FIELD_U8(result, 11798) = 0;
  FIELD_U32(result, 11432) = 0;
  FIELD_U32(result, 11436) = 0;
  FIELD_U32(result, 11492) = 1;
  return result;
}
