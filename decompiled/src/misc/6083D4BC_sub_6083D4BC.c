/* sub_6083D4BC
 * address: 0x6083D4BC   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083D4BC(int a1, int a2, unsigned __int8 *a3)
{
  int v5; // r0
  int v6; // r6
  int v7; // r0
  int v8; // r6
  int v9; // r0
  int result; // r0

  v5 = a1 + 24;
  FIELD_U64(a1, 8) = *(_QWORD *)(*((_DWORD *)a3 + 6) + 8);
  FIELD_U32(a1, 16) = v5;
  dword_60CC7528(v5);
  dword_60CC752C(FIELD_U32(a1, 16), *((unsigned __int16 *)a3 + 1), 1);
  dword_60CC7530(FIELD_U32(a1, 16), *((_DWORD *)a3 + 2), *((_DWORD *)a3 + 3));
  v6 = FIELD_U32(a1, 16);
  v7 = sub_6083A9A4(*((_DWORD *)a3 + 1));
  dword_60CC7534(v6, v7);
  v8 = FIELD_U32(a1, 16);
  v9 = sub_6083AA9C(*a3);
  dword_60CC7540(v8, v9);
  result = FIELD_U8(a1, 1) & 0xFE;
  FIELD_U8(a1, 1) = result;
  *(_BYTE *)a1 = 1;
  return result;
}
