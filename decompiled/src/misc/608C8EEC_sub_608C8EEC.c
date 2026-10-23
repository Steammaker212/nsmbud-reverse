/* sub_608C8EEC
 * address: 0x608C8EEC   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608C8EEC(int a1, int a2)
{
  int v5; // r5
  int v6; // r10
  int v7; // r6
  int v8; // r0
  int v9; // r6
  int VoicePlayState; // r0
  int v11; // r1

  if ( FIELD_S32(a1, 8) < 1 )
  {
    v6 = 0;
  }
  else
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = *(_DWORD *)(FIELD_U32(a1, 4) + 4 * v5) + 32;
      if ( nn__audio__IsVoiceValid(v7) == 1
        && nn__audio__IsVoiceDroppedFlagOn(v7) == 1
        && (v8 = *(_DWORD *)(FIELD_U32(a1, 4) + 4 * v5), FIELD_U8(v8, 36)) )
      {
        FIELD_U8(v8, 36) = 0;
        ++v6;
      }
      else
      {
        v9 = *(_DWORD *)(FIELD_U32(a1, 4) + 4 * v5);
        if ( nn__audio__IsVoiceValid(v9 + 32) == 1 )
        {
          VoicePlayState = nn__audio__GetVoicePlayState(v9 + 32);
          v11 = FIELD_U32(v9, 164);
          switch ( v11 )
          {
            case 2:
              ((void (__fastcall *)(int, bool, int))loc_608C8670)(v9, VoicePlayState == 0, a2);
              break;
            case 1:
              if ( !VoicePlayState )
                nn__audio__SetVoicePlayState(v9 + 32, 1);
              break;
            case 0:
              ((void (__fastcall *)(int, bool, int))loc_608C852C)(v9, VoicePlayState == 0, a2);
              break;
          }
        }
      }
      ++v5;
    }
    while ( v5 < FIELD_U32(a1, 8) );
  }
  __asm { ORR             PC, R0, R10,LSL R12 }
}
