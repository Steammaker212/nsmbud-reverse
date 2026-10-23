/* sub_60817E08
 * address: 0x60817E08   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60817E08(int a1)
{
  int result; // r0
  int SoundArchivePlayer; // r1
  int v4; // r0
  unsigned int v5; // r5
  int v6; // r0
  int v7; // r0
  int v8; // r1

  result = FIELD_U8(a1, 44);
  FIELD_U8(a1, 44) = result & 0xEF;
  if ( (result & 0x2C) == 0 )
  {
    SoundArchivePlayer = SoundSystem_getSoundArchivePlayer(SoundSystem_instance);
    v4 = SoundSystem_instance;
    if ( (unsigned int)(FIELD_U32(SoundArchivePlayer, 40) + 0x4000000) >= 0x4000001 )
    {
      v5 = 0x4000000;
      do
      {
        v6 = SoundSystem_getSoundArchivePlayer(v4);
        v7 = sub_608AB144(v6 + 8, v5);
        sub_608AC9B4(v7, 0, 10);
        ++v5;
        v8 = SoundSystem_getSoundArchivePlayer(SoundSystem_instance);
        v4 = SoundSystem_instance;
      }
      while ( v5 < FIELD_U32(v8, 40) + 0x4000000 );
    }
    FIELD_U8(v4, 146) = 1;
    result = FIELD_U8(a1, 44);
    if ( (result & 1) != 0 )
      return SE_SYS_HURRY_UP_ref_8164F8(a1, FIELD_U32(a1, 48));
  }
  return result;
}
