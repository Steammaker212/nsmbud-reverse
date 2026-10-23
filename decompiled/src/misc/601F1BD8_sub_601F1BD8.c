/* sub_601F1BD8
 * address: 0x601F1BD8   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601F1BD8(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  StateMethodExecuter *result; // r0
  int a5; // [sp+0h] [bp-10h] BYREF
  int target; // [sp+4h] [bp-Ch] BYREF

  target = 0x40000000;
  a5 = 0x8000000;
  moveValueTo((int *)(a1 + 180), &target, &a5);
  v2 = *(_DWORD **)(a1 + 304);
  v3 = v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += 4 * v5;
  result = (StateMethodExecuter *)*(unsigned __int8 *)(*(_DWORD *)v3 + 28);
  if ( ((unsigned __int8)result & 0x20) != 0 )
  {
    FIELD_F32(a1, 608) = FIELD_F32(a1, 608) + -10.0;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    return StateMgr__changeState((StateMgr *)(a1 + 288), (StateBase *)&unk_60C8B654);
  }
  return result;
}
