/* sub_607FAA60
 * address: 0x607FAA60   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FAA60(int result, int a2, float a3)
{
  float v3; // s2

  v3 = 1.0;
  if ( a3 >= 1.0 )
  {
    v3 = a3;
    if ( a3 > 2.4 )
      v3 = 2.4;
  }
  FIELD_F32(result, 4) = v3;
  FIELD_F32(result, 8) = v3;
  FIELD_U32(result, 24) = 0;
  FIELD_U32(result, 12) = a2;
  FIELD_U32(result, 16) = 0;
  FIELD_U8(result, 28) = 0;
  if ( FIELD_S32(result, 20) >= 1 )
  {
    FIELD_U32(result, 20) = 0;
    result = AreaRumbleMgr_instance;
    if ( AreaRumbleMgr_instance )
      FIELD_U32(AreaRumbleMgr_instance, 36) = 0;
  }
  return result;
}
