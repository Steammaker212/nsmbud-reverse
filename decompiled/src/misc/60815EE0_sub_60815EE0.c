/* sub_60815EE0
 * address: 0x60815EE0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60815EE0(int a1)
{
  FIELD_U8(a1, 54) = 1;
  return (*(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60))(
           SoundSystem_instance,
           100663301,
           0,
           0);
}
