/* sub_6013287C
 * address: 0x6013287C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013287C(int result)
{
  FIELD_U32(result, 132) = dword_60AF1F00[FIELD_F32(result, 120) < 0.0];
  FIELD_U32(result, 136) = -1071644672;
  FIELD_U32(result, 140) = 0;
  FIELD_U32(result, 104) = 1000593162;
  FIELD_U32(result, 100) = -1130113270;
  return result;
}
