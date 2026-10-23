/* sub_60621E10
 * address: 0x60621E10   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderNode *__fastcall sub_60621E10(StateActor *a1)
{
  unsigned int next; // r1
  ActiveColliderNode **p_next; // r6
  int v4; // r5
  char v5; // r12
  int v6; // r0
  bool v7; // zf
  ActiveColliderNode *result; // r0

  p_next = &a1[1]._._.aCollider.createNode.next;
  next = (unsigned int)a1[1]._._.aCollider.createNode.next;
  if ( next )
  {
    v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, next);
    if ( ((unsigned int)dword_60CB3A50 & ~(1617043032 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60CB3A50) )
    {
      dword_60CB3A4C = (int)&off_60C1138C;
      _cxa_guard_release(dword_60CB3A50);
    }
    if ( !v4 )
      goto LABEL_9;
    v6 = (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60CB3A4C);
    v7 = v6 == 1;
    if ( v6 == 1 )
      v7 = FIELD_U8(v4, 19) == 0;
    if ( v7 )
    {
      result = *p_next;
      if ( *p_next )
        return result;
    }
    else
    {
LABEL_9:
      *p_next = 0;
    }
  }
  if ( !*(_DWORD *)&a1[1]._._.field_228 )
    return (ActiveColliderNode *)(*(int (__fastcall **)(StateActor *, int *))(FIELD_U32(a1, 0x0)._._.vtable + 192))(
                                   a1,
                                   &dword_60CB391C);
  FIELD_U32(a1, 0x0)._.field_218 = 1;
  return (ActiveColliderNode *)StageActor__delete(a1, 1);
}
