/* sub_60816CD0
 * address: 0x60816CD0   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60816CD0(unsigned int result)
{
  int SoundArchivePlayer; // r0
  int v2; // r0

  if ( dword_60CC6B88 )
  {
    if ( !--dword_60CC6B88 )
    {
      result = FIELD_U8(result, 44);
      if ( result <= 1 )
      {
        SoundArchivePlayer = SoundSystem_getSoundArchivePlayer(SoundSystem_instance);
        v2 = sub_608AB144(SoundArchivePlayer + 8, 67108883);
        return sub_608AC9B4(v2, 0, 10);
      }
    }
  }
  return result;
}
