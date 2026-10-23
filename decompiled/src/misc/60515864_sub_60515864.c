/* sub_60515864
 * address: 0x60515864   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60515864(int a1)
{
  int v3; // [sp+0h] [bp-20h] BYREF
  int v4; // [sp+4h] [bp-1Ch] BYREF

  FIELD_U8(a1, 14975) = 1;
  Pa_ReturnBtn_00_ref((_DWORD *)a1);
  sub_60514E64(a1);
  FIELD_U32(a1, 12936) = 0;
  sub_6045BF58(a1 + 12940, 0);
  sub_6045BF58(a1 + 13344, 1);
  sub_6045BF58(a1 + 13748, 2);
  sub_6045BF58(a1 + 14152, 3);
  sub_6045BF58(a1 + 14556, 4);
  v3 = 2;
  sub_604751FC(a1 + 48, a1 + 12924, &dword_60CA86A4, &v3);
  FIELD_U8(a1, 29959) = 0;
  Pa_ReturnBtn_00_ref((_DWORD *)(a1 + 14984));
  sub_60514E64(a1 + 14984);
  FIELD_U32(a1, 27920) = 0;
  sub_6045BF58(a1 + 27924, 0);
  sub_6045BF58(a1 + 28328, 1);
  sub_6045BF58(a1 + 28732, 2);
  sub_6045BF58(a1 + 29136, 3);
  sub_6045BF58(a1 + 29540, 4);
  v4 = 2;
  return sub_604751FC(a1 + 15032, a1 + 27908, &dword_60CA86A4, &v4);
}
