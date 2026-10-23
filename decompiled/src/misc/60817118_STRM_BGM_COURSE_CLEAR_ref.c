/* STRM_BGM_COURSE_CLEAR_ref
 * address: 0x60817118   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall STRM_BGM_COURSE_CLEAR_ref(int a1, int a2)
{
  int result; // r0

  result = FIELD_U32(a1, 20);
  if ( result == 17 )
  {
    sub_6080A1A0(SoundSystem_instance, 60);
    if ( a2 == 1 )
      return sub_608091A4((_DWORD *)SoundSystem_instance, (int)"STRM_BGM_COURSE_CLEAR_ZORO");
    else
      return sub_608091A4((_DWORD *)SoundSystem_instance, (int)"STRM_BGM_COURSE_CLEAR");
  }
  return result;
}
