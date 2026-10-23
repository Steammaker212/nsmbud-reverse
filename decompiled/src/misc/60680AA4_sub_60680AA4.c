/* sub_60680AA4
 * address: 0x60680AA4   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60680AA4(int a1)
{
  int result; // r0
  float v3; // s0

  CollisionActor__handleSpeed((CollisionActor *)a1);
  result = a1 + 7460;
  v3 = FIELD_F32(dword_60CC6484, 124) - FIELD_F32(a1, 7460);
  if ( FIELD_F32(a1, 112) >= v3 )
  {
    FIELD_F32(a1, 112) = v3;
    FIELD_U32(a1, 7492) = FIELD_U32(a1, 7504);
    FIELD_U8(a1, 7560) = 0;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB8198);
  }
  return result;
}
