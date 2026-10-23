/* sub_60733114
 * address: 0x60733114   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60733114()
{
  int result; // r0
  int v1; // r4
  int v2; // r4
  int v3; // r4
  int v4; // r4

  result = PlayerMgr_instance;
  v1 = FIELD_U32(PlayerMgr_instance, 32);
  if ( v1 && (FIELD_U8(v1, 1219) & 8) == 0 )
  {
    sub_60768F28(FIELD_U32(PlayerMgr_instance, 32), 186, 0);
    FIELD_U32(v1, 1208) |= 0x2000000u;
    result = PlayerMgr_instance;
  }
  v2 = FIELD_U32(result, 36);
  if ( v2 && (FIELD_U8(v2, 1219) & 8) == 0 )
  {
    sub_60768F28(FIELD_U32(result, 36), 186, 0);
    FIELD_U32(v2, 1208) |= 0x2000000u;
    result = PlayerMgr_instance;
  }
  v3 = FIELD_U32(result, 40);
  if ( v3 && (FIELD_U8(v3, 1219) & 8) == 0 )
  {
    sub_60768F28(FIELD_U32(result, 40), 186, 0);
    FIELD_U32(v3, 1208) |= 0x2000000u;
    result = PlayerMgr_instance;
  }
  v4 = FIELD_U32(result, 44);
  if ( v4 )
  {
    result = FIELD_U8(v4, 1219);
    if ( (result & 8) == 0 )
    {
      sub_60768F28(v4, 186, 0);
      result = FIELD_U32(v4, 1208) | 0x2000000;
      FIELD_U32(v4, 1208) = result;
    }
  }
  return result;
}
