/* G_Icon_00_ref_50D440
 * address: 0x6050D440   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall G_Icon_00_ref_50D440(int a1)
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
    v3 = dword_60CA8018;
    if ( !dword_60CA8018 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA8018 )
      {
        if ( ((unsigned int)&dword_60CA8034 & ~(1615910040 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA8034) )
        {
          dword_60CA8020 = (int)&unk_60CA8028;
          dword_60CA801C = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA8024 = 10;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA801C);
          dword_60CA801C = (int)&off_60BD4FF8;
          v6 = dword_60CA8020;
          if ( (char *)dword_60CA8020 != "G_Icon_00" )
          {
            for ( i = 0; aGIcon00[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aGIcon00[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA8024 )
              i = dword_60CA8024 - 1;
            qmemcpy((void *)dword_60CA8020, "G_Icon_00", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA801C = (int)&off_60BD4F50;
          _cxa_guard_release(&dword_60CA8034);
        }
        (*(void (__fastcall **)(int *))(dword_60CA801C + 12))(&dword_60CA801C);
        sub_608FBCE4(&unk_60CA8038, dword_60CA8020, 1);
        dword_60CA8018 = (int)&unk_60CA8038;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA8018;
    }
    return *(_DWORD *)v3;
  }
  return result;
}
