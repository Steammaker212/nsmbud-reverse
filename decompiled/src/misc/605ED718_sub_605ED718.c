/* sub_605ED718
 * address: 0x605ED718   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605ED718(int a1)
{
  unsigned int v1; // r6
  unsigned int v2; // r5
  signed int result; // r0
  unsigned int v4; // r1
  StageActor *v5; // r4
  char v6; // r12
  int v7; // r0

  v1 = a1 + 6108;
  v2 = FIELD_U32(a1, 0x17D8);
  result = 1;
  if ( v1 < v2 )
  {
    do
    {
      v4 = FIELD_U32(v1, 12);
      if ( v4 )
      {
        v5 = (StageActor *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v4);
        if ( ((unsigned int)&dword_60C7B364 & ~(1616828332 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( v5 && (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(v5, 0x0))(v5, &StageActor_RTTI) )
        {
          StageActor__cullCheck(v5, 2);
          if ( v7 != 1 )
            return 0;
        }
        else
        {
          FIELD_U32(v1, 12) = 0;
        }
      }
      v1 += 24;
    }
    while ( v1 < v2 );
    return 1;
  }
  return result;
}
