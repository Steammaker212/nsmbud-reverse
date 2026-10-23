/* sub_600EC210
 * address: 0x600EC210   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600EC210(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  char v6; // r12
  StageActor *owner; // r5
  char v8; // r12
  unsigned int playerId; // r0
  char *v10; // r0
  __int16 v11; // r2
  StageActor *v12; // r5
  unsigned int v13; // r0

  if ( (*(int (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0)._._._.vtable + 884))(a1) == 1 )
  {
    Enemy__collisionPlayer((int)a1, (int)a2, (int)a3);
  }
  else
  {
    switch ( Enemy__processCollision(a1, a2, a3, 2) )
    {
      case 0:
        Enemy__collisionPlayer((int)a1, (int)a2, (int)a3);
        owner = FIELD_U32(a3, 0x40);
        if ( ((unsigned int)&dword_60C7B37C & ~(1611580124 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        if ( owner )
        {
          if ( (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0).vtable)(owner, &dword_60C7B378) == 1
            && (BYTE1(owner[1].effectOffset.x) & 1) != 0 )
          {
            playerId = FIELD_U8(owner, 0x54);
            if ( playerId <= 3 )
            {
              v10 = (char *)a1 + 2 * playerId;
              v11 = 32;
              goto LABEL_21;
            }
          }
        }
        break;
      case 1:
      case 3:
        if ( !(*(int (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0)._._._.vtable + 888))(a1) )
          (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0)._._._.vtable + 804))(a1, FIELD_U32(a3, 0x40));
        break;
      case 2:
        v12 = FIELD_U32(a3, 0x40);
        if ( ((unsigned int)&dword_60C7B37C & ~(1611580284 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        if ( v12 )
        {
          if ( (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(v12, 0x0).vtable)(v12, &dword_60C7B378) == 1 )
          {
            v13 = FIELD_U8(v12, 0x54);
            if ( v13 <= 3 )
            {
              v10 = (char *)a1 + 2 * v13;
              v11 = 40;
LABEL_21:
              *((_WORD *)v10 + 3070) = v11;
            }
          }
        }
        break;
      default:
        return;
    }
  }
}
