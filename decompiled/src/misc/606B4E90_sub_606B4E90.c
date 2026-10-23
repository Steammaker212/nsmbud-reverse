/* sub_606B4E90
 * address: 0x606B4E90   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B4E90(int a1, void *a2, int a3, __int64 *a4, float a5, float a6)
{
  _QWORD *v12; // r0
  __int64 v13; // d16
  __int64 v14; // d17
  __int64 v15; // d17
  __int64 v16; // d17
  int result; // r0

  sub_60002B50(a1);
  sub_606444A8((ModelWrapper **)(a1 + 20), *(void **)(a1 + 16), a2, a5, *(float *)a3, a6);
  v12 = a4 + 4;
  v13 = *a4;
  v14 = a4[1];
  a4 += 2;
  FIELD_U64(a1, 44) = v13;
  FIELD_U64(a1, 52) = v14;
  v15 = a4[1];
  FIELD_U64(a1, 60) = *a4;
  FIELD_U64(a1, 68) = v15;
  v16 = v12[1];
  FIELD_U64(a1, 76) = *v12;
  FIELD_U64(a1, 84) = v16;
  result = FIELD_U32(a3, 4);
  FIELD_U32(a1, 112) = result;
  return result;
}
