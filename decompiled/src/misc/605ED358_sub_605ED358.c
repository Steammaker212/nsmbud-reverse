/* sub_605ED358
 * address: 0x605ED358   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605ED358(int result)
{
  unsigned int v1; // r5
  unsigned int v2; // r4
  unsigned int v3; // r1
  int v4; // r7
  char v5; // r12
  int v6; // r1
  int v7; // r2

  v1 = result + 6108;
  v2 = FIELD_U32(result, 6104);
  if ( result + 6108 < v2 )
  {
    result = 0x6746DCu;
    do
    {
      v3 = FIELD_U32(v1, 12);
      if ( v3 )
      {
        v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
        if ( ((unsigned int)&dword_60C7B364 & ~(1616827368 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &StageActor_RTTI) )
        {
          FIELD_U32(v4, 160) = FIELD_U8(v1, 20) << 29;
          v6 = FIELD_U32(v1, 4);
          v7 = FIELD_U32(v1, 8);
          FIELD_U32(v4, 108) = *(_DWORD *)v1;
          FIELD_U32(v4, 112) = v6;
          FIELD_U32(v4, 116) = v7;
          result = sub_60579D4C(v4);
        }
        else
        {
          result = 0;
          FIELD_U32(v1, 12) = 0;
        }
      }
      v1 += 24;
    }
    while ( v1 < v2 );
  }
  return result;
}
