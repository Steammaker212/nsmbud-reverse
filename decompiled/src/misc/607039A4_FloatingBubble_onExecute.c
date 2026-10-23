/* FloatingBubble_onExecute
 * address: 0x607039A4   size: 640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall FloatingBubble_onExecute(int a1)
{
  int v2; // r0
  _DWORD *v3; // r9
  int *v4; // r11
  int v5; // r10
  int v6; // r6
  int v7; // r7
  int v8; // r0
  int v9; // r1
  int v10; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r0
  int v14; // r0
  int v15; // r1
  int v16; // r0
  int v17; // r0
  int v18; // r1
  int v19; // r0
  int v20; // r1
  int v22; // [sp+4h] [bp-2Ch] BYREF
  int v23; // [sp+8h] [bp-28h]

  v3 = (_DWORD *)(a1 + 6944);
  v2 = FIELD_U32(a1, 6944);
  if ( v2 )
    *v3 = v2 - 1;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v4 = (int *)(a1 + 6960);
  v5 = a1 + 6104;
  v6 = a1 + 6104;
  if ( !FIELD_U8(a1, 6929) )
    v6 = a1 + 6504;
  v7 = PlayerMgr_instance;
  v8 = sub_60788F54(PlayerMgr_instance, 0);
  if ( v8 )
  {
    if ( (FIELD_U8(v8, 1235) & 0x20) == 0 )
    {
      v9 = FIELD_U32(v8, 108);
      v10 = FIELD_U32(v8, 112);
      v22 = v9;
      v23 = v10;
      ((void (__fastcall *)(int, int *, float))loc_60160718)(v6, &v22, 0.0);
      if ( (*(int (__fastcall **)(int, _DWORD, int *))(*(_DWORD *)v6 + 40))(v6, 0, &v22) == 1 )
        *v4 |= 1u;
    }
  }
  v11 = sub_60788F54(v7, 1);
  if ( v11 )
  {
    if ( (FIELD_U8(v11, 1235) & 0x20) == 0 )
    {
      v12 = FIELD_U32(v11, 108);
      v13 = FIELD_U32(v11, 112);
      v22 = v12;
      v23 = v13;
      ((void (__fastcall *)(int, int *, float))loc_60160718)(v6, &v22, 0.0);
      if ( (*(int (__fastcall **)(int, _DWORD, int *))(*(_DWORD *)v6 + 40))(v6, 0, &v22) == 1 )
        *v4 |= 2u;
    }
  }
  v14 = sub_60788F54(v7, 2);
  if ( v14 )
  {
    if ( (FIELD_U8(v14, 1235) & 0x20) == 0 )
    {
      v15 = FIELD_U32(v14, 108);
      v16 = FIELD_U32(v14, 112);
      v22 = v15;
      v23 = v16;
      ((void (__fastcall *)(int, int *, float))loc_60160718)(v6, &v22, 0.0);
      if ( (*(int (__fastcall **)(int, _DWORD, int *))(*(_DWORD *)v6 + 40))(v6, 0, &v22) == 1 )
        *v4 |= 4u;
    }
  }
  v17 = sub_60788F54(v7, 3);
  if ( v17 )
  {
    if ( (FIELD_U8(v17, 1235) & 0x20) == 0 )
    {
      v18 = FIELD_U32(v17, 108);
      v19 = FIELD_U32(v17, 112);
      v22 = v18;
      v23 = v19;
      ((void (__fastcall *)(int, int *, float))loc_60160718)(v6, &v22, 0.0);
      if ( (*(int (__fastcall **)(int, _DWORD, int *))(*(_DWORD *)v6 + 40))(v6, 0, &v22) == 1 )
        *v4 |= 8u;
    }
  }
  v20 = *v4;
  if ( *v4 != FIELD_U32(a1, 6964) )
    *v3 = 3;
  FIELD_U32(a1, 6964) = v20;
  *v4 = 0;
  if ( !FIELD_U8(a1, 6929) )
    v5 = a1 + 6504;
  (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 28))(v5);
  sub_6070382C((float *)a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
