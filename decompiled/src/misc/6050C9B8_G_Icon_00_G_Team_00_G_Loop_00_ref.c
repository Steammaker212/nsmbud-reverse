/* G_Icon_00_G_Team_00_G_Loop_00_ref
 * address: 0x6050C9B8   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall G_Icon_00_G_Team_00_G_Loop_00_ref(unsigned int a1)
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
    v3 = dword_60CA7F6C;
    if ( !dword_60CA7F6C )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA7F6C )
      {
        if ( ((unsigned int)&dword_60CA7F9C & ~(1615907344 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA7F9C) )
        {
          dword_60CA7F74 = (int)&unk_60CA7F7C;
          dword_60CA7F70 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA7F78 = 32;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA7F70);
          dword_60CA7F70 = (int)&off_60BD4C38;
          v6 = dword_60CA7F74;
          if ( (char *)dword_60CA7F74 != "G_Icon_00, G_Team_00, G_Loop_00" )
          {
            for ( i = 0; aGIcon00GTeam00[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aGIcon00GTeam00[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA7F78 )
              i = dword_60CA7F78 - 1;
            qmemcpy((void *)dword_60CA7F74, "G_Icon_00, G_Team_00, G_Loop_00", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA7F70 = (int)&off_60BD4C20;
          _cxa_guard_release(&dword_60CA7F9C);
        }
        (*(void (__fastcall **)(int *))(dword_60CA7F70 + 12))(&dword_60CA7F70);
        sub_608FBCE4(&unk_60CA7FA0, dword_60CA7F74, 3);
        dword_60CA7F6C = (int)&unk_60CA7FA0;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA7F6C;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
