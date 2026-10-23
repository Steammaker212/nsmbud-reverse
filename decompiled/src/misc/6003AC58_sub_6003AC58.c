/* sub_6003AC58
 * address: 0x6003AC58   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6003AC58(int a1)
{
  float v2; // s0

  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( FIELD_U32(a1, 11492) == 3 && FIELD_F32(a1, 120) == 0.0 )
    FIELD_F32(a1, 132) = flt_60AF1EA0[FIELD_U32(a1, 11464)];
  v2 = FIELD_F32(a1, 11052);
  if ( FIELD_F32(a1, 112) >= v2 )
  {
    FIELD_F32(a1, 112) = v2;
    if ( fabsf(FIELD_F32(a1, 11436)) <= 1.0 )
    {
      FIELD_U32(a1, 80) = FIELD_U32(a1, 11464) ^ 1;
      FIELD_U8(a1, 11677) = 0;
      if ( FIELD_U8(a1, 11687) )
      {
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C800E4);
      }
      else
      {
        ++FIELD_U32(a1, 11532);
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C802A8);
      }
    }
  }
  JUMPOUT(0x60040A94);
}
