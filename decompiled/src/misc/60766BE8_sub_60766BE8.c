/* sub_60766BE8
 * address: 0x60766BE8   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60766BE8(int a1)
{
  int v2; // r1
  unsigned int v3; // r0
  unsigned int result; // r0

  FIELD_U32(a1, 9712) = 15;
  sub_60778364(dword_60CBFA90, FIELD_S8(a1, 84));
  v2 = FIELD_S8(a1, 84);
  v3 = FIELD_U32(a1, 1228);
  if ( v2 >= 0 && (v3 & 0x400000) != 0 )
  {
    FIELD_U32(PlayerMgr_instance, 144) &= ~(1 << v2);
    FIELD_U8(dword_60C99DE4, 29) &= ~(1 << FIELD_U8(a1, 84));
    FIELD_U32(a1, 1204) &= ~0x20u;
    v3 = FIELD_U32(a1, 1228) & 0xFFBFFFFF;
    FIELD_U32(a1, 1228) = v3;
  }
  FIELD_U32(a1, 1228) = v3 | 0x20;
  if ( FIELD_U32(a1, 9696) == 1 )
    FIELD_U32(a1, 1232) &= ~0x20000u;
  else
    sub_60777C68(dword_60CBFA90);
  result = FIELD_U32(a1, 1224) & 0xFFEFFFFF;
  FIELD_U32(a1, 1224) = result;
  return result;
}
