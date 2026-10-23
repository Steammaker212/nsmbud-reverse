/* sub_604DB6FC
 * address: 0x604DB6FC   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604DB6FC(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 0xC )
  {
    v3 = dword_60CA4938;
    if ( !dword_60CA4938 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA4938 )
      {
        if ( ((unsigned int)&dword_60CA4A00 & ~(1615705940 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4A00) )
        {
          dword_60CA4940 = (int)algn_60CA4948;
          dword_60CA493C = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA4944 = 181;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA493C);
          dword_60CA493C = (int)&off_60BFE538;
          v6 = dword_60CA4940;
          if ( (char *)dword_60CA4940 != "Pa_Course_00, Pa_Course_01, Pa_Course_02, Pa_Course_03, Pa_Course_04, Pa_Course"
                                         "_05, Pa_Course_06, Pa_Course_07, Pa_Course_08, Pa_Course_09, Pa_Course_10, Pa_C"
                                         "ourse_11, Pa_Random_00" )
          {
            for ( i = 0; aPaCourse00PaCo[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aPaCourse00PaCo[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA4944 )
              i = dword_60CA4944 - 1;
            qmemcpy(
              (void *)dword_60CA4940,
              "Pa_Course_00, Pa_Course_01, Pa_Course_02, Pa_Course_03, Pa_Course_04, Pa_Course_05, Pa_Course_06, Pa_Cours"
              "e_07, Pa_Course_08, Pa_Course_09, Pa_Course_10, Pa_Course_11, Pa_Random_00",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA493C = (int)&off_60BFE520;
          _cxa_guard_release(&dword_60CA4A00);
        }
        (*(void (__fastcall **)(int *))(dword_60CA493C + 12))(&dword_60CA493C);
        sub_608FBCE4(&unk_60CA4A04, dword_60CA4940, 13);
        dword_60CA4938 = (int)&unk_60CA4A04;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA4938;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
