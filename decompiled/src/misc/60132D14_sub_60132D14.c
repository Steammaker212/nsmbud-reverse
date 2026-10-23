/* sub_60132D14
 * address: 0x60132D14   size: 888   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60132D14(int a1, int a2)
{
  int v4; // r0
  int v5; // r1
  char v6; // r12
  int v7; // r6
  int (*v8)(); // r1
  int (__fastcall ***v9)(_DWORD, int *); // r7
  StateActor *v10; // r1
  CollisionMgr *collisionMgr; // r0
  char v12; // r12
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r7
  int v17; // r0

  *(_DWORD *)(FIELD_U32(a1, 36) + 80) = FIELD_U32(a2, 80);
  (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 36) + 68))(FIELD_U32(a1, 36), FIELD_S8(a2, 84));
  *(_DWORD *)(FIELD_U32(a1, 36) + 160) = dword_60AF1EC0[*(_DWORD *)(FIELD_U32(a1, 36) + 80)];
  v4 = dword_60CC6D8C;
  if ( !FIELD_U8(dword_60CC6D8C, 17) )
  {
    sub_60158F04((ActiveCollider *)(FIELD_U32(a1, 36) + 188), 3);
    v4 = dword_60CC6D8C;
  }
  *(_DWORD *)(FIELD_U32(a1, 36) + 328) = 9;
  if ( FIELD_U8(v4, 17) )
    v5 = 554;
  else
    v5 = 32815;
  sub_60158FA8((ActiveCollider *)(FIELD_U32(a1, 36) + 188), v5);
  v7 = 0;
  *(_DWORD *)(FIELD_U32(a1, 36) + 336) = 0;
  v8 = sub_601349FC;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    v8 = sub_601330F8;
  *(_DWORD *)(FIELD_U32(a1, 36) + 344) = v8;
  *(_DWORD *)(FIELD_U32(a1, 36) + 336) |= 0x88200u;
  v9 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 36);
  if ( ((unsigned int)&dword_60C87668 & ~(1611869720 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C87668) )
  {
    dword_60C87664 = (int)&off_60BD20C4;
    _cxa_guard_release(&dword_60C87668);
  }
  if ( v9 )
  {
    v7 = (**v9)(v9, &dword_60C87664);
    if ( v7 )
      v7 = (int)v9;
  }
  FIELD_U32(v7, 6588) = 8;
  FIELD_U32(v7, 6584) = 1;
  v10 = *(StateActor **)(a1 + 36);
  collisionMgr = (CollisionMgr *)FIELD_U32(v10, 0x0).collisionMgr;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    CollisionMgr_init(collisionMgr, v10, &stru_60AF6598, &stru_60AF65A4, &stru_60AF65B0);
    *(_DWORD *)(FIELD_U32(a1, 36) + 3192) |= 8u;
    *(_DWORD *)(FIELD_U32(a1, 36) + 3192) |= 0x10u;
    v13 = FIELD_U32(a1, 36);
    FIELD_U32(v13, 3176) |= 8u;
    FIELD_U32(v13, 3184) |= 8u;
    v14 = FIELD_U32(a1, 36);
    FIELD_U32(v14, 3176) |= 0x10u;
    FIELD_U32(v14, 3184) |= 0x10u;
    *(_DWORD *)(FIELD_U32(a1, 36) + 3200) |= 8u;
    *(_DWORD *)(FIELD_U32(a1, 36) + 3200) |= 0x10u;
    *(_DWORD *)(FIELD_U32(a1, 36) + 3192) |= 0x40000000u;
    v15 = FIELD_U32(a1, 36);
    FIELD_U32(v15, 3176) |= 0x40000000u;
    FIELD_U32(v15, 3184) |= 0x40000000u;
    *(_DWORD *)(FIELD_U32(a1, 36) + 3200) |= 0x40000000u;
  }
  else
  {
    CollisionMgr_init(collisionMgr, v10, &stru_60AF65BC, &stru_60AF65C8, &stru_60AF65D4);
  }
  v16 = FIELD_U32(a1, 36);
  if ( ((unsigned int)&dword_60C87668 & ~(1611870148 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C87668) )
  {
    dword_60C87664 = (int)&off_60BD20C4;
    _cxa_guard_release(&dword_60C87668);
  }
  if ( v16 )
    (**(void (__fastcall ***)(int, int *))v16)(v16, &dword_60C87664);
  StateMgr__changeState((StateMgr *)(v16 + 6084), &stru_60C875C4);
  *(float *)(FIELD_U32(a1, 36) + 120) = *(float *)(FIELD_U32(a1, 36) + 120) + (float)(FIELD_F32(a2, 120) * 0.5);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    v17 = FIELD_U32(a2, 8);
    if ( v17 )
      FIELD_U32(v7, 6580) = v17;
    FIELD_U8(v7, 6592) = 1;
  }
  return 1;
}
