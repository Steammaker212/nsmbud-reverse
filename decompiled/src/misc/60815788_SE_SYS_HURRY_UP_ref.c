/* SE_SYS_HURRY_UP_ref
 * address: 0x60815788   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int SE_SYS_HURRY_UP_ref()
{
  int v0; // r5
  int v1; // r6
  int SoundArchivePlayer; // r0
  int v3; // r0
  int result; // r0

  v0 = *(_DWORD *)(SoundSystem_getSoundArchivePlayer(SoundSystem_instance) + 40);
  if ( v0 + 0x4000000 >= 67108865 )
  {
    v1 = 0;
    do
    {
      if ( (unsigned int)(v1 - 1) > 0x15 || ((1 << (v1 - 1)) & 0x270001) == 0 )
      {
        SoundArchivePlayer = SoundSystem_getSoundArchivePlayer(SoundSystem_instance);
        v3 = sub_608AB144(SoundArchivePlayer + 8, v1 + 0x4000000);
        sub_608AC690(v3, 50);
      }
      ++v1;
    }
    while ( v0 != v1 );
  }
  result = sub_60808E60(SoundSystem_instance, (int)"SE_SYS_HURRY_UP");
  if ( result )
    return sub_6080A298(SoundSystem_instance, 50);
  return result;
}
