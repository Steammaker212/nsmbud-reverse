/* sub_6028D0C0
 * address: 0x6028D0C0   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6028D0C0(Enemy *a1, int a2, ActiveCollider *a3)
{
  char v3; // r12
  StageActor *owner; // r7
  float v8; // s16
  int v9; // r0
  char v10; // r12
  StageActor *v11; // r7
  char *v12; // r0
  Vec2 v13; // [sp+0h] [bp-28h] BYREF

  owner = FIELD_U32(a3, 0x40);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613287660 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( owner && (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B378) == 1 )
  {
    v8 = FIELD_F32(a2, 176);
    v9 = Enemy__processCollision(a1, (ActiveCollider *)a2, a3, 0);
    switch ( v9 )
    {
      case 3:
        Enemy_killSpin(a1, FIELD_U32(a3, 0x40));
        break;
      case 1:
        v12 = byte_60AFE3F4;
        if ( v8 < 0.0 )
          v12 = &byte_60AFE3F5;
        v13.x = (float)*v12 * 0.5;
        v13.y = 0.0;
        Enemy_killWithState(a1, FIELD_U32(a3, 0x40), &v13, (int)&stru_60C906EC);
        break;
      case 0:
        v11 = FIELD_U32(a3, 0x40);
        if ( ((unsigned int)&dword_60C7B374 & ~(1613287828 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
        {
          dword_60C7B370 = (int)&off_60BC00B0;
          _cxa_guard_release(&dword_60C7B374);
        }
        if ( v11
          && (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(v11, 0x0))(v11, &dword_60C7B370) == 1
          && !(*(int (__fastcall **)(StageActor *))(FIELD_U32(v11, 0x0) + 1156))(v11) )
        {
          Enemy__collisionPlayer((int)a1, a2, (int)a3);
        }
        break;
    }
  }
}
