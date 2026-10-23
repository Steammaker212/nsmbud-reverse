/* sub_605057D8
 * address: 0x605057D8   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605057D8(unsigned int a1)
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
    v3 = dword_60CA77F0;
    if ( !dword_60CA77F0 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA77F0 )
      {
        if ( ((unsigned int)&dword_60CA7854 & ~(1615878192 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA7854) )
        {
          dword_60CA77F8 = (int)&unk_60CA7800;
          dword_60CA77F4 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA77FC = 82;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA77F4);
          dword_60CA77F4 = (int)&off_60BFF1C8;
          v6 = dword_60CA77F8;
          if ( (char *)dword_60CA77F8 != "ScrollUp, ScrollDown, ColorTime, ColorCoin, Color1UP, ColorSpecial, ScrollDisable" )
          {
            for ( i = 0; aScrollupScroll[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aScrollupScroll[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA77FC )
              i = dword_60CA77FC - 1;
            qmemcpy(
              (void *)dword_60CA77F8,
              "ScrollUp, ScrollDown, ColorTime, ColorCoin, Color1UP, ColorSpecial, ScrollDisable",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA77F4 = (int)&off_60BFF1B0;
          _cxa_guard_release(&dword_60CA7854);
        }
        (*(void (__fastcall **)(int *))(dword_60CA77F4 + 12))(&dword_60CA77F4);
        sub_608FBCE4(&unk_60CA7858, dword_60CA77F8, 7);
        dword_60CA77F0 = (int)&unk_60CA7858;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA77F0;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
