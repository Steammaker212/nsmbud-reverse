/* AreaRumbleMgr_rumble2
 * address: 0x60400A34   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall AreaRumbleMgr_rumble2(int a1, int a2, char a3, int a4)
{
  _DWORD *v8; // r0
  int v9; // r3
  int v10; // r5
  int v11; // r6
  int v12; // r7

  if ( (a3 & 2) != 0 )
  {
    if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 0) == 1 )
      sub_604571EC(dword_60C9CF18, 0, *((_DWORD *)*(&off_60BF991C + a2) + 1), a4);
    if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 1u) )
      sub_604571EC(dword_60C9CF18, 1, *((_DWORD *)*(&off_60BF991C + a2) + 1), a4);
    if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 2u) == 1 )
      sub_604571EC(dword_60C9CF18, 2, *((_DWORD *)*(&off_60BF991C + a2) + 1), a4);
    if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 3u) == 1 )
      sub_604571EC(dword_60C9CF18, 3, *((_DWORD *)*(&off_60BF991C + a2) + 1), a4);
  }
  if ( (a3 & 1) != 0 )
  {
    v8 = *(&off_60BF9944 + a2);
    v9 = v8[1];
    v10 = v8[2];
    v11 = v8[3];
    v12 = v8[4];
    FIELD_U32(a1, 36) = *v8;
    FIELD_U32(a1, 40) = v9;
    FIELD_U32(a1, 44) = v10;
    FIELD_U32(a1, 48) = v11;
    FIELD_U32(a1, 52) = v12;
    FIELD_F32(a1, 40) = FIELD_F32(a1, 40) + FIELD_F32(a1, 40);
    FIELD_U8(a1, 64) = 1;
  }
  FIELD_U8(a1, 65) = -1;
  return 255;
}
