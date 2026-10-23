/* sub_607C1784
 * address: 0x607C1784   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C1784(int a1)
{
  int v2; // r5
  char v3; // r12
  int v4; // r0
  bool v5; // zf
  float v6; // s0
  int v7; // r1
  int v8; // r0
  int result; // r0
  _BOOL4 v10; // r0
  bool v11; // zf

  sub_60773630(a1, 19, 0);
  if ( (FIELD_U8(a1, 6902) & 4) != 0 )
  {
    PlayerBase_dispatchVirtual3(a1 + 11356, 39, 0.0);
    goto LABEL_13;
  }
  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 11408));
  if ( ((unsigned int)&dword_60C7B364 & ~(1618745308 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( !v2 )
    goto LABEL_9;
  v4 = (**(int (__fastcall ***)(int, int *))v2)(v2, &StageActor_RTTI);
  v5 = v4 == 1;
  if ( v4 == 1 )
    v5 = FIELD_U8(v2, 533) == 1;
  if ( v5 )
  {
    v10 = sub_6075EE0C(a1);
    v11 = v10;
    if ( v10 )
      v11 = FIELD_U32(a1, 1320) == 9;
    if ( v11 )
    {
      v6 = 10.0;
      v8 = a1 + 11356;
      v7 = 116;
      goto LABEL_11;
    }
    v6 = 0.0;
    v7 = 116;
  }
  else
  {
LABEL_9:
    v6 = 0.0;
    v7 = 26;
  }
  v8 = a1 + 11356;
LABEL_11:
  sub_60794954(v8, v7, v6, 0.0);
LABEL_13:
  result = FIELD_U32(a1, 1208) | 0x400;
  FIELD_U32(a1, 1208) = result;
  return result;
}
