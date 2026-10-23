/* sub_6049D044
 * address: 0x6049D044   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049D044(int a1)
{
  int result; // r0

  FIELD_U32(a1, 4664) = 2;
  FIELD_U32(a1, 4668) = 2;
  FIELD_U8(a1, 4679) = 0;
  FIELD_U8(a1, 4676) = 1;
  result = FIELD_U32(a1, 20276);
  FIELD_U8(result, 2694) = 1;
  return result;
}
