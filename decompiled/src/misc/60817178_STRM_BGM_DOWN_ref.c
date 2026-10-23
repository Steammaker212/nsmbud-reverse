/* STRM_BGM_DOWN_ref
 * address: 0x60817178   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall STRM_BGM_DOWN_ref(int a1)
{
  int result; // r0
  int SoundArchivePlayer; // r0
  int v3; // r4
  int v4; // r6
  int v5; // r0
  int v6; // r2
  int v7; // r1
  _DWORD v8[9]; // [sp+4h] [bp-24h] BYREF

  result = FIELD_U32(a1, 20);
  if ( result == 17 )
  {
    sub_6080A1A0(SoundSystem_instance, 1);
    sub_608091A4((_DWORD *)SoundSystem_instance, (int)"STRM_BGM_DOWN");
    byte_60CC6B6C = 1;
    byte_60CC6B70 = 1;
    SoundArchivePlayer = SoundSystem_getSoundArchivePlayer(SoundSystem_instance);
    result = sub_608AB144(SoundArchivePlayer + 8, 67108874);
    v3 = result;
    v4 = FIELD_U32(result, 4);
    if ( v4 != result )
    {
      do
      {
        v5 = v4;
        v4 = FIELD_U32(v4, 4);
        v8[0] = 0;
        sub_608AC20C(v8, v5 - 404);
        if ( v8[0] )
        {
          v6 = (unsigned __int8)byte_60CC6B6C;
          if ( byte_60CC6B6C )
            v6 = 16780123;
          if ( *(_DWORD *)(v8[0] + 220) == v6 )
          {
            v7 = (unsigned __int8)byte_60CC6B70;
            if ( byte_60CC6B70 )
              v7 = 10;
            sub_608AF208(v8[0], v7);
          }
        }
        result = sub_608AC1C0(v8);
      }
      while ( v4 != v3 );
    }
  }
  return result;
}
