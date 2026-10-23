/* Actor_CSW4_Item_build
 * address: 0x6020CE10   size: 104   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_CSW4_Item_build(unsigned __int8 *a1)
{
  int v2; // r5

  v2 = operator_new(0x1C8u);
  sub_6018668C(v2, a1);
  *(_DWORD *)v2 = off_60BD8CE8;
  memset((void *)(v2 + 372), 0, 64);
  FIELD_U32(v2, 436) = 3;
  FIELD_U32(v2, 440) = 0;
  FIELD_U32(v2, 444) = 0;
  FIELD_U32(v2, 448) = 0;
  FIELD_U16(v2, 452) = 255;
  FIELD_U8(v2, 454) = 0;
  return v2;
}
