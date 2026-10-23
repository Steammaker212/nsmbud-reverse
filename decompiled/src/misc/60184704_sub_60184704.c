/* sub_60184704
 * address: 0x60184704   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60184704(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 0xB )
  {
    v3 = dword_60C893CC;
    if ( !dword_60C893CC )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60C893CC )
      {
        if ( ((unsigned int)&dword_60C89448 & ~(1612203868 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C89448) )
        {
          dword_60C893D4 = (int)&unk_60C893DC;
          dword_60C893D0 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60C893D8 = 105;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60C893D0);
          dword_60C893D0 = (int)&off_60BD50B8;
          v6 = dword_60C893D4;
          if ( (char *)dword_60C893D4 != "boarding,station,coaster,shadowDemo,shadowRoute,KoopaJr01,W1Item,balloon1,ballo"
                                         "on2,bubble1,bubble2,water" )
          {
            for ( i = 0; aBoardingStatio[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aBoardingStatio[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60C893D8 )
              i = dword_60C893D8 - 1;
            qmemcpy(
              (void *)dword_60C893D4,
              "boarding,station,coaster,shadowDemo,shadowRoute,KoopaJr01,W1Item,balloon1,balloon2,bubble1,bubble2,water",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60C893D0 = (int)&off_60BD50A0;
          _cxa_guard_release(&dword_60C89448);
        }
        (*(void (__fastcall **)(int *))(dword_60C893D0 + 12))(&dword_60C893D0);
        sub_608FBCE4(&unk_60C8944C, dword_60C893D4, 12);
        dword_60C893CC = (int)&unk_60C8944C;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60C893CC;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
