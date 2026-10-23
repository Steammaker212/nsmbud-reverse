/* sub_60505B8C
 * address: 0x60505B8C   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60505B8C(unsigned int a1)
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
    v3 = dword_60CA7874;
    if ( !dword_60CA7874 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA7874 )
      {
        if ( ((unsigned int)&dword_60CA78C0 & ~(1615879140 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA78C0) )
        {
          dword_60CA787C = (int)algn_60CA7884;
          dword_60CA7878 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA7880 = 59;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA7878);
          dword_60CA7878 = (int)&off_60BFF1F8;
          v6 = dword_60CA787C;
          if ( (char *)dword_60CA787C != "N_Btn_00, N_Btn_01, N_Btn_02, N_Btn_03, N_Btn_04, N_Btn_05" )
          {
            for ( i = 0; aNBtn00NBtn01NB[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aNBtn00NBtn01NB[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA7880 )
              i = dword_60CA7880 - 1;
            qmemcpy((void *)dword_60CA787C, "N_Btn_00, N_Btn_01, N_Btn_02, N_Btn_03, N_Btn_04, N_Btn_05", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA7878 = (int)&off_60BFF1E0;
          _cxa_guard_release(&dword_60CA78C0);
        }
        (*(void (__fastcall **)(int *))(dword_60CA7878 + 12))(&dword_60CA7878);
        sub_608FBCE4(&unk_60CA78C4, dword_60CA787C, 6);
        dword_60CA7874 = (int)&unk_60CA78C4;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA7874;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
