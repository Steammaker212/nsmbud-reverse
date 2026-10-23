/* sub_600BA734
 * address: 0x600BA734   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600BA734(int a1)
{
  float v2; // s0
  int v3; // r1
  int result; // r0

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 260))(a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = FIELD_U32(a1, 6216);
  if ( v3 >= 1 )
  {
    FIELD_U32(a1, 6216) = v3 - 1;
    (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 272))(a1, v2);
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 268))(a1);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 292))(a1);
  if ( result )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 308))(a1);
    FIELD_U8(a1, 19) = 1;
    return 1;
  }
  return result;
}
