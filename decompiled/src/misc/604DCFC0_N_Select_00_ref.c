/* N_Select_00_ref
 * address: 0x604DCFC0   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall N_Select_00_ref(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r4
  char v5; // r12
  int v6; // r5
  signed int i; // r6

  result = 0;
  if ( !a1 )
  {
    v3 = dword_60CA4BB4;
    if ( !dword_60CA4BB4 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA4BB4 )
      {
        if ( ((unsigned int)&dword_60CA4BD0 & ~(1615712280 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4BD0) )
        {
          dword_60CA4BBC = (int)algn_60CA4BC4;
          dword_60CA4BB8 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA4BC0 = 12;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA4BB8);
          dword_60CA4BB8 = (int)&off_60BFE628;
          v6 = dword_60CA4BBC;
          if ( (char *)dword_60CA4BBC != "N_Select_00" )
          {
            for ( i = 0; aNSelect00[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aNSelect00[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA4BC0 )
              i = dword_60CA4BC0 - 1;
            qmemcpy((void *)dword_60CA4BBC, "N_Select_00", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA4BB8 = (int)&off_60BFE610;
          _cxa_guard_release(&dword_60CA4BD0);
        }
        (*(void (__fastcall **)(int *))(dword_60CA4BB8 + 12))(&dword_60CA4BB8);
        sub_608FBCE4(&unk_60CA4BD4, dword_60CA4BBC, 1);
        dword_60CA4BB4 = (int)&unk_60CA4BD4;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA4BB4;
    }
    return *(_DWORD *)v3;
  }
  return result;
}
