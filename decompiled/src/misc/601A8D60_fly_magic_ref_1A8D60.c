/* fly_magic_ref_1A8D60
 * address: 0x601A8D60   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall fly_magic_ref_1A8D60(int a1)
{
  int v2; // r0
  int v3; // r0
  StateMethodExecuter *result; // r0
  _DWORD *v5; // r0
  int v6; // r1
  _DWORD v7[4]; // [sp+8h] [bp-10h] BYREF

  if ( FIELD_S32(a1, 500) < 0 )
    FIELD_U32(a1, 500) = sub_601E4EA4(dword_60C8B13C, 147, 0, a1 + 80, 1);
  v2 = FIELD_U32(a1, 180) - FIELD_U32(a1, 496);
  FIELD_U32(a1, 180) = v2;
  FIELD_U32(a1, 192) = v2;
  sub_60168EA0(a1);
  v3 = FIELD_U32(a1, 484);
  if ( !v3 )
    return StateMgr__changeState((StateMgr *)(a1 + 296), (StateBase *)&dword_60C8A324);
  result = (StateMethodExecuter *)(v3 - 1);
  FIELD_U32(a1, 484) = result;
  if ( result == (StateMethodExecuter *)60 )
  {
    v5 = *(_DWORD **)(a1 + 268);
    v6 = FIELD_U32(a1, 272);
    v7[0] = &sead__SafeStringBase__vtable;
    v7[1] = "fly_magic";
    return (StateMethodExecuter *)sub_60421938(v5, v6, (int)v7);
  }
  return result;
}
