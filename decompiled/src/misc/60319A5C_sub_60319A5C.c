/* sub_60319A5C
 * address: 0x60319A5C   size: 588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60319A5C(int a1)
{
  unsigned int v2; // r1
  unsigned int *v3; // r6
  int (__fastcall ***v4)(_DWORD, int *); // r5
  char v5; // r12
  float v6; // s0
  float v7; // s2
  float v9; // s0
  float v10; // s2
  int v11; // r5
  char v12; // r12

  StateMgr__execute((StateMgr *)(a1 + 6084));
  v3 = (unsigned int *)(a1 + 6408);
  v2 = FIELD_U32(a1, 6408);
  if ( v2 )
  {
    v4 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
    if ( ((unsigned int)&dword_60C93528 & ~(1613863600 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C93528) )
    {
      dword_60C93524 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C93528);
    }
    if ( v4 && (**v4)(v4, &dword_60C93524) )
      goto LABEL_12;
  }
  v6 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  v7 = FIELD_F32(dword_60CC6484, 124);
  if ( v7 >= v6
    && (float)((float)(v7 - FIELD_F32(dword_60CC6484, 108)) + -32.0) <= v6
    && (v9 = FIELD_F32(dword_60CC6484, 112), v10 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572), v9 <= v10)
    && (float)(v9 + FIELD_F32(dword_60CC6484, 104)) >= v10 )
  {
LABEL_12:
    ActorScaler_execute((ActorScaler *)(a1 + 6772));
    karon_head_ref(a1);
    if ( *v3 )
    {
      v11 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v3);
      if ( ((unsigned int)&dword_60C93528 & ~(1613863908 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C93528) )
      {
        dword_60C93524 = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60C93528);
      }
      if ( v11 && (**(int (__fastcall ***)(int, int *))v11)(v11, &dword_60C93524) == 1 )
      {
        FIELD_U32(a1, 6324) = FIELD_U32(v11, 6352);
        FIELD_U32(a1, 6328) = FIELD_U32(v11, 6356);
        FIELD_U32(a1, 6332) = FIELD_U32(v11, 6360);
      }
    }
    if ( sub_60235E50(a1 + 6808) == 1 )
      sub_60236A80(a1 + 6808, (__int64 *)(a1 + 6336), 0);
    return 1;
  }
  else
  {
    FIELD_U8(a1, 19) = 1;
    return 1;
  }
}
