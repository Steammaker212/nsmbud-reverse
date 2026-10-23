/* SE_EMY_YOSHI_STEP_ref_2F6A34
 * address: 0x602F6A34   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_EMY_YOSHI_STEP_ref_2F6A34(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  StageActor *owner; // r5
  char v7; // r12
  _DWORD v8[8]; // [sp+0h] [bp-20h] BYREF

  owner = FIELD_U32(a3, 0x40);
  if ( FIELD_U8(a1, 6320) )
  {
    v8[0] = a2;
    v8[1] = a3;
    if ( sub_602A8B10((int *)(a1 + 6448), v8) == 1 )
    {
      if ( ((unsigned int)&dword_60C7B408 & ~(1613720204 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
      {
        dword_60C7B404 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B408);
      }
      if ( owner )
      {
        if ( (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B404) == 1 )
        {
          sub_602A3520((float *)a1, "SE_EMY_YOSHI_STEP", 0);
          (*(void (__fastcall **)(int, StageActor *))(*(_DWORD *)a1 + 380))(a1, owner);
        }
      }
    }
    else
    {
      Enemy__collisionYoshi(a1, (int)a2, (int)a3);
    }
  }
  else if ( Enemy__processCollision((Enemy *)a1, a2, a3, 0) == 1 )
  {
    sub_603FFD60(dword_60C99DD4 + 852);
    Enemy_killYoshi(a1, (int)owner);
  }
  else
  {
    Enemy__collisionYoshi(a1, (int)a2, (int)a3);
  }
}
