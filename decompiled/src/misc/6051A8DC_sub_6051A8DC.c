/* sub_6051A8DC
 * address: 0x6051A8DC   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051A8DC(unsigned int a1)
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
    v3 = dword_60CA8B30;
    if ( !dword_60CA8B30 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA8B30 )
      {
        if ( ((unsigned int)&dword_60CA8B94 & ~(1615964468 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA8B94) )
        {
          dword_60CA8B38 = (int)&unk_60CA8B40;
          dword_60CA8B34 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA8B3C = 83;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA8B34);
          dword_60CA8B34 = (int)&off_60BFFBE0;
          v6 = dword_60CA8B38;
          if ( (char *)dword_60CA8B38 != "WipeIn, PlayerNum, CourseNum, PackPattern, Place, ResetPlace, Loop, Out, FreeDigit" )
          {
            for ( i = 0; aWipeinPlayernu[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aWipeinPlayernu[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA8B3C )
              i = dword_60CA8B3C - 1;
            qmemcpy(
              (void *)dword_60CA8B38,
              "WipeIn, PlayerNum, CourseNum, PackPattern, Place, ResetPlace, Loop, Out, FreeDigit",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA8B34 = (int)&off_60BFFBC8;
          _cxa_guard_release(&dword_60CA8B94);
        }
        (*(void (__fastcall **)(int *))(dword_60CA8B34 + 12))(&dword_60CA8B34);
        sub_608FBCE4(&unk_60CA8B98, dword_60CA8B38, 9);
        dword_60CA8B30 = (int)&unk_60CA8B98;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA8B30;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
