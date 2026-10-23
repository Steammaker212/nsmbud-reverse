/* InOut_ScrollToR_ScrollToL_LoopArrow_ref
 * address: 0x604DCDAC   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall InOut_ScrollToR_ScrollToL_LoopArrow_ref(unsigned int a1)
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
    v3 = dword_60CA4B68;
    if ( !dword_60CA4B68 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA4B68 )
      {
        if ( ((unsigned int)&dword_60CA4BA0 & ~(1615711748 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4BA0) )
        {
          dword_60CA4B70 = (int)&unk_60CA4B78;
          dword_60CA4B6C = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA4B74 = 39;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA4B6C);
          dword_60CA4B6C = (int)&off_60BFE5C8;
          v6 = dword_60CA4B70;
          if ( (char *)dword_60CA4B70 != "InOut, ScrollToR, ScrollToL, LoopArrow" )
          {
            for ( i = 0; aInoutScrolltor[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aInoutScrolltor[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA4B74 )
              i = dword_60CA4B74 - 1;
            qmemcpy((void *)dword_60CA4B70, "InOut, ScrollToR, ScrollToL, LoopArrow", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA4B6C = (int)&off_60BFE5B0;
          _cxa_guard_release(&dword_60CA4BA0);
        }
        (*(void (__fastcall **)(int *))(dword_60CA4B6C + 12))(&dword_60CA4B6C);
        sub_608FBCE4(&unk_60CA4BA4, dword_60CA4B70, 4);
        dword_60CA4B68 = (int)&unk_60CA4BA4;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA4B68;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
