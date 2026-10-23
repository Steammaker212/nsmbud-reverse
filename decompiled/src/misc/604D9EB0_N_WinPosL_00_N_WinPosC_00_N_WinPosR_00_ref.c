/* N_WinPosL_00_N_WinPosC_00_N_WinPosR_00_ref
 * address: 0x604D9EB0   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall N_WinPosL_00_N_WinPosC_00_N_WinPosR_00_ref(unsigned int a1)
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
    v3 = dword_60CA4278;
    if ( !dword_60CA4278 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA4278 )
      {
        if ( ((unsigned int)&dword_60CA42B4 & ~(1615699720 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA42B4) )
        {
          dword_60CA4280 = (int)&unk_60CA4288;
          dword_60CA427C = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA4284 = 41;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA427C);
          dword_60CA427C = (int)&off_60BFE418;
          v6 = dword_60CA4280;
          if ( (char *)dword_60CA4280 != "N_WinPosL_00, N_WinPosC_00, N_WinPosR_00" )
          {
            for ( i = 0; aNWinposl00NWin[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aNWinposl00NWin[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA4284 )
              i = dword_60CA4284 - 1;
            qmemcpy((void *)dword_60CA4280, "N_WinPosL_00, N_WinPosC_00, N_WinPosR_00", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA427C = (int)&off_60BFE400;
          _cxa_guard_release(&dword_60CA42B4);
        }
        (*(void (__fastcall **)(int *))(dword_60CA427C + 12))(&dword_60CA427C);
        sub_608FBCE4(&unk_60CA42B8, dword_60CA4280, 3);
        dword_60CA4278 = (int)&unk_60CA42B8;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA4278;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
