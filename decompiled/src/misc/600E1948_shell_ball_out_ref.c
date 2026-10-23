/* shell_ball_out_ref
 * address: 0x600E1948   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall shell_ball_out_ref(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  _DWORD v7[6]; // [sp+0h] [bp-18h] BYREF

  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = "shell_ball_out";
  sub_600E36A4(a1, v7, 0, 3.0);
  v2 = *(_DWORD **)(a1 + 6100);
  v3 = v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += 4 * v5;
  *(_DWORD *)(*(_DWORD *)v3 + 24) = 1065353216;
  FIELD_U8(a1, 6552) = 1;
  FIELD_U8(a1, 6540) = 0;
  FIELD_U32(a1, 6536) = 0;
  return 6536;
}
