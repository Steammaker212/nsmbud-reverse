/* Pa_ArrowBtnR_00_Pa_ArrowBtnL_00_ref_560654
 * address: 0x60560654   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Pa_ArrowBtnR_00_Pa_ArrowBtnL_00_ref_560654(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 1 )
  {
    v3 = dword_60CADFF4;
    if ( !dword_60CADFF4 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CADFF4 )
      {
        if ( ((unsigned int)&dword_60CAE028 & ~(1616250540 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE028) )
        {
          dword_60CADFFC = (int)&unk_60CAE004;
          dword_60CADFF8 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CAE000 = 33;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CADFF8);
          dword_60CADFF8 = (int)&off_60BFD7E0;
          v6 = dword_60CADFFC;
          if ( (char *)dword_60CADFFC != "Pa_ArrowBtnR_00, Pa_ArrowBtnL_00" )
          {
            for ( i = 0; aPaArrowbtnr00P[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aPaArrowbtnr00P[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CAE000 )
              i = dword_60CAE000 - 1;
            qmemcpy((void *)dword_60CADFFC, "Pa_ArrowBtnR_00, Pa_ArrowBtnL_00", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CADFF8 = (int)&off_60BFD7C8;
          _cxa_guard_release(&dword_60CAE028);
        }
        (*(void (__fastcall **)(int *))(dword_60CADFF8 + 12))(&dword_60CADFF8);
        sub_608FBCE4(&unk_60CAE02C, dword_60CADFFC, 2);
        dword_60CADFF4 = (int)&unk_60CAE02C;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CADFF4;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
