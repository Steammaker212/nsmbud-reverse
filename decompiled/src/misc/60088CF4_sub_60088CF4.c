/* sub_60088CF4
 * address: 0x60088CF4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60088CF4(int a1, int a2, char a3)
{
  float v3; // s0

  v3 = (float)byte_60AFE3F4[a2];
  FIELD_U32(a1, 80) = a2;
  FIELD_U8(a1, 84) = a3;
  FIELD_F32(a1, 120) = (float)(v3 * 3.5) * 1.5;
  FIELD_U32(a1, 124) = 1075838976;
  FIELD_U32(a1, 128) = 0;
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C81D8C);
}
