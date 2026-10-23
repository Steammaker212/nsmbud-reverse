/* T_Random_00_T_World_00_T_Round_00_ref
 * address: 0x6051DD64   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall T_Random_00_T_World_00_T_Round_00_ref(unsigned int a1)
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
    v3 = dword_60CA8E94;
    if ( !dword_60CA8E94 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA8E94 )
      {
        if ( ((unsigned int)&dword_60CA8EC8 & ~(1615977916 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA8EC8) )
        {
          dword_60CA8E9C = (int)&unk_60CA8EA4;
          dword_60CA8E98 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA8EA0 = 36;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA8E98);
          dword_60CA8E98 = (int)&off_60BFFD00;
          v6 = dword_60CA8E9C;
          if ( (char *)dword_60CA8E9C != "T_Random_00, T_World_00, T_Round_00" )
          {
            for ( i = 0; aTRandom00TWorl[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aTRandom00TWorl[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA8EA0 )
              i = dword_60CA8EA0 - 1;
            qmemcpy((void *)dword_60CA8E9C, "T_Random_00, T_World_00, T_Round_00", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA8E98 = (int)&off_60BFFCE8;
          _cxa_guard_release(&dword_60CA8EC8);
        }
        (*(void (__fastcall **)(int *))(dword_60CA8E98 + 12))(&dword_60CA8E98);
        sub_608FBCE4(&unk_60CA8ECC, dword_60CA8E9C, 3);
        dword_60CA8E94 = (int)&unk_60CA8ECC;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA8E94;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
