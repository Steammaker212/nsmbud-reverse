/* sub_60289FB8
 * address: 0x60289FB8   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60289FB8(int a1, ActiveCollider *a2, int a3)
{
  char v3; // r12
  int v7; // r7
  _BOOL4 v8; // r0

  v7 = FIELD_U32(a3, 64);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613275100 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B378) == 1 )
  {
    if ( Enemy__processCollision((Enemy *)a1, a2, (ActiveCollider *)a3, 0) )
    {
      FIELD_U32(a1, 6556) = v7;
      JUMPOUT(0x60289DD8);
    }
    if ( FIELD_U32(a3, 136) != 15
      && (*(int (__fastcall **)(int, ActiveCollider *, int))(*(_DWORD *)v7 + 1164))(v7, a2, a3) == 1 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F1CC);
      FIELD_U32(a1, 120) = 0;
      v8 = sub_6000AED0(a1, FIELD_U32(a3, 64));
      FIELD_U32(a1, 80) = v8;
      FIELD_U32(a1, 160) = Enemy_CommonRotations[v8];
    }
  }
}
