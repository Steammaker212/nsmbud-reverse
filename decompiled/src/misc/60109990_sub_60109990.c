/* sub_60109990
 * address: 0x60109990   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60109990(int a1)
{
  float v2; // s16
  float v3; // s0
  int result; // r0

  v2 = FIELD_F32(a1, 124);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1236))(a1, v3);
  result = sub_600B33DC((int *)a1, 0x4000000);
  if ( v2 >= 0.0 && FIELD_F32(a1, 124) <= 0.0 )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C865C4);
  return result;
}
