/* Pa_Return_00_Pa_BtnLB_00_Pa_BtnRB_00_ref
 * address: 0x604DC42C   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Pa_Return_00_Pa_BtnLB_00_Pa_BtnRB_00_ref(unsigned int a1)
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
    v3 = dword_60CA4AC8;
    if ( !dword_60CA4AC8 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA4AC8 )
      {
        if ( ((unsigned int)&dword_60CA4B00 & ~(1615709316 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4B00) )
        {
          dword_60CA4AD0 = (int)algn_60CA4AD8;
          dword_60CA4ACC = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA4AD4 = 39;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA4ACC);
          dword_60CA4ACC = (int)&off_60BFE5C8;
          v6 = dword_60CA4AD0;
          if ( (char *)dword_60CA4AD0 != "Pa_Return_00, Pa_BtnLB_00, Pa_BtnRB_00" )
          {
            for ( i = 0; aPaReturn00PaBt[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aPaReturn00PaBt[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA4AD4 )
              i = dword_60CA4AD4 - 1;
            qmemcpy((void *)dword_60CA4AD0, "Pa_Return_00, Pa_BtnLB_00, Pa_BtnRB_00", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA4ACC = (int)&off_60BFE5B0;
          _cxa_guard_release(&dword_60CA4B00);
        }
        (*(void (__fastcall **)(int *))(dword_60CA4ACC + 12))(&dword_60CA4ACC);
        sub_608FBCE4(&unk_60CA4B04, dword_60CA4AD0, 3);
        dword_60CA4AC8 = (int)&unk_60CA4B04;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA4AC8;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
