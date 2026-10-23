/* sub_600C7A6C
 * address: 0x600C7A6C   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_600C7A6C(unsigned int *a1)
{
  _BYTE *v2; // r5
  char v3; // r12

  a1[1532] = 0;
  sub_60008EB4(ActorMgr__instance + 27168, sub_600C99A0);
  FIELD_U32(dword_60C99DD4, 1376) |= 2u;
  EventMgr_set(EventMgr__instance, 9u, 0, 1, 0, 0, 0, 0);
  v2 = (_BYTE *)ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[1528]);
  if ( ((unsigned int)dword_60C83C10 & ~(1611430676 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C83C10) )
  {
    dword_60C83C0C = (int)&off_60BC1FA8;
    _cxa_guard_release(dword_60C83C10);
  }
  if ( v2 && (**(int (__fastcall ***)(_BYTE *, int *))v2)(v2, &dword_60C83C0C) == 1 && v2[7152] )
    (*(void (__fastcall **)(_BYTE *, int *))(*(_DWORD *)v2 + 192))(v2, &dword_60C83B1C);
  a1[1555] = 0;
  a1[1554] = 0;
  return StateMgr__changeState((StateMgr *)(a1 + 1561), (StateBase *)&dword_60C83F20);
}
