/* sub_60815B40
 * address: 0x60815B40   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60815B40(_BYTE *a1, unsigned int a2, char a3)
{
  unsigned int v5; // r7
  int SoundArchivePlayer; // r0
  int v7; // r0
  unsigned int v8; // r2

  sub_6080A59C(SoundSystem_instance);
  if ( (unsigned int)(*(_DWORD *)(SoundSystem_getSoundArchivePlayer(SoundSystem_instance) + 40) + 0x4000000) >= 0x4000001 )
  {
    v5 = 0x4000000;
    do
    {
      if ( v5 - 67108868 <= 0xB && ((1 << (v5 - 4)) & 0xC3F) != 0 )
      {
        SoundArchivePlayer = SoundSystem_getSoundArchivePlayer(SoundSystem_instance);
        v7 = sub_608AB144(SoundArchivePlayer + 8, v5);
        sub_608AC690(v7, 50);
      }
      ++v5;
    }
    while ( v5 < *(_DWORD *)(SoundSystem_getSoundArchivePlayer(SoundSystem_instance) + 40) + 0x4000000 );
  }
  v8 = 0;
  a1[57] = 1;
  a1[58] = 0;
  if ( a2 <= 0x1C )
  {
    a1[64] = a3;
    a1[55] = 0;
    a1[56] = 0;
    if ( a2 <= 0x1B )
    {
      if ( ((1 << a2) & 0xE002000) != 0 )
      {
        a1[57] = 0;
        goto LABEL_14;
      }
      if ( ((1 << a2) & 0xAC000) != 0 )
      {
LABEL_14:
        a1[56] = 1;
        goto LABEL_15;
      }
      if ( a2 == 16 )
      {
        a1[55] = 1;
        goto LABEL_14;
      }
    }
LABEL_15:
    v8 = a2;
  }
  return STRM_BGM_MENU_ref((_DWORD *)dword_60CC6B0C, 0x11u, v8);
}
