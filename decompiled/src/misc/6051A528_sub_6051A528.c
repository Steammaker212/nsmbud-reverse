/* sub_6051A528
 * address: 0x6051A528   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051A528(unsigned int a1)
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
    v3 = dword_60CA8AD4;
    if ( !dword_60CA8AD4 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA8AD4 )
      {
        if ( ((unsigned int)&dword_60CA8B1C & ~(1615963520 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA8B1C) )
        {
          dword_60CA8ADC = (int)&unk_60CA8AE4;
          dword_60CA8AD8 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA8AE0 = 55;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA8AD8);
          dword_60CA8AD8 = (int)&off_60BFFBB0;
          v6 = dword_60CA8ADC;
          if ( (char *)dword_60CA8ADC != "T_BestTime_00, T_KinoBZanki_00, T_Timer_01, T_Timer_00" )
          {
            for ( i = 0; aTBesttime00TKi[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aTBesttime00TKi[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA8AE0 )
              i = dword_60CA8AE0 - 1;
            qmemcpy((void *)dword_60CA8ADC, "T_BestTime_00, T_KinoBZanki_00, T_Timer_01, T_Timer_00", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA8AD8 = (int)&off_60BFFB98;
          _cxa_guard_release(&dword_60CA8B1C);
        }
        (*(void (__fastcall **)(int *))(dword_60CA8AD8 + 12))(&dword_60CA8AD8);
        sub_608FBCE4(&unk_60CA8B20, dword_60CA8ADC, 4);
        dword_60CA8AD4 = (int)&unk_60CA8B20;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA8AD4;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
