/* sub_603E7258
 * address: 0x603E7258   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E7258(int a1)
{
  int v2; // r1

  FIELD_U8(a1, 108) = 0;
  FIELD_U8(a1, 128) = 1;
  v2 = PlayerMgr_instance;
  if ( FIELD_U32(PlayerMgr_instance, 32) )
  {
    sub_607A950C();
    v2 = PlayerMgr_instance;
  }
  if ( FIELD_U32(v2, 36) )
  {
    sub_607A950C();
    v2 = PlayerMgr_instance;
  }
  if ( FIELD_U32(v2, 40) )
  {
    sub_607A950C();
    v2 = PlayerMgr_instance;
  }
  if ( FIELD_U32(v2, 44) )
  {
    sub_607A950C();
    v2 = PlayerMgr_instance;
  }
  FIELD_U32(a1, 48) = -1;
  FIELD_U8(v2, 148) = 1;
  return 1;
}
