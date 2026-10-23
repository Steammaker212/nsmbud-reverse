/* sub_605D684C
 * address: 0x605D684C   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605D684C(int a1)
{
  int v2; // r1
  char v3; // r2
  bool v4; // zf
  StateMethodExecuter *result; // r0
  int v6; // r2
  int v7; // r1
  int v8; // r1
  int target; // [sp+4h] [bp-14h] BYREF

  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 96) = -1065353216;
  if ( (FIELD_U8(a1, 6804) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  if ( sub_605E3BBC(a1) )
  {
    v2 = 0;
    v3 = FIELD_U8(dword_60C9CF0C, 1361);
    v4 = (v3 & 6) == 0;
    if ( (v3 & 6) == 0 )
    {
      v2 = 1;
      v4 = (v3 & 8) == 0;
    }
    if ( v4 )
    {
      target = 0;
      moveValueTo((int *)(a1 + 160), &target, (int *)(a1 + 7772));
      result = (StateMethodExecuter *)sub_605EB988(**(_DWORD **)(FIELD_U32(a1, 6076) + 12), v8);
      if ( result == (StateMethodExecuter *)1 )
      {
        FIELD_U32(a1, 8000) = 0;
        FIELD_U32(a1, 8004) = 0;
        FIELD_U32(a1, 8008) = 0;
        return StateMgr__changeState((StateMgr *)(a1 + 6292), &stru_60CB16B4);
      }
    }
    else
    {
      FIELD_U32(a1, 8000) = v2;
      FIELD_U32(a1, 8004) = 0;
      FIELD_U32(a1, 8008) = 0;
      return StateMgr__changeState((StateMgr *)(a1 + 6292), &stru_60CB17C8);
    }
  }
  else
  {
    v6 = 0x40000000;
    FIELD_U32(a1, 120) = 0;
    v7 = FIELD_U32(a1, 6440);
    FIELD_U32(a1, 80) = v7;
    if ( v7 == 1 )
      v6 = -1073741824;
    FIELD_U32(a1, 160) = v6;
    FIELD_U32(a1, 8000) = 67305472;
    FIELD_U32(a1, 8004) = 0;
    FIELD_U32(a1, 8008) = 0;
    return StateMgr__changeState((StateMgr *)(a1 + 6292), (StateBase *)&dword_60CB1690);
  }
  return result;
}
