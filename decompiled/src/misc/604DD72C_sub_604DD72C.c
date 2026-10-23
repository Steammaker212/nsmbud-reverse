/* sub_604DD72C
 * address: 0x604DD72C   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604DD72C(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 4 )
  {
    v3 = dword_60CA4C34;
    if ( !dword_60CA4C34 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA4C34 )
      {
        if ( ((unsigned int)&dword_60CA4C8C & ~(1615714180 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4C8C) )
        {
          dword_60CA4C3C = (int)&unk_60CA4C44;
          dword_60CA4C38 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA4C40 = 71;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA4C38);
          dword_60CA4C38 = (int)&off_60BFD930;
          v6 = dword_60CA4C3C;
          if ( (char *)dword_60CA4C3C != "Pa_Return_00, Pa_OK_00, Pa_SelectCursor_00, Pa_ArrowR_00, Pa_ArrowL_00" )
          {
            for ( i = 0; aPaReturn00PaOk[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aPaReturn00PaOk[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA4C40 )
              i = dword_60CA4C40 - 1;
            qmemcpy((void *)dword_60CA4C3C, "Pa_Return_00, Pa_OK_00, Pa_SelectCursor_00, Pa_ArrowR_00, Pa_ArrowL_00", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA4C38 = (int)&off_60BFD918;
          _cxa_guard_release(&dword_60CA4C8C);
        }
        (*(void (__fastcall **)(int *))(dword_60CA4C38 + 12))(&dword_60CA4C38);
        sub_608FBCE4(&unk_60CA4C90, dword_60CA4C3C, 5);
        dword_60CA4C34 = (int)&unk_60CA4C90;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA4C34;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
