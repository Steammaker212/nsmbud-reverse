/* sub_60592E6C
 * address: 0x60592E6C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60592E6C(int a1)
{
  int v1; // r4
  int *v2; // r2
  _DWORD *v3; // r3
  int *v4; // r1
  int v5; // r0
  int result; // r0

  v1 = a1;
  sub_605943EC(a1, 0);
  FIELD_U8(v1, 8209) = 0;
  FIELD_U8(v1, 8210) = 0;
  FIELD_U32(v1, 8164) = 0;
  FIELD_U32(v1, 8144) = 1105199104;
  v2 = (int *)(v1 + 8144);
  FIELD_U32(v1, 8148) = 1098907648;
  v3 = (_DWORD *)(v1 + 8148);
  FIELD_U32(v1, 8152) = 0;
  v4 = (int *)(v1 + 8152);
  FIELD_U32(v1, 8156) = 1107296256;
  v1 += 8156;
  v5 = *v2;
  *(_DWORD *)(v1 - 188) = *v3;
  *(_DWORD *)(v1 - 192) = v5;
  result = *v4;
  *(_DWORD *)(v1 - 196) = *(_DWORD *)v1;
  *(_DWORD *)(v1 - 200) = result;
  FIELD_U8(v1, 55) = 0;
  return result;
}
