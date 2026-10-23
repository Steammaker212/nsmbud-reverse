/* sub_60183F9C
 * address: 0x60183F9C   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60183F9C(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 0x1E )
  {
    v3 = dword_60C89058;
    if ( !dword_60C89058 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60C89058 )
      {
        if ( ((unsigned int)&dword_60C89184 & ~(1612201972 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C89184) )
        {
          dword_60C89060 = (int)&unk_60C89068;
          dword_60C8905C = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60C89064 = 283;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60C8905C);
          dword_60C8905C = (int)&off_60BD5058;
          v6 = dword_60C89060;
          if ( (char *)dword_60C89060 != "W1PakkunA,W1PakkunB,W1Item,W2Enemy0,W2Enemy1,W2EnemyA,W2EnemyB,W2EnemyC,W2maze,"
                                         "W3EnemyA,W3EnemyB,W4EnemyA,W4EnemyB,W4EnemyC,W4EnemyD,W4Circle,ChorobonA,Chorob"
                                         "onB,ChorobonC,W5bEnemy1,W5bEnemy2,W5bEnemy3,W5bEnemy4,W5bEnemy5,W5bEnemy6,W5bEn"
                                         "emy7,W5bDemo,W5bPreDemo,W5Teresa,noUI,restart" )
          {
            for ( i = 0; aW1pakkunaW1pak[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aW1pakkunaW1pak[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60C89064 )
              i = dword_60C89064 - 1;
            qmemcpy(
              (void *)dword_60C89060,
              "W1PakkunA,W1PakkunB,W1Item,W2Enemy0,W2Enemy1,W2EnemyA,W2EnemyB,W2EnemyC,W2maze,W3EnemyA,W3EnemyB,W4EnemyA,"
              "W4EnemyB,W4EnemyC,W4EnemyD,W4Circle,ChorobonA,ChorobonB,ChorobonC,W5bEnemy1,W5bEnemy2,W5bEnemy3,W5bEnemy4,"
              "W5bEnemy5,W5bEnemy6,W5bEnemy7,W5bDemo,W5bPreDemo,W5Teresa,noUI,restart",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60C8905C = (int)&off_60BD5040;
          _cxa_guard_release(&dword_60C89184);
        }
        (*(void (__fastcall **)(int *))(dword_60C8905C + 12))(&dword_60C8905C);
        sub_608FBCE4(&unk_60C89188, dword_60C89060, 31);
        dword_60C89058 = (int)&unk_60C89188;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60C89058;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
