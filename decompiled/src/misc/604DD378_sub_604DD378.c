/* sub_604DD378
 * address: 0x604DD378   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604DD378(unsigned int a1)
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
    v3 = dword_60CA4BD8;
    if ( !dword_60CA4BD8 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA4BD8 )
      {
        if ( ((unsigned int)&dword_60CA4C20 & ~(1615713232 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4C20) )
        {
          dword_60CA4BE0 = (int)&unk_60CA4BE8;
          dword_60CA4BDC = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA4BE4 = 53;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA4BDC);
          dword_60CA4BDC = (int)&off_60BFE658;
          v6 = dword_60CA4BE0;
          if ( (char *)dword_60CA4BE0 != "T_SelectL_00, T_SelectC_00, T_SelectR_00, T_World_00" )
          {
            for ( i = 0; aTSelectl00TSel[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aTSelectl00TSel[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA4BE4 )
              i = dword_60CA4BE4 - 1;
            qmemcpy((void *)dword_60CA4BE0, "T_SelectL_00, T_SelectC_00, T_SelectR_00, T_World_00", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA4BDC = (int)&off_60BFE640;
          _cxa_guard_release(&dword_60CA4C20);
        }
        (*(void (__fastcall **)(int *))(dword_60CA4BDC + 12))(&dword_60CA4BDC);
        sub_608FBCE4(&unk_60CA4C24, dword_60CA4BE0, 4);
        dword_60CA4BD8 = (int)&unk_60CA4C24;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA4BD8;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
