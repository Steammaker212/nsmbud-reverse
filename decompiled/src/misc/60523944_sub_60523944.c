/* sub_60523944
 * address: 0x60523944   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60523944(unsigned int a1)
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
    v3 = dword_60CA9908;
    if ( !dword_60CA9908 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA9908 )
      {
        if ( ((unsigned int)&dword_60CA9948 & ~(1616001436 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA9948) )
        {
          dword_60CA9910 = (int)&unk_60CA9918;
          dword_60CA990C = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA9914 = 45;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA990C);
          dword_60CA990C = (int)&off_60BFF228;
          v6 = dword_60CA9910;
          if ( (char *)dword_60CA9910 != "ColorTime, ColorCoin, Color1UP, ColorSpecial" )
          {
            for ( i = 0; aColortimeColor[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aColortimeColor[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA9914 )
              i = dword_60CA9914 - 1;
            qmemcpy((void *)dword_60CA9910, "ColorTime, ColorCoin, Color1UP, ColorSpecial", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA990C = (int)&off_60BFF210;
          _cxa_guard_release(&dword_60CA9948);
        }
        (*(void (__fastcall **)(int *))(dword_60CA990C + 12))(&dword_60CA990C);
        sub_608FBCE4(&unk_60CA994C, dword_60CA9910, 4);
        dword_60CA9908 = (int)&unk_60CA994C;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA9908;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
