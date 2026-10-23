/* sub_602ABCF0
 * address: 0x602ABCF0   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602ABCF0(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v4; // r5
  int v5; // r0
  float v6; // s2

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)dword_60C90B98 & ~(1613413640 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C90B98) )
  {
    dword_60C90B94 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C90B98);
  }
  v4 = 0;
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C90B94) == 1 )
  {
    sub_602A3EFC(v3 + 7296, 24, 0.0625);
    v5 = 7244;
    v4 = 1;
    FIELD_U32(v3, 7244) = 4;
    v6 = FIELD_F32(v3, 124);
    if ( v6 > 0.0 )
      v5 = 0;
    FIELD_F32(v3, 120) = -FIELD_F32(v3, 120);
    if ( v6 > 0.0 )
      FIELD_U32(v3, 124) = v5;
  }
  return v4;
}
