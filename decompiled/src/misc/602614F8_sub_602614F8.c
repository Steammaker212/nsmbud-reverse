/* sub_602614F8
 * address: 0x602614F8   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602614F8(int a1)
{
  int result; // r0
  bool v3; // zf

  sub_6025FA54(a1, 0, 0.0);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = -1093874483;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 7116) = 0;
  FIELD_U32(a1, 7112) = 17825792;
  FIELD_U32(a1, 160) = 0;
  FIELD_U8(a1, 7108) = 1;
  result = FIELD_U8(dword_60CC6D8C, 17);
  v3 = result == 0;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    result = FIELD_U8(a1, 26);
    v3 = (result & 1) == 0;
  }
  if ( !v3 )
  {
    FIELD_U32(a1, 7120) = 0;
    FIELD_U32(a1, 3200) |= 0x40000000u;
    FIELD_U32(a1, 3192) |= 0x40000000u;
    FIELD_U32(a1, 3176) |= 0x40000000u;
    result = FIELD_U32(a1, 3184) | 0x40000000;
    FIELD_U32(a1, 3184) = result;
  }
  return result;
}
