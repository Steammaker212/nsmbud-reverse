/* sub_60027500
 * address: 0x60027500   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60027500()
{
  int v0; // r4
  int v1; // r2
  int result; // r0
  int v3; // [sp+4h] [bp-14h] BYREF
  int v4; // [sp+8h] [bp-10h]
  int v5; // [sp+Ch] [bp-Ch]

  v0 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  if ( sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66)) <= 1 )
  {
    if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 0) == 1
      || (v0 = 1, PlayerMgr_hasPlayer(PlayerMgr_instance, 1u))
      || (v0 = 2, PlayerMgr_hasPlayer(PlayerMgr_instance, 2u))
      || (v0 = 3, PlayerMgr_hasPlayer(PlayerMgr_instance, 3u)) )
    {
      sub_6075DE94(dword_60CBF354, &v3, v0);
    }
  }
  else
  {
    v3 = FIELD_U32(dword_60CC6484, 116);
    v4 = FIELD_U32(dword_60CC6484, 128);
  }
  sub_60833074((float *)&v3);
  v1 = v4;
  result = dword_60CC62E4 + 116;
  FIELD_U32(dword_60CC62E4, 116) = v3;
  FIELD_U32(result, 4) = v1;
  FIELD_U32(result, 8) = 0;
  return result;
}
