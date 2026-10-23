/* sub_6012D024
 * address: 0x6012D024   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6012D024(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  char v3; // r12
  float v7; // s0
  float v8; // s16
  int v9; // r4
  float v10; // s0
  unsigned __int8 *owner; // r7
  int v12; // r1
  unsigned int v13; // r0

  if ( (ActiveCollider *)(a1 + 188) != a2
    || (ActiveCollider_getBottom(a2), v8 = v7, ActiveCollider_getCenterY(a3), v9 = 0, v8 <= v10) )
  {
    owner = (unsigned __int8 *)FIELD_U32(a3, 0x40);
    if ( ((unsigned int)&dword_60C7B37C & ~(1611845756 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    v9 = 1;
    if ( owner && (**(int (__fastcall ***)(unsigned __int8 *, int *))owner)(owner, &dword_60C7B378) == 1 )
    {
      (*(void (__fastcall **)(unsigned __int8 *, StageActor *, int))(*(_DWORD *)owner + 1168))(owner, FIELD_U32(a2, 0x40), 4);
      v12 = 0;
      FIELD_U8(a3, 0x6E) |= 2u;
      v13 = owner[84];
      if ( v13 < 4 )
        v12 = (char)v13;
      *(_WORD *)(a1 + 2 * v12 + 6140) = 32;
    }
  }
  return v9;
}
