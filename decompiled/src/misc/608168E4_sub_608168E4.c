/* sub_608168E4
 * address: 0x608168E4   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608168E4(int a1)
{
  int SoundArchivePlayer; // r5
  int v3; // r0
  unsigned int v4; // r7
  int v5; // r0
  int result; // r0

  SoundArchivePlayer = SoundSystem_getSoundArchivePlayer(SoundSystem_instance);
  sub_6080A298(SoundSystem_instance, 0);
  sub_6080A1A0(SoundSystem_instance, 0);
  v3 = FIELD_U32(SoundArchivePlayer, 40);
  if ( (unsigned int)(v3 + 0x4000000) >= 0x4000001 )
  {
    v4 = 0x4000000;
    do
    {
      if ( v4 != 67108865 )
      {
        v5 = sub_608AB144(SoundArchivePlayer + 8, v4);
        sub_608AC690(v5, 0);
        v3 = FIELD_U32(SoundArchivePlayer, 40);
      }
      ++v4;
    }
    while ( v4 < v3 + 0x4000000 );
  }
  sub_6080A550(SoundSystem_instance, FIELD_U32(a1, 20), FIELD_U32(a1, 32));
  FIELD_U8(a1, 57) = 1;
  FIELD_U8(a1, 58) = 1;
  result = FIELD_U8(a1, 44) & 0xFB;
  FIELD_U8(a1, 44) = result;
  return result;
}
