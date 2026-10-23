/* BrosBase__vfC8
 * address: 0x60264E40   size: 272   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A20E0
// 
// Overridden by: None
signed int __fastcall BrosBase__vfC8(Enemy *a1, int a2, int a3)
{
  char v3; // r12
  int v7; // r5
  int v8; // r6
  int direction; // r0

  v7 = 0;
  if ( FIELD_U32(a3, 136) != 15 )
  {
    v8 = FIELD_U32(a3, 0x40);
    if ( ((unsigned int)&dword_60C7B37C & ~(1613123188 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v8
      && (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C7B378) == 1
      && (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v8 + 0x48C))(v8, a2, a3) == 1 )
    {
      if ( !sub_6000AED0((int)a1, v8) )
        FIELD_U32(a1, 0x50) = 0;
      if ( sub_6000AED0((int)a1, v8) )
      {
        direction = 1;
        FIELD_U32(a1, 0x50) = 1;
      }
      else
      {
        direction = FIELD_U32(a1, 0x50);
      }
      v7 = 1;
      FIELD_U32(a1, 0xA0) = Enemy_CommonRotations[direction];
    }
  }
  return v7;
}
