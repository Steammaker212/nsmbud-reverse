/* sub_607F5060
 * address: 0x607F5060   size: 712   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607F5060(int a1)
{
  int v2; // r7
  _DWORD *v3; // r1
  _DWORD *v4; // r1
  _DWORD *v5; // r1
  _DWORD *v6; // r1
  int v7; // r5
  int v8; // r6
  int v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // r1
  int v13; // r1
  int v14; // r1
  int a5; // [sp+0h] [bp-28h] BYREF
  const char *v17; // [sp+4h] [bp-24h]

  FIELD_U8(dword_60C9BB38, 628) = 1;
  v2 = dword_60CD0B40;
  a5 = (int)&sead__SafeStringBase__vtable;
  v17 = "ResultScene2D";
  FIELD_U32(a1, 268) = a1;
  FIELD_U32(a1, 272) = sub_607F5370;
  FIELD_U32(a1, 276) = 0;
  FIELD_U32(a1, 264) = off_60C2779C;
  sead__SafeStringBase__operator_assign(a1 + 244, (int)&a5);
  FIELD_U32(a1, 252) = 1;
  v3 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 5u )
    v3 += 5;
  sub_609553AC(*v3, a1 + 228);
  a5 = (int)&sead__SafeStringBase__vtable;
  v17 = "ResultScene3D";
  FIELD_U32(a1, 336) = a1;
  FIELD_U32(a1, 340) = sub_607F54F4;
  FIELD_U32(a1, 344) = 0;
  FIELD_U32(a1, 332) = off_60C2779C;
  sead__SafeStringBase__operator_assign(a1 + 312, (int)&a5);
  FIELD_U32(a1, 320) = 1;
  v4 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 6u )
    v4 += 6;
  sub_609553AC(*v4, a1 + 296);
  a5 = (int)&sead__SafeStringBase__vtable;
  v17 = "ResultScene2DFront";
  FIELD_U32(a1, 404) = a1;
  FIELD_U32(a1, 408) = sub_607F551C;
  FIELD_U32(a1, 412) = 0;
  FIELD_U32(a1, 400) = off_60C2779C;
  sead__SafeStringBase__operator_assign(a1 + 380, (int)&a5);
  FIELD_U32(a1, 388) = 1;
  v5 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 7u )
    v5 += 7;
  sub_609553AC(*v5, a1 + 364);
  a5 = (int)&sead__SafeStringBase__vtable;
  v17 = "ResultSceneGather";
  FIELD_U32(a1, 676) = a1;
  FIELD_U32(a1, 680) = sub_607F5530;
  FIELD_U32(a1, 684) = 0;
  FIELD_U32(a1, 672) = off_60C277D8;
  sead__SafeStringBase__operator_assign(a1 + 652, (int)&a5);
  FIELD_U32(a1, 660) = 2;
  v6 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 6u )
    v6 += 6;
  sub_6095537C(*v6, 0, a1 + 636);
  v7 = a1 + 860;
  sub_6090C9A0(a1 + 860);
  v8 = a1 + 772;
  FIELD_U32(a1, 1008) = 0;
  FIELD_U32(a1, 1012) = 1184645120;
  FIELD_U8(a1, 864) = 1;
  sub_6090A7D4(a1 + 772, (float *)(a1 + 860));
  FIELD_U32(a1, 824) = 0;
  FIELD_U32(a1, 828) = 0;
  FIELD_U32(a1, 832) = 1132068864;
  FIELD_U32(a1, 836) = 0;
  FIELD_U32(a1, 840) = 0;
  FIELD_U32(a1, 844) = 0;
  (*(void (__fastcall **)(int, int))(FIELD_U32(a1, 772) + 16))(a1 + 772, a1 + 776);
  v9 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 5u )
    v9 += 20;
  *(_DWORD *)(*(_DWORD *)v9 + 72) = v8;
  v10 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 5u )
    v10 += 20;
  *(_DWORD *)(*(_DWORD *)v10 + 76) = v7;
  v11 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 6u )
    v11 += 24;
  *(_DWORD *)(*(_DWORD *)v11 + 72) = v8;
  v12 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 6u )
    v12 += 24;
  *(_DWORD *)(*(_DWORD *)v12 + 76) = v7;
  v13 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 7u )
    v13 += 28;
  *(_DWORD *)(*(_DWORD *)v13 + 72) = v8;
  v14 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 7u )
    v14 += 28;
  *(_DWORD *)(*(_DWORD *)v14 + 76) = v7;
  return StateMgr__changeState((StateMgr *)(a1 + 212), (StateBase *)&dword_60CC6280);
}
