/* N_PlayerPos_00_N_Score_00_ref
 * address: 0x60522BF0   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall N_PlayerPos_00_N_Score_00_ref(unsigned int a1)
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
    v3 = dword_60CA9494;
    if ( !dword_60CA9494 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA9494 )
      {
        if ( ((unsigned int)&dword_60CA94C0 & ~(1615998024 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA94C0) )
        {
          dword_60CA949C = (int)algn_60CA94A4;
          dword_60CA9498 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA94A0 = 27;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA9498);
          dword_60CA9498 = (int)&off_60BFE5F8;
          v6 = dword_60CA949C;
          if ( (char *)dword_60CA949C != "N_PlayerPos_00, N_Score_00" )
          {
            for ( i = 0; aNPlayerpos00NS[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aNPlayerpos00NS[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA94A0 )
              i = dword_60CA94A0 - 1;
            qmemcpy((void *)dword_60CA949C, "N_PlayerPos_00, N_Score_00", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA9498 = (int)&off_60BFE5E0;
          _cxa_guard_release(&dword_60CA94C0);
        }
        (*(void (__fastcall **)(int *))(dword_60CA9498 + 12))(&dword_60CA9498);
        sub_608FBCE4(&unk_60CA94C4, dword_60CA949C, 2);
        dword_60CA9494 = (int)&unk_60CA94C4;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA9494;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
