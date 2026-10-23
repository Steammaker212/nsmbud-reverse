/* sub_600AF29C
 * address: 0x600AF29C   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600AF29C(int a1)
{
  float *v2; // r4
  char v3; // r12
  char v4; // r12
  float v5; // s2

  v2 = (float *)ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 7088));
  if ( ((unsigned int)&dword_60C7B364 & ~(1611330264 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v2 && (**(int (__fastcall ***)(float *, int *))v2)(v2, &StageActor_RTTI) == 1 )
  {
    v5 = (float)(FIELD_F32(a1, 112) + FIELD_F32(a1, 7096)) + FIELD_F32(a1, 7108);
    v2[27] = FIELD_F32(a1, 108) + FIELD_F32(a1, 7092);
    v2[28] = v5;
    if ( ((unsigned int)dword_60C7B430 & ~(1611330444 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
    if ( (**(int (__fastcall ***)(float *, int *))v2)(v2, &Enemy_RTTI) == 1 )
      (*(void (__fastcall **)(float *))(*(_DWORD *)v2 + 224))(v2);
  }
}
