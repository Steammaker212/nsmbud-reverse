/* Bowser__onDraw
 * address: 0x600C4DCC   size: 604   group: misc
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
int __fastcall Bowser__onDraw(int a1)
{
  char v1; // r12
  int *v3; // r0
  int v4; // r5
  int v5; // r6
  int v6; // r5
  _DWORD *v7; // r0
  bool v8; // zf
  _DWORD *v9; // r0
  bool v10; // zf
  _DWORD *v11; // r0
  bool v12; // zf
  _DWORD *v13; // r0
  bool v14; // zf
  _DWORD *v15; // r0
  bool v16; // zf
  _DWORD *v17; // r0
  bool v18; // zf
  _DWORD *v19; // r0
  bool v20; // zf
  _DWORD *v21; // r0
  bool v22; // zf

  v3 = *(int **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 8u )
    v3 += 8;
  v4 = *v3;
  if ( ((unsigned int)&dword_60C81740 & ~(1611419140 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
  {
    dword_60C8173C = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C81740);
  }
  v5 = v4 + 420;
  if ( !(*(int (__fastcall **)(int, int *))(*(_DWORD *)v4 + 8))(v4, &dword_60C8173C) )
    v5 = 420;
  v6 = *(_DWORD *)v5;
  sub_60445608(*(_DWORD *)v5, **(_DWORD **)(a1 + 7100), 0, 0);
  v7 = *(_DWORD **)(a1 + 8012);
  v8 = v7 == 0;
  if ( v7 )
  {
    v7 = *(_DWORD **)(a1 + 7984);
    v8 = v7 == 0;
  }
  if ( !v8 )
    sub_60445608(v6, *v7, 0, 0);
  v9 = *(_DWORD **)(a1 + 8044);
  v10 = v9 == 0;
  if ( v9 )
  {
    v9 = *(_DWORD **)(a1 + 8016);
    v10 = v9 == 0;
  }
  if ( !v10 )
    sub_60445608(v6, *v9, 0, 0);
  v11 = *(_DWORD **)(a1 + 8076);
  v12 = v11 == 0;
  if ( v11 )
  {
    v11 = *(_DWORD **)(a1 + 8048);
    v12 = v11 == 0;
  }
  if ( !v12 )
    sub_60445608(v6, *v11, 0, 0);
  v13 = *(_DWORD **)(a1 + 8108);
  v14 = v13 == 0;
  if ( v13 )
  {
    v13 = *(_DWORD **)(a1 + 8080);
    v14 = v13 == 0;
  }
  if ( !v14 )
    sub_60445608(v6, *v13, 0, 0);
  v15 = *(_DWORD **)(a1 + 8140);
  v16 = v15 == 0;
  if ( v15 )
  {
    v15 = *(_DWORD **)(a1 + 8112);
    v16 = v15 == 0;
  }
  if ( !v16 )
    sub_60445608(v6, *v15, 0, 0);
  v17 = *(_DWORD **)(a1 + 8172);
  v18 = v17 == 0;
  if ( v17 )
  {
    v17 = *(_DWORD **)(a1 + 8144);
    v18 = v17 == 0;
  }
  if ( !v18 )
    sub_60445608(v6, *v17, 0, 0);
  v19 = *(_DWORD **)(a1 + 8204);
  v20 = v19 == 0;
  if ( v19 )
  {
    v19 = *(_DWORD **)(a1 + 8176);
    v20 = v19 == 0;
  }
  if ( !v20 )
    sub_60445608(v6, *v19, 0, 0);
  v21 = *(_DWORD **)(a1 + 8236);
  v22 = v21 == 0;
  if ( v21 )
  {
    v21 = *(_DWORD **)(a1 + 8208);
    v22 = v21 == 0;
  }
  if ( !v22 )
    sub_60445608(v6, *v21, 0, 0);
  DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 7104));
  return 1;
}
