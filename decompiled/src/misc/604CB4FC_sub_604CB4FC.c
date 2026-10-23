/* sub_604CB4FC
 * address: 0x604CB4FC   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604CB4FC(_DWORD *a1)
{
  int v2; // r1
  int v3; // r1
  int v4; // r0
  _DWORD v6[7]; // [sp+4h] [bp-1Ch] BYREF

  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = sub_604DABE0(1);
  sub_60473DE4(a1 + 10, 1u, v6, 0);
  v6[2] = 1;
  v2 = a1[153927];
  if ( v2 == 2 )
  {
    v3 = 2;
    goto LABEL_6;
  }
  if ( v2 == 1 )
  {
    v3 = 0;
LABEL_6:
    a1[153923] = a1[v3 + 153922];
  }
  a1[153927] = 2;
  sub_604D1444(a1);
  CourseSelectVS_Index_00_ref(a1);
  v4 = a1[153924];
  if ( v4 >= 0 )
  {
    if ( (unsigned int)v4 >= 0xA )
      v4 = 0;
    sub_604D6794(&a1[13161 * v4 + 22312]);
  }
  a1[1207] = 256;
  return 4828;
}
