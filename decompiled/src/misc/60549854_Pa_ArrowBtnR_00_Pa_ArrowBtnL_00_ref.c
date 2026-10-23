/* Pa_ArrowBtnR_00_Pa_ArrowBtnL_00_ref
 * address: 0x60549854   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Pa_ArrowBtnR_00_Pa_ArrowBtnL_00_ref(unsigned int a1)
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
    v3 = dword_60CAC660;
    if ( !dword_60CAC660 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CAC660 )
      {
        if ( ((unsigned int)&dword_60CAC694 & ~(1616156844 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CAC694) )
        {
          dword_60CAC668 = (int)&unk_60CAC670;
          dword_60CAC664 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CAC66C = 33;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CAC664);
          dword_60CAC664 = (int)&off_60BFD7E0;
          v6 = dword_60CAC668;
          if ( (char *)dword_60CAC668 != "Pa_ArrowBtnR_00, Pa_ArrowBtnL_00" )
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
            if ( i >= dword_60CAC66C )
              i = dword_60CAC66C - 1;
            qmemcpy((void *)dword_60CAC668, "Pa_ArrowBtnR_00, Pa_ArrowBtnL_00", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CAC664 = (int)&off_60BFD7C8;
          _cxa_guard_release(&dword_60CAC694);
        }
        (*(void (__fastcall **)(int *))(dword_60CAC664 + 12))(&dword_60CAC664);
        sub_608FBCE4(&unk_60CAC698, dword_60CAC668, 2);
        dword_60CAC660 = (int)&unk_60CAC698;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CAC660;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
