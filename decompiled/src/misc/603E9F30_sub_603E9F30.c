/* sub_603E9F30
 * address: 0x603E9F30   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603E9F30(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // r1
  int v5; // r1
  int v6; // r1
  _BOOL4 v7; // r2
  int v8; // r3
  int v9; // r5
  int v10; // r4
  int v11; // r0
  int v12; // r3
  bool v13; // zf
  int v14; // r5
  StateMethodExecuter *result; // r0

  sub_6077A260(dword_60CBFA90);
  v2 = (_DWORD *)PlayerMgr_instance;
  v3 = FIELD_U32(PlayerMgr_instance, 32);
  if ( v3 )
    FIELD_U32(v3, 1236) |= 2u;
  v4 = v2[9];
  if ( v4 )
    FIELD_U32(v4, 1236) |= 2u;
  v5 = v2[10];
  if ( v5 )
    FIELD_U32(v5, 1236) |= 2u;
  v6 = 1;
  v7 = 1;
  v8 = v2[11];
  if ( v8 )
  {
    FIELD_U32(v8, 1236) |= 2u;
    v7 = v2[11] == 0;
  }
  v9 = v2[8];
  v10 = v2[9];
  v11 = v2[10];
  v12 = v9;
  if ( v9 )
    v12 = 1;
  if ( v10 )
    ++v12;
  if ( v11 )
    ++v12;
  if ( !v7 )
    ++v12;
  v13 = v9 == 0;
  v14 = 0;
  if ( v13 )
    v14 = -1;
  if ( !v10 )
    v6 = v14;
  if ( v11 )
    v6 = 2;
  if ( !v7 )
    v6 = 3;
  if ( v12 != 1 )
    v6 = -1;
  FIELD_U32(a1, 36) = v6;
  result = StateMgr__changeState((StateMgr *)(a1 + 108), (StateBase *)&dword_60C998C0);
  FIELD_U32(a1, 24) = 0;
  return result;
}
