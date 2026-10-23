/* sub_604923E4
 * address: 0x604923E4   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604923E4(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 4 )
  {
    v3 = dword_60C9FB84;
    if ( !dword_60C9FB84 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60C9FB84 )
      {
        if ( ((unsigned int)&dword_60C9FBC4 & ~(1615406140 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C9FBC4) )
        {
          dword_60C9FB8C = (int)&unk_60C9FB94;
          dword_60C9FB88 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60C9FB90 = 46;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60C9FB88);
          dword_60C9FB88 = (int)&off_60BFD8A0;
          v6 = dword_60C9FB8C;
          if ( (char *)dword_60C9FB8C != "InOutR, InOutL, InOutMenuBtn, Loop, LoopArrow" )
          {
            for ( i = 0; aInoutrInoutlIn[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aInoutrInoutlIn[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60C9FB90 )
              i = dword_60C9FB90 - 1;
            qmemcpy((void *)dword_60C9FB8C, "InOutR, InOutL, InOutMenuBtn, Loop, LoopArrow", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60C9FB88 = (int)&off_60BFD888;
          _cxa_guard_release(&dword_60C9FBC4);
        }
        (*(void (__fastcall **)(int *))(dword_60C9FB88 + 12))(&dword_60C9FB88);
        sub_608FBCE4(&unk_60C9FBC8, dword_60C9FB8C, 5);
        dword_60C9FB84 = (int)&unk_60C9FBC8;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60C9FB84;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
