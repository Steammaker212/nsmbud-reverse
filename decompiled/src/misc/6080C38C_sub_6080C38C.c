/* sub_6080C38C
 * address: 0x6080C38C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080C38C(int a1, int a2, float a3)
{
  int result; // r0

  if ( FIELD_U32(SoundSystem_instance, 68) )
  {
    result = sub_60809C9C(SoundSystem_instance, a2, a3);
  }
  else
  {
    sub_6080A06C(SoundSystem_instance, a2, a3);
    result = sub_6080A08C(SoundSystem_instance, a2, a3);
  }
  FIELD_F32(a1, 64) = a3;
  return result;
}
