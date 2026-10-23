/* sub_60506B54
 * address: 0x60506B54   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60506B54(unsigned int a1)
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
    v3 = dword_60CA7988;
    if ( !dword_60CA7988 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA7988 )
      {
        if ( ((unsigned int)&dword_60CA79F0 & ~(1615883180 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA79F0) )
        {
          dword_60CA7990 = (int)&unk_60CA7998;
          dword_60CA798C = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA7994 = 85;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA798C);
          dword_60CA798C = (int)&off_60BFD870;
          v6 = dword_60CA7990;
          if ( (char *)dword_60CA7990 != "T_CourseNameTime_00, T_CourseNameCoin_00, T_CourseName1Up_00, T_CourseNameSpecial_00" )
          {
            for ( i = 0; aTCoursenametim[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aTCoursenametim[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA7994 )
              i = dword_60CA7994 - 1;
            qmemcpy(
              (void *)dword_60CA7990,
              "T_CourseNameTime_00, T_CourseNameCoin_00, T_CourseName1Up_00, T_CourseNameSpecial_00",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA798C = (int)&off_60BFD858;
          _cxa_guard_release(&dword_60CA79F0);
        }
        (*(void (__fastcall **)(int *))(dword_60CA798C + 12))(&dword_60CA798C);
        sub_608FBCE4(&unk_60CA79F4, dword_60CA7990, 4);
        dword_60CA7988 = (int)&unk_60CA79F4;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA7988;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
