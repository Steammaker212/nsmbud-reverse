/* sub_6078EE88
 * address: 0x6078EE88   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6078EE88(int a1, _DWORD *a2)
{
  char v2; // r12
  int v4; // r9
  int i; // r6
  int v6; // r5

  if ( a2 )
  {
    if ( ((unsigned int)dword_60CC47D4 & ~(1618538156 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CC47D4) )
    {
      dword_60CC47E4 = 1065353216;
      dword_60CC47E8 = 1065353216;
      dword_60CC47EC = 1065353216;
      dword_60CC47F0 = 1065353216;
      _cxa_guard_release(dword_60CC47D4);
    }
    if ( ((unsigned int)&dword_60CC47D4[1] & ~(1618538240 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC47D4[1]) )
    {
      dword_60CC47F4 = 0;
      dword_60CC47F8 = 0;
      dword_60CC47FC = 0;
      dword_60CC4800 = 1051193246;
      _cxa_guard_release(&dword_60CC47D4[1]);
    }
    v4 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*a2 + 120))(*a2);
    if ( v4 >= 1 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)*a2 + 132))(*a2, i);
        (*(void (__fastcall **)(int, _DWORD, int *))(*(_DWORD *)v6 + 12))(v6, 0, &dword_60CC47E4);
        (*(void (__fastcall **)(int, int, int *))(*(_DWORD *)v6 + 20))(v6, 3, &dword_60CC47F4);
      }
    }
    *(_DWORD *)(*(_DWORD *)a2[7] + 136) = 0;
  }
}
