/* sub_607C41D8
 * address: 0x607C41D8   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C41D8(int a1)
{
  int result; // r0
  int v3; // [sp+4h] [bp-14h] BYREF
  int target; // [sp+8h] [bp-10h] BYREF
  int speed; // [sp+Ch] [bp-Ch] BYREF

  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 988))(a1) )
    ++FIELD_U32(a1, 12056);
  if ( FIELD_F32(a1, 88) != 0.0 )
  {
    FIELD_U32(a1, 9940) = 1;
    return sub_607740E8(a1);
  }
  FIELD_U32(a1, 1204) |= 0x800000u;
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 976))(a1, 0);
  if ( sub_6040E538(LevelInfo_instance) )
  {
    speed = (FIELD_U32(a1, 1232) >> 2) & 0x4000000 | 0x8000000;
    target = sub_60773F3C(a1, FIELD_U32(a1, 80));
    if ( moveValueTo((int *)(a1 + 160), &target, &speed) )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( (FIELD_U8(a1, 1228) & 0x40) != 0 )
  {
    v3 = 0;
    if ( !sub_60773F88(a1, &v3) )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( !sub_60773F4C(a1) )
LABEL_12:
    FIELD_U32(a1, 1220) |= 0x800u;
LABEL_13:
  result = FIELD_U32(a1, 1224);
  if ( (result & 0x2000000) != 0 && !FIELD_U32(a1, 12060) )
  {
    FIELD_U32(a1, 1224) = result & 0xFDFFFFFF;
    FIELD_U32(a1, 12064) = 30;
    return 12064;
  }
  return result;
}
