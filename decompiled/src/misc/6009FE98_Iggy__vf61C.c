/* Iggy__vf61C
 * address: 0x6009FE98   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: KoopalingBase : 0x600B665C
// 
// Overridden by: None
int __fastcall Iggy__vf61C(int *a1)
{
  int v2; // r0
  _DWORD *v3; // r1
  _DWORD *v4; // r1
  _DWORD *v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r1
  int v8; // r5

  v3 = a1 + 1774;
  v2 = *a1;
  v4 = (_DWORD *)*v3;
  v5 = (_DWORD *)v4[3];
  v6 = v4[2];
  v7 = v4[17];
  if ( v6 > v7 )
    v5 += v7;
  v8 = *v5 + 4;
  (*(void (__fastcall **)(int *))(v2 + 1180))(a1);
  if ( sub_60418548(v8) && a1[1794] != 2 )
  {
    sub_600B330C(a1);
    a1[1794] = 2;
  }
  return KoopalingBase__vf61C(a1);
}
