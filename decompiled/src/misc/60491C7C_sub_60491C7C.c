/* sub_60491C7C
 * address: 0x60491C7C   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60491C7C(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 0x17 )
  {
    v3 = dword_60C9F920;
    if ( !dword_60C9F920 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60C9F920 )
      {
        if ( ((unsigned int)&dword_60C9FAA4 & ~(1615404244 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C9FAA4) )
        {
          dword_60C9F928 = (int)&unk_60C9F930;
          dword_60C9F924 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60C9F92C = 371;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60C9F924);
          dword_60C9F924 = (int)&off_60BFD840;
          v6 = dword_60C9F928;
          if ( (char *)dword_60C9F928 != "Pa_BtnTime_00, Pa_BtnCoin_00, Pa_Btn1UP_00, Pa_BtnSpecial_00, Pa_BtnTime_01, Pa"
                                         "_BtnCoin_01, Pa_Btn1UP_01, Pa_BtnSpecial_01, Pa_BtnTime_02, Pa_BtnCoin_02, Pa_B"
                                         "tn1UP_02, Pa_BtnSpecial_02, Pa_BtnTime_03, Pa_BtnCoin_03, Pa_Btn1UP_03, Pa_BtnS"
                                         "pecial_03, Pa_BtnTime_04, Pa_BtnCoin_04, Pa_Btn1UP_04, Pa_BtnSpecial_04, Pa_Btn"
                                         "Time_05, Pa_BtnCoin_05, Pa_Btn1UP_05, Pa_BtnSpecial_05" )
          {
            for ( i = 0; aPaBtntime00PaB[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aPaBtntime00PaB[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60C9F92C )
              i = dword_60C9F92C - 1;
            qmemcpy(
              (void *)dword_60C9F928,
              "Pa_BtnTime_00, Pa_BtnCoin_00, Pa_Btn1UP_00, Pa_BtnSpecial_00, Pa_BtnTime_01, Pa_BtnCoin_01, Pa_Btn1UP_01, "
              "Pa_BtnSpecial_01, Pa_BtnTime_02, Pa_BtnCoin_02, Pa_Btn1UP_02, Pa_BtnSpecial_02, Pa_BtnTime_03, Pa_BtnCoin_"
              "03, Pa_Btn1UP_03, Pa_BtnSpecial_03, Pa_BtnTime_04, Pa_BtnCoin_04, Pa_Btn1UP_04, Pa_BtnSpecial_04, Pa_BtnTi"
              "me_05, Pa_BtnCoin_05, Pa_Btn1UP_05, Pa_BtnSpecial_05",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60C9F924 = (int)&off_60BFD828;
          _cxa_guard_release(&dword_60C9FAA4);
        }
        (*(void (__fastcall **)(int *))(dword_60C9F924 + 12))(&dword_60C9F924);
        sub_608FBCE4(&unk_60C9FAA8, dword_60C9F928, 24);
        dword_60C9F920 = (int)&unk_60C9FAA8;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60C9F920;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
