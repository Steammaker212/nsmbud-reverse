/* WipeIn_Mode_Team_PlayerNum_Loop_Out_ref
 * address: 0x6051DB50   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall WipeIn_Mode_Team_PlayerNum_Loop_Out_ref(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 5 )
  {
    v3 = dword_60CA8E3C;
    if ( !dword_60CA8E3C )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA8E3C )
      {
        if ( ((unsigned int)&dword_60CA8E78 & ~(1615977384 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA8E78) )
        {
          dword_60CA8E44 = (int)&unk_60CA8E4C;
          dword_60CA8E40 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA8E48 = 41;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA8E40);
          dword_60CA8E40 = (int)&off_60BFE418;
          v6 = dword_60CA8E44;
          if ( (char *)dword_60CA8E44 != "WipeIn, Mode, Team, PlayerNum, Loop, Out" )
          {
            for ( i = 0; aWipeinModeTeam[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aWipeinModeTeam[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA8E48 )
              i = dword_60CA8E48 - 1;
            qmemcpy((void *)dword_60CA8E44, "WipeIn, Mode, Team, PlayerNum, Loop, Out", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA8E40 = (int)&off_60BFE400;
          _cxa_guard_release(&dword_60CA8E78);
        }
        (*(void (__fastcall **)(int *))(dword_60CA8E40 + 12))(&dword_60CA8E40);
        sub_608FBCE4(&unk_60CA8E7C, dword_60CA8E44, 6);
        dword_60CA8E3C = (int)&unk_60CA8E7C;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA8E3C;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
