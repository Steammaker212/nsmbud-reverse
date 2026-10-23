/* sub_604CA544
 * address: 0x604CA544   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604CA544(_DWORD *a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r1
  int v6; // [sp+0h] [bp-20h] BYREF
  int v7; // [sp+4h] [bp-1Ch]

  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = sub_604DABE0(1);
  sub_60473DE4(a1 + 10, 1u, &v6, 0);
  v2 = sub_604DABE0(3);
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = v2;
  sub_604741D8(a1 + 10, 4u, &v6, 0);
  v6 = 1;
  v3 = a1[153927];
  if ( v3 == 2 )
  {
    v4 = 2;
    goto LABEL_5;
  }
  if ( v3 == 1 )
  {
    v4 = 0;
LABEL_5:
    a1[153923] = a1[v4 + 153922];
  }
  a1[153927] = 2;
  sub_604D1444(a1);
  return CourseSelectVS_Index_00_ref(a1);
}
