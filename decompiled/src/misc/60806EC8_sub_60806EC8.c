/* sub_60806EC8
 * address: 0x60806EC8   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60806EC8(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60C280CC;
  if ( (_DWORD *)dword_60CC6AF4 == a1 )
  {
    dword_60CC6AF4 = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)SoundSystem_instance + 4))(SoundSystem_instance);
    SoundSystem_instance = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
