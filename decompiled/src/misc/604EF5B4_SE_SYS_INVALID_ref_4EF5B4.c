/* SE_SYS_INVALID_ref_4EF5B4
 * address: 0x604EF5B4   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_INVALID_ref_4EF5B4(_DWORD *a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r5
  int v3; // r0
  int v4; // t1
  int result; // r0

  v1 = a1;
  v2 = a1 + 11535;
  v3 = sub_608DE61C(a1 + 11535, 1);
  v4 = v1[11538];
  v1 += 11538;
  *(_BYTE *)(v3 - v4 + 188) = 1;
  *(_BYTE *)(sub_608DE61C(v2, 2) - *v1 + 188) = 1;
  *(_BYTE *)(sub_608DE61C(v2, 3) - *v1 + 188) = 1;
  *(_BYTE *)(sub_608DE61C(v2, 4) - *v1 + 188) = 1;
  *(_BYTE *)(sub_608DE61C(v2, 5) - *v1 + 188) = 1;
  *(_BYTE *)(sub_608DE61C(v2, 6) - *v1 + 188) = 1;
  *(_BYTE *)(sub_608DE61C(v2, 7) - *v1 + 188) = 1;
  *(_BYTE *)(sub_608DE61C(v2, 8) - *v1 + 188) = 1;
  *(_BYTE *)(sub_608DE61C(v2, 9) - *v1 + 188) = 1;
  *(_BYTE *)(sub_608DE61C(v2, 10) - *v1 + 188) = 1;
  sub_60478680((int)"SE_SYS_INVALID", 9);
  result = v1[7072];
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
