/* sub_6081643C
 * address: 0x6081643C   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081643C(int a1)
{
  int SoundArchivePlayer; // r5
  unsigned int v3; // r7
  int v4; // r0

  SoundArchivePlayer = SoundSystem_getSoundArchivePlayer(SoundSystem_instance);
  FIELD_U8(a1, 44) &= ~4u;
  if ( (unsigned int)(FIELD_U32(SoundArchivePlayer, 40) + 0x4000000) >= 0x4000001 )
  {
    v3 = 0x4000000;
    do
    {
      v4 = sub_608AB144(SoundArchivePlayer + 8, v3);
      sub_608AC9B4(v4, 0, 10);
      ++v3;
    }
    while ( v3 < FIELD_U32(SoundArchivePlayer, 40) + 0x4000000 );
  }
  sub_6080A550(SoundSystem_instance, FIELD_U32(a1, 20), FIELD_U32(a1, 32));
  if ( (FIELD_U8(a1, 44) & 1) != 0 )
    SE_SYS_HURRY_UP_ref_8164F8(a1, FIELD_U32(a1, 48));
  return sub_60807574((_DWORD *)SoundSystem_instance);
}
