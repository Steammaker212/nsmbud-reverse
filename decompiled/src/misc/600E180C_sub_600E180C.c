/* sub_600E180C
 * address: 0x600E180C   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E180C(CollisionActor *a1)
{
  sead_ListNode **p_next; // r6
  int v3; // r5
  char v4; // r12
  _DWORD *v5; // r0
  int *v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r0
  int v9; // r0
  sead_ListNode *next; // r2
  sead_ListNode *v11; // r1
  sead_ListNode *v12; // r0
  int result; // r0

  p_next = &a1[1]._._.field_20.next;
  j_ModelWrapper_updateAnims(a1[1]._._.field_20.next);
  v3 = (int)*(p_next - 1511);
  if ( ((unsigned int)&dword_60C84B44 & ~(1611536448 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B44) )
  {
    dword_60C84B40 = (int)&off_60BC8314;
    _cxa_guard_release(&dword_60C84B44);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C84B40) == 1 )
  {
    v5 = *(_DWORD **)(v3 + 7096);
    v6 = (int *)v5[3];
    v7 = v5[2];
    v8 = v5[17];
    if ( v7 > v8 )
      v6 += v8;
    v9 = *v6;
    next = (*p_next)[1].next;
    v11 = (*p_next)[8].next;
    v12 = *(sead_ListNode **)(v9 + 24);
    if ( (*p_next)[1].previous > v11 )
      next = (sead_ListNode *)((char *)next + 4 * (_DWORD)v11);
    FIELD_U32(next, 0x0)[3].previous = v12;
  }
  FIELD_U32(a1, 0x0).speed.x = FIELD_U32(a1, 0x0).position.x - FIELD_U32(a1, 0x0).field_248.x;
  CollisionActor__handleGravity(a1);
  FIELD_U32(a1, 0x0).position.y = FIELD_U32(a1, 0x0).speed.y + FIELD_U32(a1, 0x0).position.y;
  CollisionMgr_process(FIELD_U8(a1, 0x288));
  result = (unsigned __int8)FIELD_U8(a1, 0x288)[2224];
  if ( (result & 1) != 0 )
  {
    FIELD_U32(a1, 0x0).speed.y = 0.0;
    return 0;
  }
  return result;
}
