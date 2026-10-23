/* sub_607FABF8
 * address: 0x607FABF8   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FABF8(int result)
{
  float v1; // s0

  v1 = FIELD_F32(result, 4) + (float)((float)(FIELD_F32(result, 4) + -1.0) * -0.5);
  FIELD_F32(result, 4) = v1;
  FIELD_F32(result, 8) = v1;
  FIELD_U32(result, 16) = 0;
  FIELD_U32(result, 24) = 0;
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
