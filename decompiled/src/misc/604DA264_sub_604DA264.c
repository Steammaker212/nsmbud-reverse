/* sub_604DA264
 * address: 0x604DA264   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604DA264(unsigned int a1)
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
    v3 = dword_60CA42C4;
    if ( !dword_60CA42C4 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA42C4 )
      {
        if ( ((unsigned int)&dword_60CA431C & ~(1615700668 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA431C) )
        {
          dword_60CA42CC = (int)&unk_60CA42D4;
          dword_60CA42C8 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA42D0 = 72;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA42C8);
          dword_60CA42C8 = (int)&off_60BFE448;
          v6 = dword_60CA42CC;
          if ( (char *)dword_60CA42CC != "T_TeamAScore_00, T_TeamBScore_00, T_IndexL_00, T_IndexC_00, T_IndexR_00" )
          {
            for ( i = 0; aTTeamascore00T[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aTTeamascore00T[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA42D0 )
              i = dword_60CA42D0 - 1;
            qmemcpy(
              (void *)dword_60CA42CC,
              "T_TeamAScore_00, T_TeamBScore_00, T_IndexL_00, T_IndexC_00, T_IndexR_00",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA42C8 = (int)&off_60BFE430;
          _cxa_guard_release(&dword_60CA431C);
        }
        (*(void (__fastcall **)(int *))(dword_60CA42C8 + 12))(&dword_60CA42C8);
        sub_608FBCE4(&unk_60CA4320, dword_60CA42CC, 5);
        dword_60CA42C4 = (int)&unk_60CA4320;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA42C4;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
