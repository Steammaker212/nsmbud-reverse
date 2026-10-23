/* sub_60817D54
 * address: 0x60817D54   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60817D54(int a1)
{
  unsigned int v2; // r5
  int SoundArchivePlayer; // r0
  int v4; // r0

  if ( (unsigned int)(*(_DWORD *)(SoundSystem_getSoundArchivePlayer(SoundSystem_instance) + 40) + 0x4000000) >= 0x4000001 )
  {
    v2 = 0x4000000;
    do
    {
      SoundArchivePlayer = SoundSystem_getSoundArchivePlayer(SoundSystem_instance);
      v4 = sub_608AB144(SoundArchivePlayer + 8, v2);
      sub_608AC9B4(v4, 1, 0);
      ++v2;
    }
    while ( v2 < *(_DWORD *)(SoundSystem_getSoundArchivePlayer(SoundSystem_instance) + 40) + 0x4000000 );
  }
  FIELD_U8(a1, 44) |= 0x10u;
  FIELD_U8(SoundSystem_instance, 146) = 0;
  return sub_609105F4(dword_60CCFAF4);
}
