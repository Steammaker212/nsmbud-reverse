/* sub_602FCCF0
 * address: 0x602FCCF0   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FCCF0(int *a1)
{
  _BOOL4 v2; // r5
  _BOOL4 v3; // r1
  int result; // r0
  int v5; // r2
  bool v6; // zf
  float v7; // [sp+0h] [bp-18h] BYREF

  sub_60300AA0();
  sub_602FD474(a1);
  sub_60300AE4(a1, &v7);
  v2 = 0;
  v3 = v7 < 0.0;
  a1[20] = v3;
  a1[40] += *((_DWORD *)&unk_60C92B34 + v3);
  result = moveValueTo(a1 + 40, (int *)&flt_60C92B2C + v3, (int *)&unk_60C92B34);
  v5 = a1[2125];
  if ( v5 )
  {
    a1[2125] = v5 - 1;
    v2 = v5 != 1;
  }
  v6 = !v2;
  if ( !v2 )
  {
    result ^= 1u;
    v6 = result == 0;
  }
  if ( v6 )
    return (*(int (__fastcall **)(int *, void *))(*a1 + 192))(a1, &unk_60C92B5C);
  return result;
}
