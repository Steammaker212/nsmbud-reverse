/* sub_608589FC
 * address: 0x608589FC   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608589FC(int a1, int a2)
{
  int v2; // r1
  int v3; // t1
  int result; // r0

  v3 = FIELD_U32(a2, 4);
  v2 = a2 + 4;
  *(_DWORD *)v2 = FIELD_U32(a1, 16);
  FIELD_U32(v3, 4) = a1 + 16;
  *(_DWORD *)(FIELD_U32(a1, 16) + 4) = v2;
  FIELD_U32(a1, 16) = v3;
  FIELD_U32(v2, 8) = a1;
  result = FIELD_U8(v2, 60) | 0x10;
  FIELD_U8(v2, 60) = result;
  return result;
}
