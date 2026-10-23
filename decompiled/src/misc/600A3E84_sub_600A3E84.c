/* sub_600A3E84
 * address: 0x600A3E84   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600A3E84(int a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r5
  char v3; // r12

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 644));
  sub_600A3D1C(a1);
  if ( !FIELD_U8(a1, 3076) )
  {
    v2 = *(int (__fastcall ****)(_DWORD, int *))sub_60008598(
                                                  ActorMgr__instance,
                                                  704,
                                                  *(_DWORD *)(ActorMgr__instance + 27172));
    if ( ((unsigned int)&dword_60C7B364 & ~(1611284192 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v2 && (**v2)(v2, &StageActor_RTTI) == 1 )
    {
      FIELD_U32(a1, 1244) = v2;
      FIELD_U32(a1, 1900) = v2;
    }
    FIELD_U8(a1, 3076) = 1;
  }
  SolidOnTopCollider_execute(a1 + 648);
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 1096) + 28))(a1 + 1096);
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 1752) + 28))(a1 + 1752);
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 2408) + 28))(a1 + 2408);
  return 1;
}
