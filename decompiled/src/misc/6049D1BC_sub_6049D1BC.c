/* sub_6049D1BC
 * address: 0x6049D1BC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049D1BC(int result)
{
  int v1; // r2

  v1 = 0;
  if ( FIELD_S32(result, 22496) >= 3 )
  {
    v1 = 1;
    *(_BYTE *)(FIELD_U32(result, 20276) + 2698) = 1;
  }
  FIELD_U32(result, 4664) = v1;
  FIELD_U32(result, 4668) = v1;
  FIELD_U8(result, 4679) = 0;
  FIELD_U8(result, 4676) = 1;
  FIELD_U32(result, 22480) = 3;
  return result;
}
