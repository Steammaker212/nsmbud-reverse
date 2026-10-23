/* sub_60492798
 * address: 0x60492798   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60492798(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 7 )
  {
    v3 = dword_60C9FBDC;
    if ( !dword_60C9FBDC )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60C9FBDC )
      {
        if ( ((unsigned int)&dword_60C9FC54 & ~(1615407088 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C9FC54) )
        {
          dword_60C9FBE4 = (int)&unk_60C9FBEC;
          dword_60C9FBE0 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60C9FBE8 = 104;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60C9FBE0);
          dword_60C9FBE0 = (int)&off_60BFD8D0;
          v6 = dword_60C9FBE4;
          if ( (char *)dword_60C9FBE4 != "G_TimeBG_00, G_CoinBG_00, G_1UPBG_00, G_SpecialBG_00, G_MenuBtn_00, G_Loop_00, "
                                         "G_ArrowR_00, G_ArrowL_00" )
          {
            for ( i = 0; aGTimebg00GCoin[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aGTimebg00GCoin[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60C9FBE8 )
              i = dword_60C9FBE8 - 1;
            qmemcpy(
              (void *)dword_60C9FBE4,
              "G_TimeBG_00, G_CoinBG_00, G_1UPBG_00, G_SpecialBG_00, G_MenuBtn_00, G_Loop_00, G_ArrowR_00, G_ArrowL_00",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60C9FBE0 = (int)&off_60BFD8B8;
          _cxa_guard_release(&dword_60C9FC54);
        }
        (*(void (__fastcall **)(int *))(dword_60C9FBE0 + 12))(&dword_60C9FBE0);
        sub_608FBCE4(&unk_60C9FC58, dword_60C9FBE4, 8);
        dword_60C9FBDC = (int)&unk_60C9FC58;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60C9FBDC;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
