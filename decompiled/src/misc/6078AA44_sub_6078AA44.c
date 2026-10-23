/* sub_6078AA44
 * address: 0x6078AA44   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078AA44(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 164);
  if ( (result & 4) == 0 )
  {
    sub_6080A1A0(SoundSystem_instance, 10);
    FIELD_U32(a1, 172) = 20;
    FIELD_U8(a1, 176) = 0;
    result = FIELD_U16(a1, 164) | 4;
    FIELD_U16(a1, 164) = result;
  }
  return result;
}
