/* sub_605F4018
 * address: 0x605F4018   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F4018(int a1)
{
  float v2; // s0
  int result; // r0

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = FIELD_F32(a1, 112) + 16.0;
  if ( FIELD_F32(dword_60CC6484, 124) > v2 )
  {
    FIELD_U32(a1, 3200) &= ~0x40000000u;
    FIELD_U32(a1, 3176) &= ~0x40000000u;
    FIELD_U32(a1, 3184) &= ~0x40000000u;
  }
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  sub_605F53A8(a1);
  if ( FIELD_U8(a1, 6164) != 255 )
  {
    SE_OBJ_GET_DRAGON_COIN_ref(a1);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
  }
  result = FIELD_U32(dword_60CBD894, 32);
  FIELD_U32(a1, 160) = result;
  return result;
}
