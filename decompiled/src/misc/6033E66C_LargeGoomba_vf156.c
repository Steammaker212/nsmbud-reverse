/* LargeGoomba_vf156
 * address: 0x6033E66C   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf156(int a1)
{
  char v2; // r12

  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFFB68, &stru_60AFFB74, &stru_60AFFB80);
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1103101952;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 500) = 1115684864;
  FIELD_U32(a1, 504) = 1115684864;
  FIELD_U32(a1, 508) = 1115684864;
  FIELD_U32(a1, 512) = 1115684864;
  FIELD_U32(a1, 6244) = 2;
  FIELD_U32(a1, 116) = 1153138688;
  FIELD_U32(a1, 6392) = 3;
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 1101004800;
  FIELD_U32(a1, 312) = 1099956224;
  FIELD_U32(a1, 316) = 1101004800;
  FIELD_U32(a1, 6732) = 0;
  FIELD_U32(a1, 6736) = 1103626240;
  FIELD_U32(a1, 6740) = 1103101952;
  FIELD_U32(a1, 6744) = 1103626240;
  if ( ((unsigned int)&dword_60C94580 & ~(1614014304 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C94580) )
  {
    byte_60C9457C = 1;
    byte_60C9457D = 0;
    byte_60C9457E = 0;
    _cxa_guard_release(&dword_60C94580);
  }
  EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 6152), (EnemyFreezeMgr_Flags *)&byte_60C9457C);
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C945B4);
}
