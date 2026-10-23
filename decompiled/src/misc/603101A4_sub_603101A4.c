/* sub_603101A4
 * address: 0x603101A4   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall sub_603101A4(Enemy *this, int a2, int a3)
{
  char v3; // r12
  Enemy *this_1; // r4
  int v7; // r5
  bool v8; // zf
  int v9; // r0
  bool v10; // zf
  Vec2 v11; // [sp+0h] [bp-20h] BYREF

  this_1 = this;
  v7 = FIELD_U32(a2, 64);
  if ( v7 )
  {
    if ( ((unsigned int)&dword_60C7B37C & ~(1613824468 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    this = (Enemy *)(**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B378);
    v8 = this == (Enemy *)1;
    if ( this == (Enemy *)1 )
    {
      this = (Enemy *)(a3 | 2);
      v8 = (a3 | 2) == 3;
    }
    if ( v8 )
    {
      if ( (*(int (__fastcall **)(Enemy *, _DWORD))(FIELD_U32(this_1, 0x0)._._._.vtable + 204))(this_1, FIELD_S8(v7, 1313)) == 1 )
        SE_SYS_NICE_S_ref();
      v9 = FIELD_U32(a2, 136);
      v10 = v9 == 0;
      if ( v9 )
        v10 = v9 == 15;
      if ( v10 )
      {
        if ( a3 == 3 )
        {
          sub_602A3160(this_1);
          Enemy_killSpin(this_1, (StageActor *)v7);
        }
        else
        {
          (*(void (__fastcall **)(Enemy *, int))(FIELD_U32(this_1, 0x0)._._._.vtable + 376))(this_1, v7);
          v11 = *(Vec2 *)&FIELD_U32(this_1, 0x0)._._.speed.x;
          Enemy_killWithState(this_1, (StageActor *)v7, &v11, (int)&stru_60C906EC);
        }
      }
      else if ( v9 == 2 )
      {
        (*(void (__fastcall **)(Enemy *, int))(FIELD_U32(this_1, 0x0)._._._.vtable + 384))(this_1, v7);
        Enemy_killYoshi((int)this_1, v7);
      }
      this = (Enemy *)((unsigned __int8)FIELD_U32(this_1, 0x0)._._.aCollider.field_6E | 2);
      FIELD_U32(this_1, 0x0)._._.aCollider.field_6E = (char)this;
    }
  }
  return this;
}
