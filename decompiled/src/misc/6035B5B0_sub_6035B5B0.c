/* sub_6035B5B0
 * address: 0x6035B5B0   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6035B5B0(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  char v3; // r12
  StageActor *owner; // r4
  int v8; // r5
  float Bottom; // s16
  float CenterX; // s16
  float Left; // s16
  float Right; // s0

  owner = FIELD_U32(a3, 0x40);
  if ( ((unsigned int)&dword_60C7B37C & ~(1614132696 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  v8 = 0;
  if ( owner )
  {
    if ( (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B378) == 1
      && FIELD_U32(a3, 0x88) != 15 )
    {
      Bottom = ActiveCollider_getBottom(a3);
      if ( Bottom < ActiveCollider_getCenterY(a2) )
      {
        CenterX = ActiveCollider_getCenterX(a3);
        if ( CenterX < ActiveCollider_getCenterX(a2) )
        {
          Left = ActiveCollider_getLeft((ActiveCollider *)(a1 + 188));
          Right = ActiveCollider_getLeft(a2);
        }
        else
        {
          Left = ActiveCollider_getRight(a2);
          Right = ActiveCollider_getRight((ActiveCollider *)(a1 + 188));
        }
        if ( Left > Right
          && (*(int (__fastcall **)(StageActor *, ActiveCollider *, ActiveCollider *))(FIELD_U32(owner, 0x0) + 1164))(
               owner,
               a2,
               a3) == 1 )
        {
          (*(void (__fastcall **)(int, StageActor *))(*(_DWORD *)a1 + 836))(a1, owner);
          return 1;
        }
      }
    }
  }
  return v8;
}
