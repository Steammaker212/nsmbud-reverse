/* sub_60387754
 * address: 0x60387754   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60387754(int a1, int a2, int a3)
{
  *(_DWORD *)a1 = off_60BF3958;
  FIELD_U32(a1, 4) = 0;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 60) = 0;
  FIELD_U8(a1, 64) = 0;
  memset((void *)(a1 + 12), 0, 36);
  FIELD_U32(a1, 68) = a1;
  FIELD_U32(a1, 84) = 0;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 92) = 0;
  FIELD_U32(a1, 112) = a3;
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U8(a1, 128) = 1;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 132));
  FIELD_U32(a1, 436) = a2;
  return a1;
}
