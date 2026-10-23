/* sub_608C8CAC
 * address: 0x608C8CAC   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C8CAC(int result, int a2)
{
  _DWORD *v2; // r4
  int v4; // r7
  int i; // r0
  int v6; // r0
  bool v7; // zf
  int v8; // r1
  _DWORD v9[4]; // [sp+4h] [bp-34h] BYREF
  char v10; // [sp+14h] [bp-24h]
  char v11; // [sp+15h] [bp-23h]
  int v12; // [sp+18h] [bp-20h]
  int v13; // [sp+1Ch] [bp-1Ch]

  v2 = (_DWORD *)result;
  v4 = FIELD_U32(result, 184);
  if ( v4 )
  {
    if ( nn__audio__GetVoicePlayState(result + 32) == 2 )
    {
      return nn__audio__SetVoicePlayState(v2 + 8, 0);
    }
    else
    {
      result = FIELD_U32(v4, 28);
      if ( result == 1 )
      {
        v6 = 0;
        v7 = v2[43] == 2;
        v8 = 0;
        if ( v2[43] == 2 )
          v6 = FIELD_U32(v4, 16);
        v9[0] = *(_DWORD *)v4;
        if ( v7 )
          v8 = 6;
        v9[1] = FIELD_U32(v4, 4);
        v9[2] = FIELD_U32(v4, 12);
        v9[3] = FIELD_U32(v4, 8);
        v10 = FIELD_U8(v4, 24);
        v12 = v6;
        v13 = v8;
        v11 = 1;
        nn__audio__AppendWaveBuffer(v2 + 8, v9);
        v2[48] = v4;
        nn__audio__SetVoicePlayState(v2 + 8, 0);
        ((void (__fastcall *)(_DWORD *, _DWORD *, int))loc_608C89B4)(v2, v2 + 12, a2);
        FIELD_U32(v4, 28) = 2;
        return 2;
      }
      else if ( result == 2 )
      {
        for ( i = v2[46]; i; i = FIELD_U32(i, 32) )
          FIELD_U32(i, 28) = 3;
        v2[46] = 0;
        v2[47] = 0;
        v2[48] = 0;
        return 0;
      }
    }
  }
  return result;
}
