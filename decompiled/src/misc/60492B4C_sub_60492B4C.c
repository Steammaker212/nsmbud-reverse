/* sub_60492B4C
 * address: 0x60492B4C   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60492B4C(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 2 )
  {
    v3 = dword_60C9FC78;
    if ( !dword_60C9FC78 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60C9FC78 )
      {
        if ( ((unsigned int)&dword_60C9FCBC & ~(1615408036 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C9FCBC) )
        {
          dword_60C9FC80 = (int)&unk_60C9FC88;
          dword_60C9FC7C = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60C9FC84 = 51;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60C9FC7C);
          dword_60C9FC7C = (int)&off_60BFD900;
          v6 = dword_60C9FC80;
          if ( (char *)dword_60C9FC80 != "N_GoldMedal_00, N_SilverMedal_00, N_BronzeMedal_00" )
          {
            for ( i = 0; aNGoldmedal00NS[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aNGoldmedal00NS[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60C9FC84 )
              i = dword_60C9FC84 - 1;
            qmemcpy((void *)dword_60C9FC80, "N_GoldMedal_00, N_SilverMedal_00, N_BronzeMedal_00", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60C9FC7C = (int)&off_60BFD8E8;
          _cxa_guard_release(&dword_60C9FCBC);
        }
        (*(void (__fastcall **)(int *))(dword_60C9FC7C + 12))(&dword_60C9FC7C);
        sub_608FBCE4(&unk_60C9FCC0, dword_60C9FC80, 3);
        dword_60C9FC78 = (int)&unk_60C9FCC0;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60C9FC78;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
