/* ChallengeSelectScene2D_ref
 * address: 0x607E2B48   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall ChallengeSelectScene2D_ref(int a1)
{
  int v2; // r7
  _DWORD *v3; // r1
  int v4; // r1
  int v5; // r1
  int a5[8]; // [sp+0h] [bp-20h] BYREF

  sub_60815858(dword_60CC6B68, 3);
  FIELD_U8(dword_60C9BB38, 628) = FIELD_U8(dword_60CC6D78, 20) ^ 1;
  v2 = dword_60CD0B40;
  a5[0] = (int)&sead__SafeStringBase__vtable;
  a5[1] = (int)"ChallengeSelectScene2D";
  FIELD_U32(a1, 268) = a1;
  FIELD_U32(a1, 272) = sub_607E2D18;
  FIELD_U32(a1, 276) = 0;
  FIELD_U32(a1, 264) = off_60C26A18;
  sead__SafeStringBase__operator_assign(a1 + 244, (int)a5);
  FIELD_U32(a1, 252) = 1;
  v3 = *(_DWORD **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 5u )
    v3 += 5;
  sub_609553AC(*v3, a1 + 228);
  sub_6090C9A0(a1 + 384);
  FIELD_U32(a1, 532) = 0;
  FIELD_U32(a1, 536) = 1184645120;
  FIELD_U8(a1, 388) = 1;
  sub_6090A7D4(a1 + 296, (float *)(a1 + 384));
  FIELD_U32(a1, 348) = 0;
  FIELD_U32(a1, 352) = 0;
  FIELD_U32(a1, 356) = 1132068864;
  FIELD_U32(a1, 360) = 0;
  FIELD_U32(a1, 364) = 0;
  FIELD_U32(a1, 368) = 0;
  (*(void (__fastcall **)(int, int))(FIELD_U32(a1, 296) + 16))(a1 + 296, a1 + 300);
  v4 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 5u )
    v4 += 20;
  *(_DWORD *)(*(_DWORD *)v4 + 72) = a1 + 296;
  v5 = FIELD_U32(v2, 36);
  if ( FIELD_U32(v2, 32) > 5u )
    v5 += 20;
  *(_DWORD *)(*(_DWORD *)v5 + 76) = a1 + 384;
  FIELD_U8(dword_60CC6C2C, 286) |= 1u;
  return StateMgr__changeState((StateMgr *)(a1 + 212), (StateBase *)&dword_60CC5A1C);
}
