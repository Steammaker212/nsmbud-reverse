/* sub_6008FACC
 * address: 0x6008FACC   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6008FACC(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r1
  unsigned int v4; // r0
  int v5; // r4
  char v6; // r12

  v2 = a1 + 1576;
  j_ModelWrapper_updateAnims(a1[1576]);
  CollisionMgr_process((_BYTE *)v2 - 5656);
  v3 = *(_DWORD *)(*v2 + 12);
  v4 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v4 )
    v3 += 4 * v4;
  if ( (*(_BYTE *)(*(_DWORD *)v3 + 28) & 0x20) != 0 )
  {
    (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C85F54);
    v5 = (*(int (__fastcall **)(_DWORD *))(*a1 + 628))(a1);
    if ( ((unsigned int)&dword_60C81760 & ~(1611201364 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C81760) )
    {
      dword_60C8175C = (int)&off_60BC6E94;
      _cxa_guard_release(&dword_60C81760);
    }
    if ( v5 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C8175C) == 1 )
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)v5 + 192))(v5, &dword_60C84148);
    }
  }
}
