/* sub_6049E358
 * address: 0x6049E358   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049E358(int result)
{
  *(_BYTE *)(FIELD_U32(result, 20276) + 2694) = 1;
  FIELD_U32(result, 4664) = 4;
  FIELD_U32(result, 4668) = 4;
  FIELD_U8(result, 4679) = 0;
  FIELD_U8(result, 4676) = 1;
  return result;
}
