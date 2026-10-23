/* sub_60945F00
 * address: 0x60945F00   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60945F00(int a1, int a2, int a3)
{
  int result; // r0

  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 48))(a1) == a3 )
  {
    FIELD_U8(a1, 20) = FIELD_U32(a1, 64);
    FIELD_U8(a1, 22) = 30;
    FIELD_U32(a1, 16) = a1 + 68;
    FIELD_U8(a1, 23) = FIELD_U32(a1, 60);
    FIELD_U8(a1, 32) = FIELD_U32(a1, 192);
    FIELD_U8(a1, 34) = 30;
    FIELD_U32(a1, 28) = a1 + 196;
    FIELD_U8(a1, 35) = FIELD_U32(a1, 188);
    FIELD_U8(a1, 44) = FIELD_U32(a1, 320);
    FIELD_U8(a1, 46) = 30;
    FIELD_U32(a1, 40) = a1 + 324;
    FIELD_U8(a1, 47) = FIELD_U32(a1, 316);
    FIELD_U8(a1, 56) = FIELD_U32(a1, 448);
    FIELD_U8(a1, 58) = 30;
    FIELD_U32(a1, 52) = a1 + 452;
    result = FIELD_U32(a1, 444);
    FIELD_U8(a1, 59) = result;
  }
  else
  {
    FIELD_U8(a1, 22) = 30;
    FIELD_U32(a1, 16) = a1 + 68;
    FIELD_U8(a1, 34) = 30;
    FIELD_U32(a1, 28) = a1 + 196;
    FIELD_U8(a1, 46) = 30;
    FIELD_U32(a1, 40) = a1 + 324;
    FIELD_U8(a1, 58) = 30;
    FIELD_U32(a1, 52) = a1 + 452;
    return a1 + 452;
  }
  return result;
}
