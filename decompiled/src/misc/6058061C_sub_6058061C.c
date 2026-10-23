/* sub_6058061C
 * address: 0x6058061C   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058061C(int a1)
{
  int v2; // r5
  char v3; // r12
  float v4; // s2

  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( FIELD_U8(a1, 7592) )
  {
    v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 7588));
    if ( ((unsigned int)&dword_60C92EFC & ~(1616381556 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C92EFC) )
    {
      dword_60C92EF8 = (int)&off_60BE9194;
      _cxa_guard_release(&dword_60C92EFC);
    }
    if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C92EF8) == 1 )
    {
      FIELD_U32(a1, 108) = FIELD_U32(v2, 6956);
      v4 = FIELD_F32(v2, 6960);
      FIELD_F32(a1, 112) = v4;
      FIELD_U32(a1, 116) = FIELD_U32(v2, 6964);
      FIELD_F32(a1, 112) = v4 - 7.0;
      FIELD_U32(a1, 160) = FIELD_U32(v2, 160);
    }
  }
  sub_60579D4C(a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
