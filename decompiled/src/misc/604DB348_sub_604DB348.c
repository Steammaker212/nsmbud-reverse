/* sub_604DB348
 * address: 0x604DB348   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604DB348(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 0x30 )
  {
    v3 = dword_60CA4554;
    if ( !dword_60CA4554 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA4554 )
      {
        if ( ((unsigned int)&dword_60CA4870 & ~(1615704992 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4870) )
        {
          dword_60CA455C = (int)&unk_60CA4564;
          dword_60CA4558 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA4560 = 777;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA4558);
          dword_60CA4558 = (int)&off_60BFE508;
          v6 = dword_60CA455C;
          if ( (char *)dword_60CA455C != "N_Win_00, N_GSelectPos_00, N_GSelectPos_01, N_GSelectPos_02, N_GSelectPos_03, N"
                                         "_GSelectPos_04, N_GSelectPos_05, N_GSelectPos_06, N_GSelectPos_07, N_GSelectPos"
                                         "_08, N_GSelectPos_09, N_GSelectPos_10, N_GSelectPos_11, N_GSelectRandomPos_00, "
                                         "N_GOutPos_00, N_GOutPos_01, N_GOutPos_02, N_GOutPos_03, N_GOutPos_04, N_GOutPos"
                                         "_05, N_GOutPos_06, N_GOutPos_07, N_GOutPos_08, N_GOutPos_09, N_GOutPos_10, N_GO"
                                         "utPos_11, N_GOutRandomPos_00, N_KSelectPos_00, N_KSelectPos_01, N_KSelectPos_02"
                                         ", N_KSelectPos_03, N_KSelectPos_04, N_KSelectPos_05, N_KSelectPos_06, N_KSelect"
                                         "Pos_07, N_KSelectPos_08, N_KSelectPos_09, N_KSelectRandomPos_00, N_KOutPos_00, "
                                         "N_KOutPos_01, N_KOutPos_02, N_KOutPos_03, N_KOutPos_04, N_KOutPos_05, N_KOutPos"
                                         "_06, N_KOutPos_07, N_KOutPos_08, N_KOutPos_09, N_KOutRandomPos_00" )
          {
            for ( i = 0; aNWin00NGselect[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aNWin00NGselect[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA4560 )
              i = dword_60CA4560 - 1;
            qmemcpy(
              (void *)dword_60CA455C,
              "N_Win_00, N_GSelectPos_00, N_GSelectPos_01, N_GSelectPos_02, N_GSelectPos_03, N_GSelectPos_04, N_GSelectPo"
              "s_05, N_GSelectPos_06, N_GSelectPos_07, N_GSelectPos_08, N_GSelectPos_09, N_GSelectPos_10, N_GSelectPos_11"
              ", N_GSelectRandomPos_00, N_GOutPos_00, N_GOutPos_01, N_GOutPos_02, N_GOutPos_03, N_GOutPos_04, N_GOutPos_0"
              "5, N_GOutPos_06, N_GOutPos_07, N_GOutPos_08, N_GOutPos_09, N_GOutPos_10, N_GOutPos_11, N_GOutRandomPos_00,"
              " N_KSelectPos_00, N_KSelectPos_01, N_KSelectPos_02, N_KSelectPos_03, N_KSelectPos_04, N_KSelectPos_05, N_K"
              "SelectPos_06, N_KSelectPos_07, N_KSelectPos_08, N_KSelectPos_09, N_KSelectRandomPos_00, N_KOutPos_00, N_KO"
              "utPos_01, N_KOutPos_02, N_KOutPos_03, N_KOutPos_04, N_KOutPos_05, N_KOutPos_06, N_KOutPos_07, N_KOutPos_08"
              ", N_KOutPos_09, N_KOutRandomPos_00",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA4558 = (int)&off_60BFE4F0;
          _cxa_guard_release(&dword_60CA4870);
        }
        (*(void (__fastcall **)(int *))(dword_60CA4558 + 12))(&dword_60CA4558);
        sub_608FBCE4(&unk_60CA4874, dword_60CA455C, 49);
        dword_60CA4554 = (int)&unk_60CA4874;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA4554;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
