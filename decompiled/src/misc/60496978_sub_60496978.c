/* sub_60496978
 * address: 0x60496978   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60496978(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 8 )
  {
    v3 = dword_60CA02CC;
    if ( !dword_60CA02CC )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA02CC )
      {
        if ( ((unsigned int)&dword_60CA0374 & ~(1615423952 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA0374) )
        {
          dword_60CA02D4 = (int)&unk_60CA02DC;
          dword_60CA02D0 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA02D8 = 152;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA02D0);
          dword_60CA02D0 = (int)&off_60BFDAC0;
          v6 = dword_60CA02D4;
          if ( (char *)dword_60CA02D4 != "T_CourseName_01, T_CourseName_00, T_Text_01, T_Text_00, T_Best_00, T_GoldCondit"
                                         "ion_00, T_SilverCondition_00, T_BronzeCondition_00, T_WorldCourseName_00" )
          {
            for ( i = 0; aTCoursename01T[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aTCoursename01T[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA02D8 )
              i = dword_60CA02D8 - 1;
            qmemcpy(
              (void *)dword_60CA02D4,
              "T_CourseName_01, T_CourseName_00, T_Text_01, T_Text_00, T_Best_00, T_GoldCondition_00, T_SilverCondition_0"
              "0, T_BronzeCondition_00, T_WorldCourseName_00",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA02D0 = (int)&off_60BFDAA8;
          _cxa_guard_release(&dword_60CA0374);
        }
        (*(void (__fastcall **)(int *))(dword_60CA02D0 + 12))(&dword_60CA02D0);
        sub_608FBCE4(&unk_60CA0378, dword_60CA02D4, 9);
        dword_60CA02CC = (int)&unk_60CA0378;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA02CC;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
