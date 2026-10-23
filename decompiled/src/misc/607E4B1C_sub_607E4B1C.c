/* sub_607E4B1C
 * address: 0x607E4B1C   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607E4B1C(_DWORD **a1)
{
  char v1; // r12
  int *v3; // r0
  int v4; // r5
  int v5; // r1
  _DWORD *v6; // r5

  v3 = *(int **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 6u )
    v3 += 6;
  v4 = *v3;
  if ( ((unsigned int)&dword_60C81740 & ~(1618889556 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
  {
    dword_60C8173C = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C81740);
  }
  if ( v4 )
  {
    v5 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v4 + 8))(v4, &dword_60C8173C);
    if ( v5 )
      v5 = v4;
  }
  else
  {
    v5 = 0;
  }
  v6 = DrawMgr_instance;
  sub_604431BC(DrawMgr_instance, v5, 1u);
  DrawMgr_drawModel2(v6, a1[639]);
  DrawMgr_drawModel2(v6, a1[640]);
  DrawMgr_drawModel2(v6, a1[641]);
  DrawMgr_drawModel2(v6, a1[642]);
  DrawMgr_drawModel2(v6, a1[643]);
  DrawMgr_drawModel2(v6, a1[644]);
  DrawMgr_drawModel2(v6, a1[645]);
  DrawMgr_drawModel2(v6, a1[646]);
  DrawMgr_drawModel2(v6, a1[647]);
  DrawMgr_drawModel2(v6, a1[648]);
  DrawMgr_drawModel2(v6, a1[649]);
  return sub_60443298((int)v6);
}
