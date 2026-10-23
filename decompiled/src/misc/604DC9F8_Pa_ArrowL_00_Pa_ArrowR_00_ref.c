/* Pa_ArrowL_00_Pa_ArrowR_00_ref
 * address: 0x604DC9F8   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Pa_ArrowL_00_Pa_ArrowR_00_ref(unsigned int a1)
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
    v3 = dword_60CA4B30;
    if ( !dword_60CA4B30 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA4B30 )
      {
        if ( ((unsigned int)&dword_60CA4B5C & ~(1615710800 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4B5C) )
        {
          dword_60CA4B38 = (int)&unk_60CA4B40;
          dword_60CA4B34 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA4B3C = 27;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA4B34);
          dword_60CA4B34 = (int)&off_60BFE5F8;
          v6 = dword_60CA4B38;
          if ( (char *)dword_60CA4B38 != "Pa_ArrowL_00, Pa_ArrowR_00" )
          {
            for ( i = 0; aPaArrowl00PaAr[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aPaArrowl00PaAr[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA4B3C )
              i = dword_60CA4B3C - 1;
            qmemcpy((void *)dword_60CA4B38, "Pa_ArrowL_00, Pa_ArrowR_00", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA4B34 = (int)&off_60BFE5E0;
          _cxa_guard_release(&dword_60CA4B5C);
        }
        (*(void (__fastcall **)(int *))(dword_60CA4B34 + 12))(&dword_60CA4B34);
        sub_608FBCE4(&unk_60CA4B60, dword_60CA4B38, 2);
        dword_60CA4B30 = (int)&unk_60CA4B60;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA4B30;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
