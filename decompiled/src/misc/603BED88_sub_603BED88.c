/* sub_603BED88
 * address: 0x603BED88   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BED88(int a1)
{
  char v1; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r5
  int v4; // r0

  FIELD_U32(a1, 116) = 1153138688;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  v3 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
  if ( ((unsigned int)&dword_60C96DF8 & ~(1614540224 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C96DF8) )
  {
    dword_60C96DF4 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C96DF8);
  }
  if ( v3 )
  {
    v4 = (**v3)(v3, &dword_60C96DF4);
    if ( v4 )
      v4 = (int)v3;
  }
  else
  {
    v4 = 0;
  }
  FIELD_U32(a1, 6668) = v4;
  if ( ((unsigned int)dword_60C98534 & ~(1614540360 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C98534) )
  {
    byte_60C98530 = 5;
    byte_60C98531 = 1;
    byte_60C98532 = 1;
    _cxa_guard_release(dword_60C98534);
  }
  EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 6152), (EnemyFreezeMgr_Flags *)&byte_60C98530);
  FIELD_U8(a1, 6056) = 1;
  FIELD_U32(a1, 6020) = 1008981770;
  FIELD_U32(a1, 624) = a1 + 6696;
  FIELD_U32(a1, 6724) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 624))(a1);
  return 1;
}
