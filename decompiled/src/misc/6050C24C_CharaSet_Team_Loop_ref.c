/* CharaSet_Team_Loop_ref
 * address: 0x6050C24C   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CharaSet_Team_Loop_ref(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 2 )
  {
    v3 = dword_60CA7F0C;
    if ( !dword_60CA7F0C )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA7F0C )
      {
        if ( ((unsigned int)&dword_60CA7F34 & ~(1615905444 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA7F34) )
        {
          dword_60CA7F14 = (int)&unk_60CA7F1C;
          dword_60CA7F10 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA7F18 = 21;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA7F10);
          dword_60CA7F10 = (int)&off_60BFF5F8;
          v6 = dword_60CA7F14;
          if ( (char *)dword_60CA7F14 != "CharaSet, Team, Loop" )
          {
            for ( i = 0; aCharasetTeamLo[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aCharasetTeamLo[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA7F18 )
              i = dword_60CA7F18 - 1;
            qmemcpy((void *)dword_60CA7F14, "CharaSet, Team, Loop", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA7F10 = (int)&off_60BFF5E0;
          _cxa_guard_release(&dword_60CA7F34);
        }
        (*(void (__fastcall **)(int *))(dword_60CA7F10 + 12))(&dword_60CA7F10);
        sub_608FBCE4(&unk_60CA7F38, dword_60CA7F14, 3);
        dword_60CA7F0C = (int)&unk_60CA7F38;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA7F0C;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
