/* FinalBowser__onDraw
 * address: 0x600702A0   size: 700   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F54
// 
// Overridden by: None
int __fastcall FinalBowser__onDraw(int a1)
{
  char v1; // r12
  int *v3; // r0
  int v4; // r5
  int v5; // r6
  int v6; // r5
  int v7; // r0
  int *v8; // r6
  _DWORD *v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r0

  v3 = *(int **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 8u )
    v3 += 8;
  v4 = *v3;
  if ( ((unsigned int)&dword_60C81740 & ~(1611072216 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
  {
    dword_60C8173C = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C81740);
  }
  v5 = v4 + 420;
  if ( !(*(int (__fastcall **)(int, int *))(*(_DWORD *)v4 + 8))(v4, &dword_60C8173C) )
    v5 = 420;
  v6 = *(_DWORD *)v5;
  v8 = (int *)(a1 + 7144);
  v7 = FIELD_U32(a1, 7144);
  if ( (v7 & 1) != 0 )
  {
    sub_60445608(v6, **(_DWORD **)(a1 + 7112), 0, 0);
    v7 = *v8;
  }
  if ( (v7 & 2) != 0 )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 7116));
  if ( FIELD_S32(a1, 7172) > 0 )
  {
    v9 = *(_DWORD **)(a1 + 7148);
    if ( v9 )
      sub_60445608(v6, *v9, 0, 0);
  }
  if ( FIELD_S32(a1, 7200) > 0 )
  {
    v10 = *(_DWORD **)(a1 + 7176);
    if ( v10 )
      sub_60445608(v6, *v10, 0, 0);
  }
  if ( FIELD_S32(a1, 7228) >= 1 )
  {
    v11 = *(_DWORD **)(a1 + 7204);
    if ( v11 )
      sub_60445608(v6, *v11, 0, 0);
  }
  if ( FIELD_S32(a1, 7256) >= 1 )
  {
    v12 = *(_DWORD **)(a1 + 7232);
    if ( v12 )
      sub_60445608(v6, *v12, 0, 0);
  }
  if ( FIELD_S32(a1, 7284) >= 1 )
  {
    v13 = *(_DWORD **)(a1 + 7260);
    if ( v13 )
      sub_60445608(v6, *v13, 0, 0);
  }
  if ( FIELD_S32(a1, 7312) >= 1 )
  {
    v14 = *(_DWORD **)(a1 + 7288);
    if ( v14 )
      sub_60445608(v6, *v14, 0, 0);
  }
  if ( FIELD_S32(a1, 7340) >= 1 )
  {
    v15 = *(_DWORD **)(a1 + 7316);
    if ( v15 )
      sub_60445608(v6, *v15, 0, 0);
  }
  if ( FIELD_S32(a1, 7368) >= 1 )
  {
    v16 = *(_DWORD **)(a1 + 7344);
    if ( v16 )
      sub_60445608(v6, *v16, 0, 0);
  }
  if ( (*(_BYTE *)v8 & 4) != 0 )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 7120));
  return 1;
}
