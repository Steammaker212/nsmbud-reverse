/* JP_US_EU_KR_CN_TW_ref
 * address: 0x6081DB68   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall JP_US_EU_KR_CN_TW_ref(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 5 )
  {
    v3 = dword_60CC6D30;
    if ( !dword_60CC6D30 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CC6D30 )
      {
        if ( ((unsigned int)&dword_60CC6D58 & ~(1619123136 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6D58) )
        {
          dword_60CC6D38 = (int)&unk_60CC6D40;
          dword_60CC6D34 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CC6D3C = 23;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CC6D34);
          dword_60CC6D34 = (int)&off_60C2A564;
          v6 = dword_60CC6D38;
          if ( (char *)dword_60CC6D38 != "JP, US, EU, KR, CN, TW" )
          {
            for ( i = 0; aJpUsEuKrCnTw[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aJpUsEuKrCnTw[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CC6D3C )
              i = dword_60CC6D3C - 1;
            qmemcpy((void *)dword_60CC6D38, "JP, US, EU, KR, CN, TW", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CC6D34 = (int)&off_60C2A54C;
          _cxa_guard_release(&dword_60CC6D58);
        }
        (*(void (__fastcall **)(int *))(dword_60CC6D34 + 12))(&dword_60CC6D34);
        sub_608FBCE4(&unk_60CC6D5C, dword_60CC6D38, 6);
        dword_60CC6D30 = (int)&unk_60CC6D5C;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CC6D30;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
