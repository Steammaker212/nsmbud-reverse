/* sub_607A8020
 * address: 0x607A8020   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A8020(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 1204);
  if ( (result & 0x400000) == 0 )
  {
    if ( (result & 0x200000) != 0 )
    {
      if ( FIELD_U32(a1, 9704) != 4 )
        STRM_BGM_COURSE_OUT_ALL_BUBBLE_ref_78A964(PlayerMgr_instance, FIELD_S8(a1, 84));
      FIELD_U32(a1, 9704) = 4;
      FIELD_U32(a1, 9712) = 30;
      return 9712;
    }
    else
    {
      sub_607A8240(a1);
      FIELD_U32(a1, 9572) = 127;
      return 9572;
    }
  }
  return result;
}
