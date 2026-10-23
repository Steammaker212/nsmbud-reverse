/* sub_603368F4
 * address: 0x603368F4   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603368F4(int a1)
{
  unsigned int v2; // r0

  if ( Actor__getProfileId((Actor *)a1) == 773 )
  {
    FIELD_U8(a1, 534) = 0;
  }
  else
  {
    FIELD_U32(a1, 516) = 0;
    FIELD_U32(a1, 520) = 0;
    FIELD_U32(a1, 524) = 0;
    FIELD_U32(a1, 528) = 0;
    v2 = FIELD_U32(a1, 20);
    FIELD_F32(a1, 500) = (float)((float)((float)((float)(unsigned __int8)(v2 >> 4) + 1.0) * 16.0)
                                 + (float)((float)((float)(unsigned __int8)(v2 >> 4) + 1.0) * 16.0))
                         + 128.0;
    FIELD_F32(a1, 504) = (float)((float)((float)((float)(v2 & 0xF) + 1.0) * 16.0)
                                 + (float)((float)((float)(v2 & 0xF) + 1.0) * 16.0))
                         + 128.0;
  }
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  return 0;
}
