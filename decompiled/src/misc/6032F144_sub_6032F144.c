/* sub_6032F144
 * address: 0x6032F144   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6032F144(StateActor *a1)
{
  int *v2; // r5
  int v3; // r1
  unsigned int v4; // r0
  _BYTE *result; // r0
  int v6; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  v2 = &a1[1]._._.aCollider._.field_C;
  j_ModelWrapper_updateAnims(a1[1]._._.aCollider._.field_C);
  target = dword_60AF20A8[*(v2 - 1555)];
  v6 = 100663296;
  moveValueTo(v2 - 1535, &target, &v6);
  v3 = *(_DWORD *)(*v2 + 12);
  v4 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v4 )
    v3 += 4 * v4;
  result = (_BYTE *)*(unsigned __int8 *)(*(_DWORD *)v3 + 28);
  if ( ((unsigned __int8)result & 0x20) != 0 )
    return StageActor__delete(a1, 1);
  return result;
}
