/* sub_605067A0
 * address: 0x605067A0   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605067A0(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 3 )
  {
    v3 = dword_60CA7934;
    if ( !dword_60CA7934 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA7934 )
      {
        if ( ((unsigned int)&dword_60CA7974 & ~(1615882232 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA7974) )
        {
          dword_60CA793C = (int)&unk_60CA7944;
          dword_60CA7938 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA7940 = 45;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA7938);
          dword_60CA7938 = (int)&off_60BFF228;
          v6 = dword_60CA793C;
          if ( (char *)dword_60CA793C != "LevelPattern, MedalPattern, NewPattern, Loop" )
          {
            for ( i = 0; aLevelpatternMe[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aLevelpatternMe[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA7940 )
              i = dword_60CA7940 - 1;
            qmemcpy((void *)dword_60CA793C, "LevelPattern, MedalPattern, NewPattern, Loop", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA7938 = (int)&off_60BFF210;
          _cxa_guard_release(&dword_60CA7974);
        }
        (*(void (__fastcall **)(int *))(dword_60CA7938 + 12))(&dword_60CA7938);
        sub_608FBCE4(&unk_60CA7978, dword_60CA793C, 4);
        dword_60CA7934 = (int)&unk_60CA7978;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA7934;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
