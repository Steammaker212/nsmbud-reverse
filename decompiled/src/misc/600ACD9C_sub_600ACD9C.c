/* sub_600ACD9C
 * address: 0x600ACD9C   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600ACD9C(int a1)
{
  int result; // r0
  unsigned int v3; // r1
  int v4; // r5
  char v5; // r12
  float v6; // s0

  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  if ( FIELD_U16(a1, 5952) != 0x1F
    && FIELD_U16(a1, 5944) != 0x1F
    && (result = *(unsigned __int16 *)(a1 + 648 + 8 * FIELD_U32(a1, 80) + 5280), result ^ 0x1F) )
  {
    v6 = FIELD_F32(a1, 124);
    if ( v6 <= 0.0 )
    {
      result = a1 + 7076;
      if ( FIELD_F32(a1, 112) <= (float)(FIELD_F32(a1, 7076) + 16.0) )
        return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C83054);
    }
    if ( v6 >= 0.0 )
    {
      result = a1 + 7076;
      if ( FIELD_F32(a1, 112) >= (float)(FIELD_F32(a1, 7076) + -16.0) )
        return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C83054);
    }
  }
  else
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 104))(a1);
    v3 = FIELD_U32(a1, 7088);
    if ( v3 )
    {
      v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
      if ( ((unsigned int)&dword_60C7B364 & ~(1611320892 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v4 )
      {
        if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &StageActor_RTTI) == 1 )
          FIELD_U8(v4, 19) = 1;
      }
    }
    FIELD_U8(a1, 19) = 1;
    return 1;
  }
  return result;
}
