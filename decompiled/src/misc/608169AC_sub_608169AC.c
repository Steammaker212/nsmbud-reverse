/* sub_608169AC
 * address: 0x608169AC   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608169AC(int a1)
{
  int SoundArchivePlayer; // r7
  int v3; // r6
  int v4; // r8
  int v5; // r1
  int v6; // r0
  unsigned int v7; // r4
  int v8; // r0
  int result; // r0

  FIELD_U8(a1, 65) = 0;
  SoundArchivePlayer = SoundSystem_getSoundArchivePlayer(SoundSystem_instance);
  v3 = 30;
  v4 = 30;
  v5 = FIELD_U8(a1, 44) & 0xFE;
  if ( FIELD_U32(a1, 48) == 3 )
    v3 = 50;
  FIELD_U8(a1, 44) = v5;
  if ( !v5 )
  {
    v6 = FIELD_U32(SoundArchivePlayer, 40);
    if ( (unsigned int)(v6 + 0x4000000) >= 0x4000001 )
    {
      v7 = 0x4000000;
      do
      {
        if ( v7 != 67108865 )
        {
          v8 = sub_608AB144(SoundArchivePlayer + 8, v7);
          sub_608AC9B4(v8, 0, 10);
          v6 = FIELD_U32(SoundArchivePlayer, 40);
        }
        ++v7;
      }
      while ( v7 < v6 + 0x4000000 );
    }
  }
  sub_6080C38C(dword_60CC6B0C, v3, 1.0);
  sub_6080A0AC(SoundSystem_instance, v3, 1.0);
  FIELD_U32(a1, 48) = 0;
  sub_60807574((_DWORD *)SoundSystem_instance);
  if ( (unsigned int)dword_60CC6B80 <= 3 )
    v4 = dword_60AF2C74[dword_60CC6B80];
  result = sub_60910068(&dword_60CC6B98, v4, 1.0);
  FIELD_U8(a1, 65) = 0;
  return result;
}
