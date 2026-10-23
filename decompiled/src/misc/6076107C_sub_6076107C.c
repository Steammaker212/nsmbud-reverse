/* sub_6076107C
 * address: 0x6076107C   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076107C(int a1)
{
  int v2; // r3
  int v3; // r2
  int v4; // lr
  int v5; // r12
  int v6; // r0
  int v7; // r3
  int v8; // r1
  int result; // r0

  v2 = FIELD_U32(a1, 3872);
  v3 = FIELD_U32(a1, 3880);
  v4 = FIELD_U32(a1, 3856);
  v5 = FIELD_U32(a1, 3864);
  v6 = v3 | 0x2018;
  FIELD_U32(a1, 3880) = v3 | 0x2018;
  FIELD_U32(a1, 3872) = v2 | 0x2018;
  FIELD_U32(a1, 3856) = v4 | 0x2018;
  FIELD_U32(a1, 3864) = v5 | 0x2018;
  FIELD_U32(a1, 3884) |= 0x40u;
  FIELD_U32(a1, 3876) |= 0x40u;
  FIELD_U32(a1, 3860) |= 0x40u;
  FIELD_U32(a1, 3868) |= 0x40u;
  v7 = FIELD_U32(a1, 1208);
  if ( (v7 & 0x10000) != 0 )
    v6 = v3 | 0x2738;
  if ( (v7 & 0x1100000) != 0 )
    v6 |= 0x660u;
  if ( (v7 & 0x1110000) != 0 )
    FIELD_U32(a1, 3880) = v6;
  if ( (FIELD_U8(a1, 1213) & 4) != 0 && FIELD_S32(a1, 6980) >= 1 )
    FIELD_U32(a1, 3880) = v6 | 1;
  if ( sub_60769D94(a1, 0) == 1 )
    FIELD_U32(a1, 3884) |= 0x40000u;
  if ( (FIELD_U8(a1, 1220) & 0x10) != 0 )
    FIELD_U32(a1, 3884) |= 0x100000u;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1204))(a1) == 1 )
  {
    v8 = FIELD_U32(a1, 3864);
    FIELD_U32(a1, 3856) |= 0x4000200u;
    FIELD_U32(a1, 3864) = v8 | 0x4000200;
  }
  result = FIELD_U32(a1, 1216);
  if ( (result & 0x100000C) != 0 )
  {
    result = FIELD_U32(a1, 3880) | 0xC00000;
    FIELD_U32(a1, 3880) = result;
  }
  return result;
}
