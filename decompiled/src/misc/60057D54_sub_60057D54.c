/* sub_60057D54
 * address: 0x60057D54   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60057D54(int a1)
{
  int *v2; // r4
  _BYTE *v3; // r0
  int v4; // r0
  int v5; // r2
  int v6; // r2
  StateBase *CurrentState; // r0
  int v8; // r6
  int result; // r0
  _DWORD *v10; // r0
  int *v11; // r1
  unsigned int v12; // r2
  unsigned int v13; // r0
  float v14; // s0
  int v15; // r0
  int v16; // r2
  int v17; // [sp+0h] [bp-20h] BYREF
  int v18; // [sp+4h] [bp-1Ch]
  int v19; // [sp+8h] [bp-18h] BYREF
  int v20; // [sp+Ch] [bp-14h] BYREF

  v2 = (int *)(a1 + 108);
  ((void (__fastcall *)(int *, int *, int, _DWORD))checkLiquidCollisions)(
    &v19,
    &v20,
    a1 + 108,
    FIELD_U8(a1, 86));
  v3 = (_BYTE *)(a1 + 8736);
  if ( v19 == 1 )
  {
    if ( FIELD_U8(a1, 8736) )
      goto LABEL_7;
    *v3 = 1;
    v4 = TileMgr_instance;
    v17 = *v2;
    v18 = v20;
    v5 = 4;
  }
  else
  {
    if ( !FIELD_U8(a1, 8736) )
      goto LABEL_7;
    *v3 = 0;
    v6 = FIELD_U32(a1, 112);
    v4 = TileMgr_instance;
    v17 = FIELD_U32(a1, 108);
    v18 = v6;
    v5 = 5;
  }
  TileMgr_splashRelated(v4, &v17, v5);
LABEL_7:
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (__fastcall **)(int *, _DWORD))(dword_60C80A54 + 8))(&dword_60C80A54, FIELD_U32(dword_60C80A54, 8));
  if ( v8 != result )
    return result;
  v10 = *(_DWORD **)(a1 + 7204);
  v11 = (int *)v10[3];
  v12 = v10[2];
  v13 = v10[17];
  if ( v12 > v13 )
    v11 += v13;
  result = *v11;
  v14 = *(float *)(*v11 + 20);
  if ( v14 == 56.0 )
  {
    v15 = TileMgr_instance;
    v17 = *v2;
    v18 = v20;
    v16 = 4;
  }
  else
  {
    if ( v14 != 15.0 )
      return result;
    v15 = TileMgr_instance;
    v17 = *v2;
    v18 = v20;
    v16 = 5;
  }
  return TileMgr_splashRelated(v15, &v17, v16);
}
