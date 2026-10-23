/* sub_6056DF3C
 * address: 0x6056DF3C   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6056DF3C(int a1)
{
  char v1; // r12
  int v2; // r5
  _DWORD *v3; // r6
  int v4; // r7
  unsigned __int8 v5; // r11
  int v7; // [sp+8h] [bp-38h]

  v2 = 0;
  v7 = a1 + 7436;
  v3 = (_DWORD *)(a1 + 7472);
  do
  {
    if ( (*v3 & (1 << v2)) != 0 )
    {
      v4 = *(_DWORD *)(PlayerMgr_instance + 4 * v2 + 48);
      if ( ((unsigned int)&dword_60C7B37C & ~(1616306128 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B378) == 1 )
      {
        v5 = 1;
        if ( sub_6075F914(v4) )
          v5 = 2;
        if ( (FIELD_U8(v4, 1212) & 0x40) == 0 && sub_607869D0(v4 + 688) == 1 && *(_DWORD *)(v7 + 4 * v2) != 2 )
        {
          ((void (__fastcall *)(int, int, _DWORD, int))loc_6056D330)(a1, v4, v5, v2);
          *(_DWORD *)(v7 + 4 * v2) = 2;
        }
      }
    }
    ++v2;
  }
  while ( v2 != 4 );
}
