/* sub_600F885C
 * address: 0x600F885C   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_ListNode *__fastcall sub_600F885C(StateActor *a1)
{
  signed int v2; // r1
  int *p_target; // r1
  sead_ListNode *result; // r0
  int settings1; // r1
  int v6; // r1
  int v7; // [sp+4h] [bp-14h] BYREF
  int target; // [sp+8h] [bp-10h] BYREF
  int speed; // [sp+Ch] [bp-Ch] BYREF

  j_ModelWrapper_updateAnims(a1[1]._._._.vtable);
  v2 = StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x0)._.position);
  FIELD_U32(a1, 0x0)._.direction = v2;
  speed = 35791394;
  if ( v2 )
  {
    v7 = -dword_60C85BBC;
    p_target = &v7;
  }
  else
  {
    target = dword_60C85BBC;
    p_target = &target;
  }
  moveValueTo(&FIELD_U32(a1, 0x0)._.rotation.y, p_target, &speed);
  result = (sead_ListNode *)&a1[1]._._._.settings1;
  settings1 = a1[1]._._._.settings1;
  if ( settings1 >= 1 )
  {
    v6 = settings1 - 1;
    FIELD_U32(result, 0x0) = (sead_ListNode *)v6;
    if ( !v6 )
    {
      result = a1[1]._._._.field_20.next;
      if ( result )
        BYTE2(result[775].previous) = 1;
    }
  }
  return result;
}
