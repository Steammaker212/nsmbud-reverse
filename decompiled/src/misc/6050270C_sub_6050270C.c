/* sub_6050270C
 * address: 0x6050270C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050270C(int a1, int a2, int a3, float a4, float a5, float a6, float a7)
{
  int v13; // r0
  int result; // r0

  v13 = sub_608DE61C(a1 + 52, a2);
  *(_DWORD *)(v13 - FIELD_U32(a1, 64) + 8) = *(_DWORD *)(v13 - FIELD_U32(a1, 64) + 8) & 0xFFFFFF3F | (a3 << 6);
  result = sub_60502790();
  FIELD_U8(result, 240) = a4 != a6;
  FIELD_U8(result, 241) = a5 != a7;
  FIELD_F32(result, 244) = a4;
  FIELD_F32(result, 248) = a5;
  FIELD_F32(result, 252) = a6;
  FIELD_F32(result, 256) = a7;
  return result;
}
