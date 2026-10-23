/* sub_60818070
 * address: 0x60818070   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60818070(int result)
{
  unsigned int v1; // r1

  v1 = FIELD_U8(result, 44);
  if ( v1 <= 3 )
  {
    FIELD_U8(result, 44) = v1 | 2;
    sub_6080A3EC(SoundSystem_instance, 1, 0);
    result = SoundSystem_instance;
    FIELD_U8(SoundSystem_instance, 146) = 0;
  }
  return result;
}
