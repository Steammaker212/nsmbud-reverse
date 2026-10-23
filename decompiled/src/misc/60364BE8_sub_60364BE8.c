/* sub_60364BE8
 * address: 0x60364BE8   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60364BE8(int a1)
{
  int v2; // r1
  int v3; // r5
  int v4; // r0
  signed int v5; // r1

  if ( FIELD_U32(a1, 6828) != 5 )
    sub_6035C5B4(a1, 5);
  v2 = FIELD_U32(a1, 6352);
  if ( v2 != 2 )
  {
    FIELD_U32(a1, 6356) = v2;
    FIELD_U32(a1, 6352) = 2;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 696))(a1);
  }
  FIELD_U32(a1, 100) = -1106247680;
  v3 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v3 != (*(int (**)(void))(dword_60C959EC + 8))() )
  {
    v4 = (FIELD_U32(a1, 20) >> 12) & 3;
    if ( v4 == 1 )
    {
      v5 = 0;
    }
    else if ( v4 )
    {
      v5 = 1;
    }
    else
    {
      v5 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
    }
    FIELD_U32(a1, 80) = v5;
    FIELD_U32(a1, 160) = sub_6035C8A0(a1);
  }
  FIELD_F32(a1, 120) = (float)byte_60AFE3F4[FIELD_U32(a1, 80)] * 0.6875;
  FIELD_U32(a1, 136) = -1065353216;
  return -1065353216;
}
