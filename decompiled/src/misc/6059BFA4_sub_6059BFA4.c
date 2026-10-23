/* sub_6059BFA4
 * address: 0x6059BFA4   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059BFA4(int a1, int a2, int a3)
{
  sub_605C6990(a1, a2);
  *(_DWORD *)a1 = off_60C07870;
  FIELD_U32(a1, 6120) = 0;
  sub_605C6EB4(a1 + 6124, FIELD_U32(a1, 8), 0);
  FIELD_U32(a1, 6424) = 1065353216;
  FIELD_U32(a1, 6428) = dword_60AF2000[a3];
  FIELD_U32(a1, 6432) = 1065353216;
  FIELD_U32(a1, 6436) = a3;
  FIELD_U32(a1, 6448) = 0;
  FIELD_U32(a1, 6444) = 0;
  FIELD_U32(a1, 6440) = 0;
  FIELD_U32(a1, 6452) = 0;
  FIELD_U32(a1, 6456) = 0;
  FIELD_U32(a1, 6460) = 0;
  FIELD_U32(a1, 6468) = 0;
  FIELD_U32(a1, 6464) = 0;
  RectCollider_ctor((RectCollider *)(a1 + 6472));
  FIELD_U32(a1, 6472) = off_60BC30D8;
  FIELD_U8(a1, 7128) = (FIELD_U32(a1, 20) & 0x300000) == 0x200000;
  FIELD_U32(a1, 7132) = 0;
  FIELD_U32(a1, 7136) = 0;
  return a1;
}
