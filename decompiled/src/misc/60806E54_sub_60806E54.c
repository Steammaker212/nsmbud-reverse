/* sub_60806E54
 * address: 0x60806E54   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60806E54(_DWORD *a1)
{
  *a1 = off_60C280CC;
  if ( (_DWORD *)dword_60CC6AF4 == a1 )
  {
    dword_60CC6AF4 = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)SoundSystem_instance + 4))(SoundSystem_instance);
    SoundSystem_instance = 0;
  }
  return sead__IDisposer__dtor(a1);
}
