/* sub_603DC968
 * address: 0x603DC968   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603DC968(int a1)
{
  int result; // r0
  char v3; // r12
  int v4; // r5
  float v5; // s2
  int v6; // r2

  result = FIELD_U8(a1, 6812);
  if ( !result )
  {
    result = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6820));
    v4 = result;
    if ( result )
    {
      if ( ((unsigned int)&dword_60C9911C & ~(1614662076 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9911C) )
      {
        dword_60C99118 = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60C9911C);
      }
      result = (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C99118);
      if ( result == 1 )
      {
        v5 = FIELD_F32(a1, 112) - FIELD_F32(a1, 6800);
        FIELD_F32(v4, 11800) = FIELD_F32(a1, 108) - FIELD_F32(a1, 6796);
        FIELD_F32(v4, 11804) = v5;
        FIELD_U32(v4, 11808) = 0;
        v6 = FIELD_U32(a1, 112);
        FIELD_U32(v4, 11752) = FIELD_U32(a1, 108);
        FIELD_U32(v4, 11756) = v6;
        FIELD_U32(v4, 11760) = 0;
        return 11760;
      }
    }
  }
  return result;
}
