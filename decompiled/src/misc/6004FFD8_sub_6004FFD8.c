/* sub_6004FFD8
 * address: 0x6004FFD8   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6004FFD8(int a1)
{
  int v3; // r1
  int v4; // r2

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1104))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 136) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 120) = 0;
  v3 = FIELD_U32(a1, 7156);
  v4 = FIELD_U32(a1, 7152);
  FIELD_U32(a1, 144) = FIELD_U32(a1, 7148);
  FIELD_U32(a1, 148) = v4;
  FIELD_U32(a1, 152) = v3;
  FIELD_U16(a1, 6276) = FIELD_U32(a1, 7160);
  FIELD_U32(a1, 7224) = 0;
  return 0;
}
