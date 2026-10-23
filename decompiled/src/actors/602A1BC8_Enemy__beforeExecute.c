/* Enemy__beforeExecute
 * address: 0x602A1BC8   size: 572   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CollisionActor : 0x60003310
// 
// Overridden by:
//   - 0x6027730C : Fuzzy
//   - 0x60024CEC : BossBase
//   - 0x60271DD4 : CarryableEnemy
signed int __fastcall Enemy__beforeExecute(CollisionActor *a1)
{
  signed int v2; // r1
  signed int result; // r0
  StateBase *CurrentState; // r0
  int v5; // r5
  int v6; // r0
  int vtable; // r0
  int v8; // r1
  _BYTE *v9; // r6
  unsigned int v10; // r0

  v2 = CollisionActor__beforeExecute(&FIELD_U32(a1, 0x0));
  result = 0;
  if ( v2 != 1 )
    return result;
  if ( !FIELD_U8(a1, 0x218) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)&a1[1]._._.settings1);
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v5 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))()
      && (*(int (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 360))(a1) == 1 )
    {
      v6 = FIELD_U32(AreaRumbleMgr_instance, 56);
      if ( (v6 & 2) != 0 )
      {
        if ( (*(int (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 424))(a1) == 1 )
        {
          vtable = FIELD_U32(a1, 0x0);
          v8 = 0;
LABEL_13:
          (*(void (__fastcall **)(CollisionActor *, int))(vtable + 348))(a1, v8);
        }
      }
      else
      {
        if ( (v6 & 4) == 0 )
        {
          if ( (v6 & 1) != 0 )
            (*(void (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 420))(a1);
          goto LABEL_14;
        }
        if ( (*(int (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 424))(a1) == 1 )
        {
          vtable = FIELD_U32(a1, 0x0);
          v8 = 1;
          goto LABEL_13;
        }
      }
    }
  }
LABEL_14:
  v9 = (char *)&a1[1]._.aCollider.node3.next + 1;
  if ( LOBYTE(a1[1]._.aCollider.node3.next) )
  {
    if ( *v9 )
      sub_6040A800(dword_60C9A1F0);
    sub_6040A81C(dword_60C9A1F0);
  }
  LOBYTE(a1[1]._.aCollider.node3.next) = 0;
  *v9 = 0;
  if ( LOBYTE(a1[1]._._.field_48) )
  {
    if ( !FIELD_U8(a1, 0x218) )
    {
      FIELD_U8(a1, 0x218) = 1;
      v10 = SLOBYTE(a1[1]._._.field_44);
      if ( v10 <= 3 )
        ++*(_DWORD *)(dword_60C99DD4 + 72 * v10 + 348);
      (*(void (__fastcall **)(CollisionActor *, Actor *))(FIELD_U32(a1, 0x0) + 192))(a1, a1[1]._._.parent);
    }
    sub_6040A960(dword_60C9A1F0, SBYTE2(a1[1]._.aCollider.node3.next));
    LOBYTE(a1[1]._._.field_48) = 0;
    return 1;
  }
  else
  {
    if ( LOWORD(a1[1]._.aCollider.activeNode.prev) )
      --LOWORD(a1[1]._.aCollider.activeNode.prev);
    if ( HIWORD(a1[1]._.aCollider.activeNode.prev) )
      --HIWORD(a1[1]._.aCollider.activeNode.prev);
    sub_602A442C(&a1[1]._._.field_4C);
    return 1;
  }
}
