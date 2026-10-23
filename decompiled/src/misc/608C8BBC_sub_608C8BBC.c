/* sub_608C8BBC
 * address: 0x608C8BBC   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C8BBC(int result)
{
  _DWORD *v1; // r4
  int v2; // r6
  int v3; // r0
  int v4; // r1
  bool v5; // zf
  int v6; // r2
  _DWORD v7[4]; // [sp+4h] [bp-2Ch] BYREF
  char v8; // [sp+14h] [bp-1Ch]
  char v9; // [sp+15h] [bp-1Bh]
  int v10; // [sp+18h] [bp-18h]
  int v11; // [sp+1Ch] [bp-14h]

  v1 = (_DWORD *)result;
  v2 = FIELD_U32(result, 184);
  if ( v2 )
  {
    if ( nn__audio__GetReleasedWaveBuffer(result + 32) )
    {
      v1[46] = FIELD_U32(v2, 32);
      FIELD_U32(v2, 28) = 3;
      v3 = v1[46];
      if ( v3 )
      {
        FIELD_U32(v3, 28) = 2;
      }
      else
      {
        v1[47] = 0;
        nn__audio__SetVoicePlayState(v1 + 8, 1);
      }
    }
    result = *(_DWORD *)(v1[48] + 32);
    if ( result )
    {
      v4 = 0;
      v5 = v1[43] == 2;
      v6 = 0;
      if ( v1[43] == 2 )
        v4 = FIELD_U32(result, 16);
      v7[0] = *(_DWORD *)result;
      if ( v5 )
        v6 = 6;
      v7[1] = FIELD_U32(result, 4);
      v7[2] = FIELD_U32(result, 12);
      v7[3] = FIELD_U32(result, 8);
      v8 = FIELD_U8(result, 24);
      v10 = v4;
      v11 = v6;
      v9 = 1;
      result = nn__audio__AppendWaveBuffer(v1 + 8, v7);
      if ( result == 1 )
      {
        result = *(_DWORD *)(v1[48] + 32);
        v1[48] = result;
      }
    }
  }
  return result;
}
