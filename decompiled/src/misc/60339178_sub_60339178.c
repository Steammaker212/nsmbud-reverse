/* sub_60339178
 * address: 0x60339178   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60339178(int a1)
{
  int v2; // r0
  signed int v3; // r0
  int *v4; // r1
  int result; // r0
  int v6; // [sp+0h] [bp-10h] BYREF
  int v7; // [sp+4h] [bp-Ch]

  v2 = FIELD_U32(a1, 6876);
  if ( FIELD_U8(v2, 6336) )
  {
    v3 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
    FIELD_U32(a1, 80) = v3;
    FIELD_U32(a1, 160) = Enemy_CommonRotations[v3];
    if ( FIELD_U8(a1, 6705) )
      v4 = &dword_60C94278;
    else
      v4 = &dword_60C94470;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v4);
  }
  else
  {
    sub_6024A0CC(v2, &v6);
    FIELD_U32(a1, 108) = v6;
    result = v7;
    FIELD_U32(a1, 112) = v7;
  }
  return result;
}
