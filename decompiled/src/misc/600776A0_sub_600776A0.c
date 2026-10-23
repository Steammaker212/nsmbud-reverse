/* sub_600776A0
 * address: 0x600776A0   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600776A0(int a1)
{
  int v2; // r2
  _BOOL4 result; // r0
  signed int hasPlayer; // r0
  int v5; // r2
  bool v6; // zf
  int v7; // r2
  int v8; // r1

  if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 0) != 1
    || (v2 = FIELD_U32(PlayerMgr_instance, 48)) == 0
    || (result = 1, FIELD_F32(v2, 112) <= (float)(FIELD_F32(a1, 112) + 112.0)) )
  {
    hasPlayer = PlayerMgr_hasPlayer(PlayerMgr_instance, 1u);
    v6 = hasPlayer == 0;
    if ( hasPlayer )
    {
      v5 = FIELD_U32(PlayerMgr_instance, 52);
      v6 = v5 == 0;
    }
    if ( v6 || (result = 1, FIELD_F32(v5, 112) <= (float)(FIELD_F32(a1, 112) + 112.0)) )
    {
      if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 2u) != 1 )
        return PlayerMgr_hasPlayer(PlayerMgr_instance, 3u) == 1
            && (v8 = FIELD_U32(PlayerMgr_instance, 60)) != 0
            && FIELD_F32(v8, 112) > (float)(FIELD_F32(a1, 112) + 112.0);
      if ( (v7 = FIELD_U32(PlayerMgr_instance, 56)) == 0 )
        return PlayerMgr_hasPlayer(PlayerMgr_instance, 3u) == 1
            && (v8 = FIELD_U32(PlayerMgr_instance, 60)) != 0
            && FIELD_F32(v8, 112) > (float)(FIELD_F32(a1, 112) + 112.0);
      result = 1;
      if ( FIELD_F32(v7, 112) <= (float)(FIELD_F32(a1, 112) + 112.0) )
        return PlayerMgr_hasPlayer(PlayerMgr_instance, 3u) == 1
            && (v8 = FIELD_U32(PlayerMgr_instance, 60)) != 0
            && FIELD_F32(v8, 112) > (float)(FIELD_F32(a1, 112) + 112.0);
    }
  }
  return result;
}
