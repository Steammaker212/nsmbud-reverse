/* sub_6051A314
 * address: 0x6051A314   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051A314(unsigned int a1)
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
    v3 = dword_60CA8A74;
    if ( !dword_60CA8A74 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA8A74 )
      {
        if ( ((unsigned int)&dword_60CA8AC0 & ~(1615962988 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA8AC0) )
        {
          dword_60CA8A7C = (int)algn_60CA8A84;
          dword_60CA8A78 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA8A80 = 59;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA8A78);
          dword_60CA8A78 = (int)&off_60BFF1F8;
          v6 = dword_60CA8A7C;
          if ( (char *)dword_60CA8A7C != "N_ZankiPos_00, N_ZankiPos_01, N_ZankiPos_02, N_ZankiPos_03" )
          {
            for ( i = 0; aNZankipos00NZa[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aNZankipos00NZa[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA8A80 )
              i = dword_60CA8A80 - 1;
            qmemcpy((void *)dword_60CA8A7C, "N_ZankiPos_00, N_ZankiPos_01, N_ZankiPos_02, N_ZankiPos_03", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA8A78 = (int)&off_60BFF1E0;
          _cxa_guard_release(&dword_60CA8AC0);
        }
        (*(void (__fastcall **)(int *))(dword_60CA8A78 + 12))(&dword_60CA8A78);
        sub_608FBCE4(&unk_60CA8AC4, dword_60CA8A7C, 4);
        dword_60CA8A74 = (int)&unk_60CA8AC4;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA8A74;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
