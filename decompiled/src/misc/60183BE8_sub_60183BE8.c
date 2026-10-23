/* sub_60183BE8
 * address: 0x60183BE8   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60183BE8(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 0x11 )
  {
    v3 = dword_60C88F90;
    if ( !dword_60C88F90 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60C88F90 )
      {
        if ( ((unsigned int)&dword_60C8900C & ~(1612201024 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C8900C) )
        {
          dword_60C88F98 = (int)&unk_60C88FA0;
          dword_60C88F94 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60C88F9C = 108;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60C88F94);
          dword_60C88F94 = (int)&off_60BD5028;
          v6 = dword_60C88F98;
          if ( (char *)dword_60C88F98 != "stop,link1,link2,link3,link4,link5,scale,fixX,fixY,fixZ,focus,board1,Shuffle,Sl"
                                         "ot,1Up,nonstop,onestop,merge" )
          {
            for ( i = 0; aStopLink1Link2[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aStopLink1Link2[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60C88F9C )
              i = dword_60C88F9C - 1;
            qmemcpy(
              (void *)dword_60C88F98,
              "stop,link1,link2,link3,link4,link5,scale,fixX,fixY,fixZ,focus,board1,Shuffle,Slot,1Up,nonstop,onestop,merge",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60C88F94 = (int)&off_60BD5010;
          _cxa_guard_release(&dword_60C8900C);
        }
        (*(void (__fastcall **)(int *))(dword_60C88F94 + 12))(&dword_60C88F94);
        sub_608FBCE4(&unk_60C89010, dword_60C88F98, 18);
        dword_60C88F90 = (int)&unk_60C89010;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60C88F90;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
