/* Out_Select_Mode_ref
 * address: 0x604DBAB0   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Out_Select_Mode_ref(unsigned int a1)
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
    v3 = dword_60CA4A38;
    if ( !dword_60CA4A38 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA4A38 )
      {
        if ( ((unsigned int)&dword_60CA4A5C & ~(1615706888 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4A5C) )
        {
          dword_60CA4A40 = (int)&unk_60CA4A48;
          dword_60CA4A3C = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA4A44 = 18;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA4A3C);
          dword_60CA4A3C = (int)&off_60BFE568;
          v6 = dword_60CA4A40;
          if ( (char *)dword_60CA4A40 != "Out, Select, Mode" )
          {
            for ( i = 0; aOutSelectMode[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aOutSelectMode[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA4A44 )
              i = dword_60CA4A44 - 1;
            qmemcpy((void *)dword_60CA4A40, "Out, Select, Mode", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA4A3C = (int)&off_60BFE550;
          _cxa_guard_release(&dword_60CA4A5C);
        }
        (*(void (__fastcall **)(int *))(dword_60CA4A3C + 12))(&dword_60CA4A3C);
        sub_608FBCE4(&unk_60CA4A60, dword_60CA4A40, 3);
        dword_60CA4A38 = (int)&unk_60CA4A60;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA4A38;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
