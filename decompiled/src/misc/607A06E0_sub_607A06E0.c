/* sub_607A06E0
 * address: 0x607A06E0   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607A06E0(int a1, ActiveCollider *a2)
{
  char v2; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r7
  int v6; // r6
  char v7; // r12
  StageActor *owner; // r7

  v5 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 64);
  if ( ((unsigned int)&dword_60C7B374 & ~(1618609920 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( v5 )
  {
    v6 = (**v5)(v5, &dword_60C7B370);
    if ( v6 )
      v6 = (int)v5;
  }
  else
  {
    v6 = 0;
  }
  if ( FIELD_U32(a1, 140) == 18 )
  {
    sub_6079E3C8((float *)v6, a2);
  }
  else if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v6 + 1156))(v6) )
  {
    owner = FIELD_U32(a2, 0x40);
    if ( ((unsigned int)&dword_60C7B37C & ~(1618610104 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( owner
      && (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B378) == 1
      && !FIELD_U32(v6, 9580)
      && !owner[14].field_234
      && FIELD_U32(a1, 140) == 10 )
    {
      if ( FIELD_U32(a2, 0x8C) == 10 )
      {
        sub_607B5350(v6, owner, 1);
      }
      else if ( (FIELD_U32(a2, 0x88) | 2) == 2 )
      {
        sub_607B5350(v6, owner, 0);
      }
    }
  }
}
