/* sub_6058CDB0
 * address: 0x6058CDB0   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058CDB0(int a1)
{
  int result; // r0
  int v3; // r1
  float v4; // s0

  if ( sub_605D01D4(a1) == 1 )
  {
    result = 7308;
    v3 = FIELD_U32(a1, 7308);
    if ( v3 )
      return sub_6058568C(dword_60CAF15C, v3, FIELD_U32(a1, 7316));
  }
  else
  {
    CollisionActor__handleGravity((CollisionActor *)a1);
    v4 = CollisionActor__handleSpeed((CollisionActor *)a1);
    FIELD_U8(a1, 6059) = FIELD_U32(a1, 2872) & 1;
    CollisionMgr_process((_BYTE *)(a1 + 648), v4);
    ((void (__fastcall *)(int, _DWORD, int, float))loc_6057AC94)(a1, 0, 1, 0.0);
    FIELD_U32(a1, 120) = 0;
    return sub_6057AEC8(a1);
  }
  return result;
}
