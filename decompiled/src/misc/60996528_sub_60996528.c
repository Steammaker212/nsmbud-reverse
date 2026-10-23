/* sub_60996528
 * address: 0x60996528   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60996528(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  __guard *v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 5 )
  {
    v3 = dword_60CD0CE0;
    if ( !dword_60CD0CE0 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock((int)v4);
      if ( !dword_60CD0CE0 )
      {
        if ( ((unsigned int)&dword_60CD0D48 & ~(1620665728 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0D48) )
        {
          dword_60CD0CE8 = (int)&unk_60CD0CF0;
          dword_60CD0CE4 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CD0CEC = 85;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CD0CE4);
          dword_60CD0CE4 = (int)&off_60BFD870;
          v6 = dword_60CD0CE8;
          if ( (char *)dword_60CD0CE8 != "CheckButton, CheckKeepButton, DecisionButton, DragButton, NormalButton, SelectButton" )
          {
            for ( i = 0; aCheckbuttonChe[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aCheckbuttonChe[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CD0CEC )
              i = dword_60CD0CEC - 1;
            qmemcpy(
              (void *)dword_60CD0CE8,
              "CheckButton, CheckKeepButton, DecisionButton, DragButton, NormalButton, SelectButton",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CD0CE4 = (int)&off_60BFD858;
          _cxa_guard_release(&dword_60CD0D48);
        }
        (*(void (__fastcall **)(int *))(dword_60CD0CE4 + 12))(&dword_60CD0CE4);
        sub_608FBCE4((int)&unk_60CD0D4C, (_BYTE *)dword_60CD0CE8, 6);
        dword_60CD0CE0 = (int)&unk_60CD0D4C;
      }
      sead__CriticalSection__unlock((int)v4);
      v3 = dword_60CD0CE0;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
