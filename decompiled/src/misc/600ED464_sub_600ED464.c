/* sub_600ED464
 * address: 0x600ED464   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600ED464(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int v6; // r0
  char v7; // r12
  StageActor *owner; // r5
  unsigned int playerId; // r0
  char *v10; // r0
  __int16 v11; // r2
  StageActor *v12; // r5
  char v13; // r12
  unsigned int v14; // r0

  if ( (*(int (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0)._._._.vtable + 884))(a1) == 1 )
  {
    Enemy__collisionPlayer((int)a1, (int)a2, (int)a3);
    return;
  }
  v6 = Enemy__processCollision(a1, a2, a3, 2);
  if ( v6 )
  {
    if ( v6 != 2 )
    {
      (*(void (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0)._._._.vtable + 1708))(a1);
      return;
    }
    owner = FIELD_U32(a3, 0x40);
    if ( ((unsigned int)&dword_60C7B37C & ~(1611584728 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( owner )
    {
      if ( (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0).vtable)(owner, &dword_60C7B378) == 1 )
      {
        playerId = FIELD_U8(owner, 0x54);
        if ( playerId <= 3 )
        {
          v10 = (char *)a1 + 2 * playerId;
          v11 = 40;
LABEL_20:
          *((_WORD *)v10 + 3070) = v11;
        }
      }
    }
  }
  else
  {
    Enemy__collisionPlayer((int)a1, (int)a2, (int)a3);
    v12 = FIELD_U32(a3, 0x40);
    if ( ((unsigned int)&dword_60C7B37C & ~(1611584892 << v13) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v12 )
    {
      if ( (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(v12, 0x0).vtable)(v12, &dword_60C7B378) == 1
        && (BYTE1(v12[1].effectOffset.x) & 1) != 0 )
      {
        v14 = FIELD_U8(v12, 0x54);
        if ( v14 <= 3 )
        {
          v10 = (char *)a1 + 2 * v14;
          v11 = 32;
          goto LABEL_20;
        }
      }
    }
  }
}
