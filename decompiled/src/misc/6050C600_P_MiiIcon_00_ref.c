/* P_MiiIcon_00_ref
 * address: 0x6050C600   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall P_MiiIcon_00_ref(int a1)
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
    v3 = dword_60CA7F44;
    if ( !dword_60CA7F44 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA7F44 )
      {
        if ( ((unsigned int)&dword_60CA7F64 & ~(1615906392 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA7F64) )
        {
          dword_60CA7F4C = (int)&unk_60CA7F54;
          dword_60CA7F48 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA7F50 = 13;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA7F48);
          dword_60CA7F48 = (int)&off_60BFF628;
          v6 = dword_60CA7F4C;
          if ( (char *)dword_60CA7F4C != "P_MiiIcon_00" )
          {
            for ( i = 0; aPMiiicon00_0[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aPMiiicon00_0[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA7F50 )
              i = dword_60CA7F50 - 1;
            qmemcpy((void *)dword_60CA7F4C, "P_MiiIcon_00", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA7F48 = (int)&off_60BFF610;
          _cxa_guard_release(&dword_60CA7F64);
        }
        (*(void (__fastcall **)(int *))(dword_60CA7F48 + 12))(&dword_60CA7F48);
        sub_608FBCE4(&unk_60CA7F68, dword_60CA7F4C, 1);
        dword_60CA7F44 = (int)&unk_60CA7F68;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA7F44;
    }
    return *(_DWORD *)v3;
  }
  return result;
}
