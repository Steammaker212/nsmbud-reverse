/* sub_60496D2C
 * address: 0x60496D2C   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60496D2C(unsigned int a1)
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
    v3 = dword_60CA039C;
    if ( !dword_60CA039C )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA039C )
      {
        if ( ((unsigned int)&dword_60CA0448 & ~(1615424900 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA0448) )
        {
          dword_60CA03A4 = (int)&unk_60CA03AC;
          dword_60CA03A0 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA03A8 = 153;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA03A0);
          dword_60CA03A0 = (int)&off_60BFDAF0;
          v6 = dword_60CA03A4;
          if ( (char *)dword_60CA03A4 != "Pa_StartTime_00, Pa_StartCoin_00, Pa_Start1UP_00, Pa_StartSpecial_00, Pa_MovieT"
                                         "ime_00, Pa_MovieCoin_00, Pa_Movie1UP_00, Pa_MovieSpecial_00, Pa_Return_00" )
          {
            for ( i = 0; aPaStarttime00P[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aPaStarttime00P[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA03A8 )
              i = dword_60CA03A8 - 1;
            qmemcpy(
              (void *)dword_60CA03A4,
              "Pa_StartTime_00, Pa_StartCoin_00, Pa_Start1UP_00, Pa_StartSpecial_00, Pa_MovieTime_00, Pa_MovieCoin_00, Pa"
              "_Movie1UP_00, Pa_MovieSpecial_00, Pa_Return_00",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA03A0 = (int)&off_60BFDAD8;
          _cxa_guard_release(&dword_60CA0448);
        }
        (*(void (__fastcall **)(int *))(dword_60CA03A0 + 12))(&dword_60CA03A0);
        sub_608FBCE4(&unk_60CA044C, dword_60CA03A4, 9);
        dword_60CA039C = (int)&unk_60CA044C;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA039C;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
