/* P_Image_00_ref
 * address: 0x60496690   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall P_Image_00_ref(int a1)
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
    v3 = dword_60CA02A8;
    if ( !dword_60CA02A8 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA02A8 )
      {
        if ( ((unsigned int)&dword_60CA02C4 & ~(1615423208 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA02C4) )
        {
          dword_60CA02B0 = (int)&unk_60CA02B8;
          dword_60CA02AC = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA02B4 = 11;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA02AC);
          dword_60CA02AC = (int)&off_60BFDA90;
          v6 = dword_60CA02B0;
          if ( (char *)dword_60CA02B0 != "P_Image_00" )
          {
            for ( i = 0; aPImage00[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aPImage00[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA02B4 )
              i = dword_60CA02B4 - 1;
            qmemcpy((void *)dword_60CA02B0, "P_Image_00", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA02AC = (int)&off_60BD5160;
          _cxa_guard_release(&dword_60CA02C4);
        }
        (*(void (__fastcall **)(int *))(dword_60CA02AC + 12))(&dword_60CA02AC);
        sub_608FBCE4(&unk_60CA02C8, dword_60CA02B0, 1);
        dword_60CA02A8 = (int)&unk_60CA02C8;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA02A8;
    }
    return *(_DWORD *)v3;
  }
  return result;
}
