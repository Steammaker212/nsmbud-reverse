/* Code_Content_Message_ref
 * address: 0x6081D7B4   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Code_Content_Message_ref(unsigned int a1)
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
    v3 = dword_60CC6CF4;
    if ( !dword_60CC6CF4 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CC6CF4 )
      {
        if ( ((unsigned int)&dword_60CC6D20 & ~(1619122188 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6D20) )
        {
          dword_60CC6CFC = (int)algn_60CC6D04;
          dword_60CC6CF8 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CC6D00 = 25;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CC6CF8);
          dword_60CC6CF8 = (int)&off_60C2A534;
          v6 = dword_60CC6CFC;
          if ( (char *)dword_60CC6CFC != "Code , Content , Message" )
          {
            for ( i = 0; aCodeContentMes[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aCodeContentMes[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CC6D00 )
              i = dword_60CC6D00 - 1;
            qmemcpy((void *)dword_60CC6CFC, "Code , Content , Message", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CC6CF8 = (int)&off_60C2A51C;
          _cxa_guard_release(&dword_60CC6D20);
        }
        (*(void (__fastcall **)(int *))(dword_60CC6CF8 + 12))(&dword_60CC6CF8);
        sub_608FBCE4(&unk_60CC6D24, dword_60CC6CFC, 3);
        dword_60CC6CF4 = (int)&unk_60CC6D24;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CC6CF4;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
