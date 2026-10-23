/* sub_60817EC8
 * address: 0x60817EC8   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60817EC8(int a1)
{
  unsigned int v2; // r5
  bool v3; // zf
  int SoundArchivePlayer; // r0
  int v5; // r0
  int result; // r0

  sub_6080A3CC(SoundSystem_instance, 1, 0);
  sub_6080A3DC(SoundSystem_instance, 1, 0);
  if ( (unsigned int)(*(_DWORD *)(SoundSystem_getSoundArchivePlayer(SoundSystem_instance) + 40) + 0x4000000) >= 0x4000001 )
  {
    v2 = 0x4000000;
    do
    {
      v3 = v2 == 67108865;
      if ( v2 != 67108865 )
        v3 = v2 == 67108883;
      if ( !v3 )
      {
        SoundArchivePlayer = SoundSystem_getSoundArchivePlayer(SoundSystem_instance);
        v5 = sub_608AB144(SoundArchivePlayer + 8, v2);
        sub_608AC9B4(v5, 1, 0);
      }
      ++v2;
    }
    while ( v2 < *(_DWORD *)(SoundSystem_getSoundArchivePlayer(SoundSystem_instance) + 40) + 0x4000000 );
  }
  result = FIELD_U8(a1, 44) | 0x20;
  FIELD_U8(a1, 44) = result;
  return result;
}
