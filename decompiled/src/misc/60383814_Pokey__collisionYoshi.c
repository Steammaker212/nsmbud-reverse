/* Pokey__collisionYoshi
 * address: 0x60383814   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A2D78
// 
// Overridden by: None
int __fastcall Pokey__collisionYoshi(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  char v3; // r12
  StageActor *owner; // r5
  int v8; // r7
  int v9; // r0
  int result; // r0

  owner = FIELD_U32(a3, 0x40);
  if ( ((unsigned int)&dword_60C7B37C & ~(1614297144 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( owner )
  {
    v8 = (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B378);
    if ( v8 )
      v8 = (int)owner;
  }
  else
  {
    v8 = 0;
  }
  v9 = **(_DWORD **)(a1 + 6304);
  if ( (ActiveCollider *)(v9 + 132) == a2 && FIELD_F32(v9, 16) > 0.0 )
  {
    if ( FIELD_F32(v8, 112) >= (float)(FIELD_F32(v9, 76) + -6.0) )
    {
      sub_602A3520((float *)a1, "SE_EMY_YOSHI_STEP", 0);
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 380))(a1, v8);
      return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 384))(a1, v8);
    }
  }
  else
  {
    result = Enemy__processCollision((Enemy *)a1, a2, a3, 1);
    if ( result )
      return result;
  }
  return Enemy__collisionYoshi(a1, (int)a2, (int)a3);
}
