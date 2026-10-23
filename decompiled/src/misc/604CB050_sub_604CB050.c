/* sub_604CB050
 * address: 0x604CB050   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604CB050(_DWORD *a1)
{
  int v2; // r5
  int v3; // r1
  int v4; // r0
  _DWORD v6[7]; // [sp+4h] [bp-1Ch] BYREF

  v2 = 2;
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = sub_604DABE0(2);
  sub_60473DE4(a1 + 10, 1u, v6, 0);
  v6[2] = 0;
  v3 = a1[153927];
  if ( v3 != 2 )
  {
    if ( v3 != 1 )
      goto LABEL_5;
    v2 = 0;
  }
  a1[153923] = a1[v2 + 153922];
LABEL_5:
  a1[153927] = 1;
  sub_604D1444(a1);
  CourseSelectVS_Index_00_ref(a1);
  v4 = a1[153922];
  if ( v4 >= 0 )
  {
    if ( (unsigned int)v4 >= 0xA )
      v4 = 0;
    sub_604D6794(&a1[13161 * v4 + 22312]);
  }
  a1[1207] = 256;
  return 4828;
}
