/* sub_604DC7E0
 * address: 0x604DC7E0   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604DC7E0(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r4
  char v5; // r12
  int v6; // r5
  signed int i; // r6

  result = 0;
  if ( !a1 )
  {
    v3 = dword_60CA4B10;
    if ( !dword_60CA4B10 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA4B10 )
      {
        if ( ((unsigned int)&dword_60CA4B28 & ~(1615710264 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4B28) )
        {
          dword_60CA4B18 = (int)&unk_60CA4B20;
          dword_60CA4B14 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA4B1C = 5;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA4B14);
          dword_60CA4B14 = (int)&off_60BD5434;
          v6 = dword_60CA4B18;
          if ( (char *)dword_60CA4B18 != "Down" )
          {
            for ( i = 0; aDown_0[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aDown_0[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA4B1C )
              i = dword_60CA4B1C - 1;
            qmemcpy((void *)dword_60CA4B18, "Down", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA4B14 = (int)&off_60BD4F38;
          _cxa_guard_release(&dword_60CA4B28);
        }
        (*(void (__fastcall **)(int *))(dword_60CA4B14 + 12))(&dword_60CA4B14);
        sub_608FBCE4(&unk_60CA4B2C, dword_60CA4B18, 1);
        dword_60CA4B10 = (int)&unk_60CA4B2C;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA4B10;
    }
    return *(_DWORD *)v3;
  }
  return result;
}
