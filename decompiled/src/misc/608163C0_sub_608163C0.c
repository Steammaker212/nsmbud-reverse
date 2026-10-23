/* sub_608163C0
 * address: 0x608163C0   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608163C0(int a1)
{
  int SoundArchivePlayer; // r5
  int v3; // r0
  unsigned int v4; // r7
  int v5; // r0
  int result; // r0

  SoundArchivePlayer = SoundSystem_getSoundArchivePlayer(SoundSystem_instance);
  v3 = FIELD_U32(SoundArchivePlayer, 40);
  if ( (unsigned int)(v3 + 0x4000000) >= 0x4000001 )
  {
    v4 = 0x4000000;
    do
    {
      if ( v4 != 67108865 )
      {
        v5 = sub_608AB144(SoundArchivePlayer + 8, v4);
        sub_608AC9B4(v5, 1, 2);
        v3 = FIELD_U32(SoundArchivePlayer, 40);
      }
      ++v4;
    }
    while ( v4 < v3 + 0x4000000 );
  }
  result = FIELD_U8(a1, 44) | 4;
  FIELD_U8(a1, 44) = result;
  return result;
}
