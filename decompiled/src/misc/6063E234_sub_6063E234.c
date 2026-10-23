/* sub_6063E234
 * address: 0x6063E234   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063E234(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  float v6; // s16
  int v7; // r5
  char v8; // r12

  v4 = FIELD_U32(a1, 6172);
  result = a1 + 6172;
  v3 = v4;
  if ( !v4 || (v5 = v3 - 1, (*(_DWORD *)result = v5) == 0) )
  {
    v6 = FIELD_F32(EnemyCounterMaybe_instance, 924);
    v7 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6280));
    if ( ((unsigned int)&dword_60CB587C & ~(1617158816 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60CB587C) )
    {
      dword_60CB5878 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60CB587C);
    }
    if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60CB5878) == 1 )
      v6 = FIELD_F32(v7, 71860);
    if ( FIELD_F32(a1, 112) <= v6 )
    {
      *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6104) + 12) + 24) = 1065353216;
      FIELD_U8(a1, 6163) = 1;
    }
    else
    {
      result = FIELD_U8(a1, 6163);
      if ( !FIELD_U8(a1, 6163) )
        return result;
    }
    result = *(unsigned __int8 *)(**(_DWORD **)(FIELD_U32(a1, 6104) + 12) + 28);
    if ( (result & 0x20) != 0 )
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CB5750);
  }
  return result;
}
