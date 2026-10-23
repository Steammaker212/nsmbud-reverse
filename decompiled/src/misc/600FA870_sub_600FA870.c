/* sub_600FA870
 * address: 0x600FA870   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600FA870(int a1)
{
  int *v2; // r5
  int v3; // r6
  signed int result; // r0

  v2 = (int *)(a1 + 6112);
  if ( FIELD_U32(a1, 6112) )
  {
    v3 = 0;
    result = PlayerMgr_hasPlayer(PlayerMgr_instance, 0);
    if ( result == 1 )
      goto LABEL_9;
    if ( *v2 == 1 )
      goto LABEL_6;
  }
  v3 = 1;
  result = PlayerMgr_hasPlayer(PlayerMgr_instance, 1u);
  if ( result )
    goto LABEL_9;
  if ( *v2 != 2 )
  {
LABEL_6:
    v3 = 2;
    result = PlayerMgr_hasPlayer(PlayerMgr_instance, 2u);
    if ( !result )
    {
      if ( *v2 == 3 )
        goto LABEL_10;
      goto LABEL_8;
    }
LABEL_9:
    *v2 = v3;
    return result;
  }
LABEL_8:
  v3 = 3;
  result = PlayerMgr_hasPlayer(PlayerMgr_instance, 3u);
  if ( result )
    goto LABEL_9;
LABEL_10:
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    sub_600FA540(a1);
  else
    sub_600FA6D8(a1);
  FIELD_U8(a1, 6104) = 1;
  return 6104;
}
