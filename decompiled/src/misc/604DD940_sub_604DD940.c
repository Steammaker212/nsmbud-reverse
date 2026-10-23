/* sub_604DD940
 * address: 0x604DD940   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604DD940(unsigned int a1)
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
    v3 = dword_60CA4CA4;
    if ( !dword_60CA4CA4 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA4CA4 )
      {
        if ( ((unsigned int)&dword_60CA4CE8 & ~(1615714712 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4CE8) )
        {
          dword_60CA4CAC = (int)&unk_60CA4CB4;
          dword_60CA4CA8 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA4CB0 = 50;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA4CA8);
          dword_60CA4CA8 = (int)&off_60BFE688;
          v6 = dword_60CA4CAC;
          if ( (char *)dword_60CA4CAC != "G_InOut_00, G_Scroll_00, G_ArrowR_00, G_ArrowL_00" )
          {
            for ( i = 0; aGInout00GScrol[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aGInout00GScrol[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA4CB0 )
              i = dword_60CA4CB0 - 1;
            qmemcpy((void *)dword_60CA4CAC, "G_InOut_00, G_Scroll_00, G_ArrowR_00, G_ArrowL_00", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA4CA8 = (int)&off_60BFE670;
          _cxa_guard_release(&dword_60CA4CE8);
        }
        (*(void (__fastcall **)(int *))(dword_60CA4CA8 + 12))(&dword_60CA4CA8);
        sub_608FBCE4(&unk_60CA4CEC, dword_60CA4CAC, 4);
        dword_60CA4CA4 = (int)&unk_60CA4CEC;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA4CA4;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
