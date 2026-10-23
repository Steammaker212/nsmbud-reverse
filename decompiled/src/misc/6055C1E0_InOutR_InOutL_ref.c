/* InOutR_InOutL_ref
 * address: 0x6055C1E0   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall InOutR_InOutL_ref(unsigned int a1)
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
    v3 = dword_60CADC94;
    if ( !dword_60CADC94 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CADC94 )
      {
        if ( ((unsigned int)&dword_60CADCB4 & ~(1616233016 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CADCB4) )
        {
          dword_60CADC9C = (int)&unk_60CADCA4;
          dword_60CADC98 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CADCA0 = 15;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CADC98);
          dword_60CADC98 = (int)&off_60C00F9C;
          v6 = dword_60CADC9C;
          if ( (char *)dword_60CADC9C != "InOutR, InOutL" )
          {
            for ( i = 0; aInoutrInoutl[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aInoutrInoutl[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CADCA0 )
              i = dword_60CADCA0 - 1;
            qmemcpy((void *)dword_60CADC9C, "InOutR, InOutL", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CADC98 = (int)&off_60C00F84;
          _cxa_guard_release(&dword_60CADCB4);
        }
        (*(void (__fastcall **)(int *))(dword_60CADC98 + 12))(&dword_60CADC98);
        sub_608FBCE4(&unk_60CADCB8, dword_60CADC9C, 2);
        dword_60CADC94 = (int)&unk_60CADCB8;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CADC94;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
