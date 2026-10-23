/* sub_6052E2C8
 * address: 0x6052E2C8   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052E2C8(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 0x10 )
  {
    v3 = dword_60CAA540;
    if ( !dword_60CAA540 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CAA540 )
      {
        if ( ((unsigned int)&dword_60CAA654 & ~(1616044832 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CAA654) )
        {
          dword_60CAA548 = (int)&unk_60CAA550;
          dword_60CAA544 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CAA54C = 257;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CAA544);
          dword_60CAA544 = (int)&off_60C00168;
          v6 = dword_60CAA548;
          if ( (char *)dword_60CAA548 != "T_PackName_00, T_1PCoinNum_00, T_2PCoinNum_00, T_3PCoinNum_00, T_4PCoinNum_00, "
                                         "T_1P1UPNum_00, T_2P1UPNum_00, T_3P1UPNum_00, T_4P1UPNum_00, T_1PKuppaNum_00, T_"
                                         "2PKuppaNum_00, T_3PKuppaNum_00, T_4PKuppaNum_00, T_Time_00, T_Time_01, T_BestTi"
                                         "me_00, T_NewTime_00" )
          {
            for ( i = 0; aTPackname00T1p[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aTPackname00T1p[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CAA54C )
              i = dword_60CAA54C - 1;
            qmemcpy(
              (void *)dword_60CAA548,
              "T_PackName_00, T_1PCoinNum_00, T_2PCoinNum_00, T_3PCoinNum_00, T_4PCoinNum_00, T_1P1UPNum_00, T_2P1UPNum_0"
              "0, T_3P1UPNum_00, T_4P1UPNum_00, T_1PKuppaNum_00, T_2PKuppaNum_00, T_3PKuppaNum_00, T_4PKuppaNum_00, T_Tim"
              "e_00, T_Time_01, T_BestTime_00, T_NewTime_00",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CAA544 = (int)&off_60C00150;
          _cxa_guard_release(&dword_60CAA654);
        }
        (*(void (__fastcall **)(int *))(dword_60CAA544 + 12))(&dword_60CAA544);
        sub_608FBCE4(&unk_60CAA658, dword_60CAA548, 17);
        dword_60CAA540 = (int)&unk_60CAA658;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CAA540;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
