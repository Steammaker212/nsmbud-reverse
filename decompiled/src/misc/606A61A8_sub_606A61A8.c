/* sub_606A61A8
 * address: 0x606A61A8   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A61A8(int a1)
{
  int v2; // r1
  int result; // r0
  ShapedColliderInfo v4; // [sp+0h] [bp-30h] BYREF
  int v5; // [sp+24h] [bp-Ch] BYREF

  FIELD_F32(a1, 6780) = FIELD_F32(a1, 6104) * 0.5;
  v2 = (*(int (__fastcall **)(int, ShapedColliderInfo *))(*(_DWORD *)a1 + 212))(a1, &v4);
  result = 0;
  if ( v2 == 1 )
  {
    ShapedCollider_init((ShapedCollider *)(a1 + 6120), (StageActor *)a1, &v4);
    if ( (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 216))(a1, &v5) == 1 )
      FIELD_U32(a1, 6344) = v5;
    FIELD_U32(a1, 6456) = a1 + 6776;
    FIELD_U32(a1, 6444) = sub_606A64A0;
    FIELD_U32(a1, 6448) = sub_606A64C0;
    FIELD_U32(a1, 6452) = sub_606A64E0;
    return 1;
  }
  return result;
}
