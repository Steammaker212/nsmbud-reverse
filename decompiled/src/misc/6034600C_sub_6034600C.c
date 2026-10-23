/* sub_6034600C
 * address: 0x6034600C   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6034600C(int a1, int a2)
{
  int (__fastcall ***v3)(_DWORD, int *); // r6
  char v4; // r12
  int v5; // r5

  v3 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 7116));
  if ( ((unsigned int)&dword_60C7B364 & ~(1614045256 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v3 )
  {
    v5 = (**v3)(v3, &StageActor_RTTI);
    if ( v5 )
      v5 = (int)v3;
  }
  else
  {
    v5 = 0;
  }
  if ( ((unsigned int)&dword_60C881F4 & ~(1614045384 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C881F4) )
  {
    dword_60C881F0 = (int)&off_60BD20C4;
    _cxa_guard_release(&dword_60C881F4);
  }
  if ( v5 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C881F0) == 1 )
    {
      FIELD_U32(v5, 144) = 1065353216;
      FIELD_U32(v5, 148) = 1065353216;
      FIELD_U32(v5, 152) = 1065353216;
      FIELD_U8(v5, 11864) = 1;
      FIELD_U32(v5, 11868) = a2;
    }
  }
}
