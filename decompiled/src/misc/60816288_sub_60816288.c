/* sub_60816288
 * address: 0x60816288   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60816288(float a1)
{
  int SoundArchivePlayer; // r4
  int result; // r0
  int v4; // r4
  int v5; // r0
  int v6; // r0
  unsigned int v7; // r6
  int v8; // r0

  SoundArchivePlayer = SoundSystem_getSoundArchivePlayer(SoundSystem_instance);
  result = dword_60CC6B80;
  if ( (unsigned int)(dword_60CC6B80 - 1) >= 3 )
  {
    if ( !dword_60CC6B80 )
    {
      result = FIELD_U32(SoundArchivePlayer, 40);
      if ( (unsigned int)(result + 0x4000000) >= 0x4000001 )
      {
        v7 = 0x4000000;
        do
        {
          if ( v7 - 67108865 > 0x16 || ((1 << (v7 - 1)) & 0x7F0001) == 0 )
          {
            v8 = sub_608AB144(SoundArchivePlayer + 8, v7);
            sub_608AC9F4(v8, a1);
            result = FIELD_U32(SoundArchivePlayer, 40);
          }
          ++v7;
        }
        while ( v7 < result + 0x4000000 );
      }
    }
  }
  else
  {
    v4 = SoundArchivePlayer + 8;
    v5 = sub_608AB144(v4, 67108868);
    sub_608AC9F4(v5, a1);
    v6 = sub_608AB144(v4, 67108870);
    return sub_608AC9F4(v6, a1);
  }
  return result;
}
