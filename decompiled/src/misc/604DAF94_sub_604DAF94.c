/* sub_604DAF94
 * address: 0x604DAF94   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604DAF94(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 8 )
  {
    v3 = dword_60CA44AC;
    if ( !dword_60CA44AC )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA44AC )
      {
        if ( ((unsigned int)&dword_60CA452C & ~(1615704044 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA452C) )
        {
          dword_60CA44B4 = (int)&unk_60CA44BC;
          dword_60CA44B0 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA44B8 = 111;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA44B0);
          dword_60CA44B0 = (int)&off_60BFE4D8;
          v6 = dword_60CA44B4;
          if ( (char *)dword_60CA44B4 != "G_Mode_00, G_Scroll_00, G_Team_00, G_Loop_00, G_Menu_00, G_PlayerNum_00, G_Sele"
                                         "ct_00, G_ArrowR_00, G_ArrowL_00" )
          {
            for ( i = 0; aGMode00GScroll[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aGMode00GScroll[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA44B8 )
              i = dword_60CA44B8 - 1;
            qmemcpy(
              (void *)dword_60CA44B4,
              "G_Mode_00, G_Scroll_00, G_Team_00, G_Loop_00, G_Menu_00, G_PlayerNum_00, G_Select_00, G_ArrowR_00, G_ArrowL_00",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA44B0 = (int)&off_60BFE4C0;
          _cxa_guard_release(&dword_60CA452C);
        }
        (*(void (__fastcall **)(int *))(dword_60CA44B0 + 12))(&dword_60CA44B0);
        sub_608FBCE4(&unk_60CA4530, dword_60CA44B4, 9);
        dword_60CA44AC = (int)&unk_60CA4530;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA44AC;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
