/* sub_60467388
 * address: 0x60467388   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60467388(int a1)
{
  char v2; // r0

  sub_604615BC(a1);
  sub_60463584(a1);
  v2 = CollisionActor__sub_600034C8((CollisionActor *)a1);
  if ( (v2 & 4) != 0 )
  {
    FIELD_U32(a1, 80) ^= 1u;
    FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
  }
  if ( (v2 & 1) != 0 )
  {
    FIELD_U8(a1, 6824) = 0;
    sub_60462A58(a1);
    FIELD_U32(a1, 132) = 1065353216;
    FIELD_U32(a1, 136) = -1056964608;
    FIELD_U32(a1, 140) = 0;
    FIELD_U32(a1, 100) = -1103101952;
    FIELD_U32(a1, 124) = 0;
    FIELD_F32(a1, 116) = sub_60462B7C(a1);
    FIELD_U8(a1, 6056) = 1;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
  }
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 224))(a1);
}
