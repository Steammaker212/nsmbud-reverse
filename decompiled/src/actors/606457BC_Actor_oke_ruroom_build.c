/* Actor_oke_ruroom_build
 * address: 0x606457BC   size: 224   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_oke_ruroom_build(int a1)
{
  int v2; // r4

  v2 = operator_new(0x28A0u);
  sub_606D23D8(v2, a1);
  *(_DWORD *)v2 = off_60C13770;
  FIELD_U32(v2, 6192) = 0;
  FIELD_U32(v2, 6196) = 0;
  FIELD_U32(v2, 6240) = 0;
  FIELD_U32(v2, 6284) = 0;
  FIELD_U32(v2, 6328) = 0;
  FIELD_U32(v2, 6372) = 0;
  FIELD_U32(v2, 6416) = 0;
  RectCollider_ctor((RectCollider *)(v2 + 6464));
  FIELD_U32(v2, 6464) = off_60BC30D8;
  RectCollider_ctor((RectCollider *)(v2 + 7120));
  FIELD_U32(v2, 7120) = off_60BC30D8;
  RectCollider_ctor((RectCollider *)(v2 + 7776));
  FIELD_U32(v2, 7776) = off_60BC30D8;
  RectCollider_ctor((RectCollider *)(v2 + 8432));
  FIELD_U32(v2, 8432) = off_60BC30D8;
  RectCollider_ctor((RectCollider *)(v2 + 9088));
  FIELD_U32(v2, 9088) = off_60BC30D8;
  RectCollider_ctor((RectCollider *)(v2 + 9744));
  FIELD_U32(v2, 9744) = off_60BC30D8;
  return v2;
}
