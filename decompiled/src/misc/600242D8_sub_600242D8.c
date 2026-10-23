/* sub_600242D8
 * address: 0x600242D8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600242D8(_WORD *a1, _BYTE *a2, _BYTE *a3, _BYTE *a4, __int16 a5)
{
  int v9; // r0
  int result; // r0

  v9 = sub_608089A4(SoundSystem_instance);
  if ( v9 )
    a5 = v9;
  *a1 = a5;
  *a2 = sub_60808A80(SoundSystem_instance);
  *a3 = STRM_BGM_STAFF_CREDIT_ref(SoundSystem_instance);
  result = sub_60808D08(SoundSystem_instance);
  *a4 = result;
  return result;
}
