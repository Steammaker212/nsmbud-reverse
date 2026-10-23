/* AreaRumbleMgr_rumbleForPlayer
 * address: 0x604006B0   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall AreaRumbleMgr_rumbleForPlayer(int a1, signed int playerId, int a3, int a4, int a5)
{
  signed int result; // r0
  int v9; // r7
  _BYTE v10[8]; // [sp+8h] [bp-30h] BYREF
  float v11[2]; // [sp+10h] [bp-28h] BYREF
  float v12; // [sp+18h] [bp-20h]
  int v13; // [sp+1Ch] [bp-1Ch]

  result = (unsigned __int8)playerId < 4u;
  if ( ((unsigned __int8)result & (playerId < 4)) != 0 )
  {
    v9 = (int)*(&off_60BF984C + a3);
    sub_604571EC(dword_60C9CF18, playerId, FIELD_U32(v9, 4), a5);
    if ( FIELD_U8(dword_60CC5754, 16728) )
    {
      v12 = 1.0;
      v11[0] = 1.0;
      v11[1] = 160.0;
      v13 = 1134559232;
      v11[0] = *(float *)v9 / 30.0;
      v12 = v11[0];
      AreaRumbleMgr_rumbleForPlayer_helper_7DBA1C(v10, dword_60CC5754, v11, playerId, 2, 0);
      AreaRumbleMgr_rumbleForPlayer_helper(v10);
    }
    FIELD_U8(a1, 65) = playerId;
    FIELD_U32(a1, 56) |= a4;
    FIELD_U32(a1, 84) = 3;
    return 3;
  }
  return result;
}
