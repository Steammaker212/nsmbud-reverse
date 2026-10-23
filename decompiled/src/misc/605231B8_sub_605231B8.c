/* sub_605231B8
 * address: 0x605231B8   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605231B8(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 0xA )
  {
    v3 = dword_60CA9684;
    if ( !dword_60CA9684 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA9684 )
      {
        if ( ((unsigned int)&dword_60CA9740 & ~(1615999504 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA9740) )
        {
          dword_60CA968C = (int)&unk_60CA9694;
          dword_60CA9688 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA9690 = 171;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA9688);
          dword_60CA9688 = (int)&off_60BFFE94;
          v6 = dword_60CA968C;
          if ( (char *)dword_60CA968C != "G_LevelNum_00, G_PlayScore_00, G_BestScore_00, G_NewRecord_00, G_MedalGet_00, G"
                                         "_TieRecord_00, G_Color_00, G_ScorePattern_00, G_MedalNew_00, G_MedalOld_00, G_MedalLight_00" )
          {
            for ( i = 0; aGLevelnum00GPl[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aGLevelnum00GPl[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA9690 )
              i = dword_60CA9690 - 1;
            qmemcpy(
              (void *)dword_60CA968C,
              "G_LevelNum_00, G_PlayScore_00, G_BestScore_00, G_NewRecord_00, G_MedalGet_00, G_TieRecord_00, G_Color_00, "
              "G_ScorePattern_00, G_MedalNew_00, G_MedalOld_00, G_MedalLight_00",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA9688 = (int)&off_60BFFE7C;
          _cxa_guard_release(&dword_60CA9740);
        }
        (*(void (__fastcall **)(int *))(dword_60CA9688 + 12))(&dword_60CA9688);
        sub_608FBCE4(&unk_60CA9744, dword_60CA968C, 11);
        dword_60CA9684 = (int)&unk_60CA9744;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA9684;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
