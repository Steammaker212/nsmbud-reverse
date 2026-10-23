/* SE_EMY_YOSHI_STEP_ref_3B8340
 * address: 0x603B8340   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_YOSHI_STEP_ref_3B8340(float *a1, int a2, int a3)
{
  int v4; // r5
  int v5; // r6
  unsigned int v6; // r0

  v4 = FIELD_U32(a3, 64);
  v5 = 0;
  sub_602A3520(a1, "SE_EMY_YOSHI_STEP", 0);
  (*(void (__fastcall **)(int, int, _DWORD, int, float, float))(*(_DWORD *)v4 + 748))(
    v4,
    1,
    0,
    2,
    3.0,
    FIELD_F32(v4, 120));
  v6 = FIELD_U8(v4, 84);
  if ( v6 < 4 )
    v5 = (char)v6;
  *((_WORD *)a1 + v5 + 3070) = 5;
  return 1;
}
