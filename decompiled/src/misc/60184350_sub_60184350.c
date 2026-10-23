/* sub_60184350
 * address: 0x60184350   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60184350(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 0x1F )
  {
    v3 = dword_60C89204;
    if ( !dword_60C89204 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60C89204 )
      {
        if ( ((unsigned int)&dword_60C89348 & ~(1612202920 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C89348) )
        {
          dword_60C8920C = (int)&unk_60C89214;
          dword_60C89208 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60C89210 = 305;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60C89208);
          dword_60C89208 = (int)&off_60BD5088;
          v6 = dword_60C8920C;
          if ( (char *)dword_60C8920C != "W3TrapA,W3TrapB,W4TrapA,W4TrapB,W6trapA,W6trapB,KanketsusenA,KanketsusenB,Kanke"
                                         "tsusenD,KanketsusenE,dokan,dokan2,RainbowA,RainbowB,RainbowC,RainbowD,clear,swi"
                                         "tchA,switchB,ShipKoopaJr01,ShipKoopaJr02,ShipKoopaJr03,ShipKoopaJr04,W8Koopa01,"
                                         "W8Koopa02,W8Koopa03,egg,W7Demo,W7PreDemo,W7DemoEnd,W7Return,dokanW8" )
          {
            for ( i = 0; aW3trapaW3trapb[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aW3trapaW3trapb[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60C89210 )
              i = dword_60C89210 - 1;
            qmemcpy(
              (void *)dword_60C8920C,
              "W3TrapA,W3TrapB,W4TrapA,W4TrapB,W6trapA,W6trapB,KanketsusenA,KanketsusenB,KanketsusenD,KanketsusenE,dokan,"
              "dokan2,RainbowA,RainbowB,RainbowC,RainbowD,clear,switchA,switchB,ShipKoopaJr01,ShipKoopaJr02,ShipKoopaJr03"
              ",ShipKoopaJr04,W8Koopa01,W8Koopa02,W8Koopa03,egg,W7Demo,W7PreDemo,W7DemoEnd,W7Return,dokanW8",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60C89208 = (int)&off_60BD5070;
          _cxa_guard_release(&dword_60C89348);
        }
        (*(void (__fastcall **)(int *))(dword_60C89208 + 12))(&dword_60C89208);
        sub_608FBCE4(&unk_60C8934C, dword_60C8920C, 32);
        dword_60C89204 = (int)&unk_60C8934C;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60C89204;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
