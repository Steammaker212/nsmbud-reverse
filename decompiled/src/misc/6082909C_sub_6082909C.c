/* sub_6082909C
 * address: 0x6082909C   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6082909C(int a1)
{
  int v1; // r4
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0

  v1 = FIELD_U32(a1, 40);
  v2 = sub_603F7EE4(dword_60C99DC8, 0);
  sub_603F7B98(v2, v1 + 19748);
  v3 = sub_603F7EE4(dword_60C99DC8, 1u);
  sub_603F7B98(v3, v1 + 22184);
  v4 = sub_603F7EE4(dword_60C99DC8, 2u);
  sub_603F7B98(v4, v1 + 24620);
  v5 = sub_603F7EE4(dword_60C99DC8, 3u);
  sub_603F7B98(v5, v1 + 27056);
  v6 = sub_603F7EE4(dword_60C99DC8, 4u);
  sub_603F7B98(v6, v1 + 29492);
  v7 = sub_603F7EE4(dword_60C99DC8, 5u);
  sub_603F7B98(v7, v1 + 31928);
  v8 = sub_603F7EE4(dword_60C99DC8, 6u);
  sub_603F7B98(v8, v1 + 34364);
  v9 = sub_603F7EE4(dword_60C99DC8, 7u);
  sub_603F7B98(v9, v1 + 36800);
  v10 = sub_603F7EE4(dword_60C99DC8, 8u);
  sub_603F7B98(v10, v1 + 39236);
  v11 = sub_603F7EE4(dword_60C99DC8, 9u);
  return sub_603F7B98(v11, v1 + 41672);
}
