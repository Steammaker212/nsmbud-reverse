/* sub_604DA618
 * address: 0x604DA618   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604DA618(unsigned int a1)
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
    v3 = dword_60CA4334;
    if ( !dword_60CA4334 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA4334 )
      {
        if ( ((unsigned int)&dword_60CA4380 & ~(1615701616 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4380) )
        {
          dword_60CA433C = (int)algn_60CA4344;
          dword_60CA4338 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA4340 = 58;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA4338);
          dword_60CA4338 = (int)&off_60BFE478;
          v6 = dword_60CA433C;
          if ( (char *)dword_60CA433C != "Pa_Menu_00, Pa_Index_00, Pa_ArrowBtnR_00, Pa_ArrowBtnL_00" )
          {
            for ( i = 0; aPaMenu00PaInde[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aPaMenu00PaInde[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA4340 )
              i = dword_60CA4340 - 1;
            qmemcpy((void *)dword_60CA433C, "Pa_Menu_00, Pa_Index_00, Pa_ArrowBtnR_00, Pa_ArrowBtnL_00", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA4338 = (int)&off_60BFE460;
          _cxa_guard_release(&dword_60CA4380);
        }
        (*(void (__fastcall **)(int *))(dword_60CA4338 + 12))(&dword_60CA4338);
        sub_608FBCE4(&unk_60CA4384, dword_60CA433C, 4);
        dword_60CA4334 = (int)&unk_60CA4384;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA4334;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
