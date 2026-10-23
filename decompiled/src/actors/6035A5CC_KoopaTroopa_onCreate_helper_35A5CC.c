/* KoopaTroopa_onCreate_helper_35A5CC
 * address: 0x6035A5CC   size: 356   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall KoopaTroopa_onCreate_helper_35A5CC(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  float v5; // s0
  float v6; // s4
  float v7; // s0
  int v8; // r5
  _BYTE v9[12]; // [sp+0h] [bp-40h] BYREF
  float v10; // [sp+Ch] [bp-34h]
  float v11; // [sp+1Ch] [bp-24h]
  float v12; // [sp+2Ch] [bp-14h]

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*((int (**)(void))stru_60C95430._._.vtable + 2))() )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 844))(a1);
    sub_6039FB38(a1, v9);
    if ( FIELD_U32(a1, 7476) != 1 )
      goto LABEL_10;
LABEL_7:
    v5 = (float)FIELD_S32(a1, 156);
    v10 = v10 + 0.0;
    v6 = -(float)(v5 * -4.6566e-10);
    v7 = v5 * -4.6566e-10;
    if ( v7 <= 0.0 )
      v7 = v6;
    v11 = v11 + (float)(v7 + v7);
    v12 = v12 + 0.0;
    goto LABEL_10;
  }
  if ( FIELD_U32(a1, 6352) )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 844))(a1);
  sub_6039FB38(a1, v9);
  if ( FIELD_U32(a1, 7476) == 1 )
    goto LABEL_7;
LABEL_10:
  v8 = **(_DWORD **)(a1 + 6824);
  (*(void (__fastcall **)(int, _BYTE *))(*(_DWORD *)v8 + 60))(v8, v9);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v8 + 68))(v8, a1 + 6528);
  (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 52))(v8);
  return (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 56))(v8);
}
