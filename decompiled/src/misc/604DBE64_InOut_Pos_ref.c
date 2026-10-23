/* InOut_Pos_ref
 * address: 0x604DBE64   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall InOut_Pos_ref(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 1 )
  {
    v3 = dword_60CA4A6C;
    if ( !dword_60CA4A6C )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA4A6C )
      {
        if ( ((unsigned int)&dword_60CA4A88 & ~(1615707836 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4A88) )
        {
          dword_60CA4A74 = (int)&unk_60CA4A7C;
          dword_60CA4A70 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA4A78 = 11;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA4A70);
          dword_60CA4A70 = (int)&off_60BFDA90;
          v6 = dword_60CA4A74;
          if ( (char *)dword_60CA4A74 != "InOut, Pos" )
          {
            for ( i = 0; aInoutPos[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aInoutPos[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA4A78 )
              i = dword_60CA4A78 - 1;
            qmemcpy((void *)dword_60CA4A74, "InOut, Pos", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA4A70 = (int)&off_60BD5160;
          _cxa_guard_release(&dword_60CA4A88);
        }
        (*(void (__fastcall **)(int *))(dword_60CA4A70 + 12))(&dword_60CA4A70);
        sub_608FBCE4(&unk_60CA4A8C, dword_60CA4A74, 2);
        dword_60CA4A6C = (int)&unk_60CA4A8C;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA4A6C;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
