/* sub_60658A84
 * address: 0x60658A84   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60658A84(_DWORD *a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r2
  ColliderBase *v5; // r5

  if ( ((int (__fastcall *)(_DWORD *, _DWORD *))loc_6069B070)(a1 + 1702, a1 + 27) )
  {
    v2 = a1[27];
    v3 = a1[28];
    v4 = a1[29];
    a1[146] = v2;
    a1[147] = v3;
    a1[148] = v4;
    a1[152] = v2;
    a1[153] = v3;
    a1[154] = v4;
    v5 = (ColliderBase *)(a1 + 1538);
    sub_60160948(a1 + 1538);
  }
  else
  {
    v5 = (ColliderBase *)(a1 + 1538);
  }
  a1[1599] = a1[41];
  ShapedCollider_execute(v5);
  return sub_60658908((int)a1);
}
