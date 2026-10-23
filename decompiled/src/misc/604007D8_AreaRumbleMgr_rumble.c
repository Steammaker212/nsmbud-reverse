/* AreaRumbleMgr_rumble
 * address: 0x604007D8   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall AreaRumbleMgr_rumble(int this, int a2, char a3, int a4, int a5)
{
  int v8; // r4
  _DWORD *v9; // r0
  int v10; // r3
  int v11; // r5
  int v12; // r6
  int v13; // r7

  v8 = this;
  if ( (a3 & 2) != 0 )
  {
    if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 0) == 1 )
      AreaRumbleMgr_rumbleForPlayer(v8, 0, a2, a4, a5);
    if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 1u) )
      AreaRumbleMgr_rumbleForPlayer(v8, 1, a2, a4, a5);
    if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 2u) == 1 )
      AreaRumbleMgr_rumbleForPlayer(v8, 2, a2, a4, a5);
    this = PlayerMgr_hasPlayer(PlayerMgr_instance, 3u);
    if ( this == 1 )
      this = AreaRumbleMgr_rumbleForPlayer(v8, 3, a2, a4, a5);
  }
  if ( (a3 & 1) != 0 )
  {
    v9 = *(&off_60BF98B4 + a2);
    v10 = v9[1];
    v11 = v9[2];
    v12 = v9[3];
    v13 = v9[4];
    FIELD_U32(v8, 16) = *v9;
    FIELD_U32(v8, 20) = v10;
    FIELD_U32(v8, 24) = v11;
    FIELD_U32(v8, 28) = v12;
    FIELD_U32(v8, 32) = v13;
    FIELD_F32(v8, 20) = FIELD_F32(v8, 20) + FIELD_F32(v8, 20);
    FIELD_U8(v8, 65) = -1;
    FIELD_U32(v8, 56) |= a4;
    this = 1;
    FIELD_U8(v8, 64) = 1;
  }
  if ( (a4 & 2) != 0 )
  {
    FIELD_U32(EnemyCounterMaybe_instance, 240) = 0;
    this = 4;
    FIELD_U32(v8, 68) = 4;
  }
  if ( (a4 & 4) != 0 )
  {
    FIELD_U32(EnemyCounterMaybe_instance, 240) = 0;
    FIELD_U32(v8, 72) = 4;
    return 4;
  }
  return this;
}
