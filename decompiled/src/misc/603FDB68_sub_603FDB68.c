/* sub_603FDB68
 * address: 0x603FDB68   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FDB68(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v8; // r0
  int v9; // r0
  int result; // r0

  a1[13] = a3;
  a1[2] = a2;
  a1[14] = a4;
  a1[104] = a5;
  v8 = operator_new(0x10u);
  if ( a2 == 8 )
    v9 = sub_60794DC8(v8, -1, dword_60B0D0A8[a3], a5, a3, 0, 1, 0);
  else
    v9 = sub_60794B48(v8);
  a1[1] = v9;
  *(_DWORD *)(FIELD_U32(v9, 12) + 508) = 0;
  result = *(_DWORD *)(a1[1] + 12);
  FIELD_U32(result, 504) = 0;
  return result;
}
