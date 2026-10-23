/* sub_60379E48
 * address: 0x60379E48   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60379E48(int a1)
{
  int result; // r0
  Vec2 v3; // [sp+0h] [bp-10h] BYREF

  CollisionActor__sub_600034C8((CollisionActor *)a1);
  if ( (FIELD_U32(a1, 2872) & 0x10400) != 0x400 && StageActor__distanceToPlayer((StateActor *)a1, &v3) != -1 )
    return SE_EMY_REV_KOURA_FALL_ref_3(a1);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 724))(a1);
  if ( result == 1 )
  {
    FIELD_F32(a1, 120) = sub_603BDB18(a1);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C965DC);
  }
  return result;
}
