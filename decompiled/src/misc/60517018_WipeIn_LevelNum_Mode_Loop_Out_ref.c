/* WipeIn_LevelNum_Mode_Loop_Out_ref
 * address: 0x60517018   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall WipeIn_LevelNum_Mode_Loop_Out_ref(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 4 )
  {
    v3 = dword_60CA877C;
    if ( !dword_60CA877C )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA877C )
      {
        if ( ((unsigned int)&dword_60CA87B0 & ~(1615949936 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA87B0) )
        {
          dword_60CA8784 = (int)&unk_60CA878C;
          dword_60CA8780 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA8788 = 34;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA8780);
          dword_60CA8780 = (int)&off_60BFFA10;
          v6 = dword_60CA8784;
          if ( (char *)dword_60CA8784 != "WipeIn, LevelNum, Mode, Loop, Out" )
          {
            for ( i = 0; aWipeinLevelnum[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aWipeinLevelnum[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA8788 )
              i = dword_60CA8788 - 1;
            qmemcpy((void *)dword_60CA8784, "WipeIn, LevelNum, Mode, Loop, Out", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA8780 = (int)&off_60BFF9F8;
          _cxa_guard_release(&dword_60CA87B0);
        }
        (*(void (__fastcall **)(int *))(dword_60CA8780 + 12))(&dword_60CA8780);
        sub_608FBCE4(&unk_60CA87B4, dword_60CA8784, 5);
        dword_60CA877C = (int)&unk_60CA87B4;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA877C;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
