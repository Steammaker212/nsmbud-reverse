/* sub_602084F4
 * address: 0x602084F4   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602084F4(int a1)
{
  int v2; // r0

  FIELD_U8(a1, 370) = 0;
  FIELD_U32(a1, 80) = FIELD_U32(a1, 380);
  FIELD_U32(a1, 84) = FIELD_U32(a1, 384);
  FIELD_U32(a1, 88) = FIELD_U32(a1, 388);
  v2 = *(_DWORD *)(sub_601CF9C0(dword_60C8AEF0) + 180);
  FIELD_U32(a1, 180) = v2;
  FIELD_U32(a1, 192) = 0;
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 392) = v2 / 19;
  FIELD_U32(a1, 200) = 0;
  FIELD_U32(a1, 204) = -1093874483;
  sub_601E4C88((_DWORD *)dword_60C8B13C, 114, (_DWORD *)(a1 + 80));
  FIELD_U32(a1, 396) = 4;
  FIELD_U32(a1, 400) = 0;
  return 4;
}
