/* sub_60798800
 * address: 0x60798800   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60798800(int a1)
{
  int v2; // r1
  unsigned int v3; // r0
  int v4; // r3
  int result; // r0

  sub_60794A90(FIELD_U32(a1, 648), 0);
  FIELD_U32(a1, 76) &= ~4u;
  v2 = FIELD_U32(a1, 1224);
  v3 = FIELD_U32(a1, 1216) & 0xA7FFFFFF;
  FIELD_U32(a1, 1232) &= ~0x20000000u;
  v4 = FIELD_U32(a1, 1236);
  FIELD_U32(a1, 1228) &= ~0x20000u;
  FIELD_U32(a1, 1224) = v2 & 0xFFEFFFFD;
  FIELD_U32(a1, 1204) &= ~0x4000u;
  FIELD_U32(a1, 1212) &= ~0x20u;
  FIELD_U32(a1, 1236) = v4 & 0xFFFEFFFB;
  FIELD_U32(a1, 1216) = v3;
  FIELD_U16(PlayerMgr_instance, 66) |= 1 << FIELD_U8(a1, 84);
  FIELD_U32(a1, 12028) = 1065353216;
  sub_607957D4(a1, 0);
  FIELD_U32(a1, 9572) = 127;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1092))(a1);
  result = FIELD_U32(PlayerMgr_instance, 144) & ~(1 << FIELD_U8(a1, 84));
  FIELD_U32(PlayerMgr_instance, 144) = result;
  return result;
}
