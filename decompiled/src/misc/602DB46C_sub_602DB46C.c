/* sub_602DB46C
 * address: 0x602DB46C   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602DB46C(int a1)
{
  _DWORD *v2; // r9
  StageActor *v3; // r5
  char v4; // r12
  int v5; // r4
  StageActor *v6; // r7
  int v7; // r0
  int v8; // r0
  float v10; // s4
  int v11; // r0
  float v12; // s6
  float v13; // s4
  float v14; // s2

  v2 = (_DWORD *)(a1 + 6312);
  v3 = (StageActor *)ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6312));
  if ( ((unsigned int)&dword_60C7B364 & ~(1613608108 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v3 )
  {
    v5 = 0;
    v6 = 0;
    if ( (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(v3, 0x0).vtable)(v3, &StageActor_RTTI) == 1 )
    {
      StageActor__cullCheck(v3, 2);
      if ( !v7 )
      {
        v10 = FIELD_F32(a1, 108);
        v11 = AreaTask_intance;
        v12 = FIELD_F32(AreaTask_intance, 1812) + -32.0;
        if ( v10 >= v12 )
        {
          v12 = FIELD_F32(a1, 108);
          if ( v10 > (float)(FIELD_F32(AreaTask_intance, 1820) + 32.0) )
            v12 = FIELD_F32(AreaTask_intance, 1820) + 32.0;
        }
        FIELD_F32(a1, 108) = v12;
        v13 = FIELD_F32(a1, 112);
        v14 = FIELD_F32(v11, 1816) + -32.0;
        if ( v13 >= v14 )
        {
          v14 = FIELD_F32(a1, 112);
          if ( v13 > (float)(FIELD_F32(v11, 1824) + 32.0) )
            v14 = FIELD_F32(v11, 1824) + 32.0;
        }
        FIELD_F32(a1, 112) = v14;
        return 0;
      }
      v5 = 1;
      v6 = v3;
    }
  }
  else
  {
    v5 = 0;
    v6 = 0;
  }
  StageActor__cullCheck((StageActor *)a1, 0);
  if ( v8 != 1 )
    return 0;
  if ( v5 == 1 )
    FIELD_U32(v6, 0x0).isDeleted = 1;
  *v2 = 0;
  return 1;
}
