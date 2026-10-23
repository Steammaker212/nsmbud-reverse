/* sub_604918C8
 * address: 0x604918C8   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604918C8(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 6 )
  {
    v3 = dword_60C9F880;
    if ( !dword_60C9F880 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60C9F880 )
      {
        if ( ((unsigned int)&dword_60C9F900 & ~(1615403296 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C9F900) )
        {
          dword_60C9F888 = (int)algn_60C9F890;
          dword_60C9F884 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60C9F88C = 110;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60C9F884);
          dword_60C9F884 = (int)&off_60BFD810;
          v6 = dword_60C9F888;
          if ( (char *)dword_60C9F888 != "Pa_TimeBtn_00, Pa_CoinBtn_00, Pa_1UPBtn_00, Pa_SpecialBtn_00, Pa_MenuBtn_00, Pa"
                                         "_ArrowBtnR_00, Pa_ArrowBtnL_00" )
          {
            for ( i = 0; aPaTimebtn00PaC[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aPaTimebtn00PaC[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60C9F88C )
              i = dword_60C9F88C - 1;
            qmemcpy(
              (void *)dword_60C9F888,
              "Pa_TimeBtn_00, Pa_CoinBtn_00, Pa_1UPBtn_00, Pa_SpecialBtn_00, Pa_MenuBtn_00, Pa_ArrowBtnR_00, Pa_ArrowBtnL_00",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60C9F884 = (int)&off_60BFD7F8;
          _cxa_guard_release(&dword_60C9F900);
        }
        (*(void (__fastcall **)(int *))(dword_60C9F884 + 12))(&dword_60C9F884);
        sub_608FBCE4(&unk_60C9F904, dword_60C9F888, 7);
        dword_60C9F880 = (int)&unk_60C9F904;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60C9F880;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
