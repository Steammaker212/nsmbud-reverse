/* sub_600221A0
 * address: 0x600221A0   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600221A0(int a1, int a2, unsigned int a3, int a4)
{
  char v4; // r12
  unsigned int v7; // r0
  int v9; // r7
  int v10; // [sp+4h] [bp-24h] BYREF
  int v11; // [sp+8h] [bp-20h]
  int v12; // [sp+Ch] [bp-1Ch]

  v7 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( a3 < 4 )
    v7 = a3;
  v9 = *(_DWORD *)(PlayerMgr_instance + 4 * v7 + 48);
  if ( ((unsigned int)&dword_60C7B374 & ~(1610752496 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( v9 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C7B370) == 1 )
    {
      v11 = *(_DWORD *)(sub_6075F950(v9) + 4);
      v10 = FIELD_U32(v9, 108);
      v12 = 0;
      sub_60022540(0, &v10, a2, a3, a4);
    }
  }
}
