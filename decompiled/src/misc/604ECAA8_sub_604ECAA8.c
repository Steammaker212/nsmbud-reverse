/* sub_604ECAA8
 * address: 0x604ECAA8   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_604ECAA8(_DWORD *a1, signed int a2)
{
  int *v4; // r10
  unsigned int v5; // r0
  _DWORD *v6; // r0
  int v7; // r4
  _DWORD *v8; // r8
  int v9; // r0
  int *v10; // r7
  int v11; // t1
  int v12; // r9
  int *v13; // r8
  int *result; // r0
  int v15; // r11
  int *v16; // r6
  int v17; // r10
  int v18; // r5
  int *v19; // r7
  int *v20; // r4
  int *i; // r0
  int *v22; // r4
  int *j; // r0

  v4 = a1 + 2700;
  if ( a2 >= 1 )
  {
    v5 = 3540 * a2 + 8;
    if ( v5 < 3540 * a2 )
      v5 = -1;
    if ( !is_mul_ok(0xDD4u, a2) )
      v5 = -1;
    v6 = (_DWORD *)sub_608DE334(v5, 0, 4);
    if ( v6 )
    {
      v7 = 3540 * a2;
      v8 = v6 + 2;
      *v6 = 3540;
      v6[1] = a2;
      v9 = (int)(v6 + 2);
      do
      {
        v7 -= 3540;
        v9 = sub_604ED870(v9) + 3540;
      }
      while ( v7 );
      *v4 = a2;
      a1[2701] = v8;
    }
  }
  v11 = a1[2706];
  v10 = a1 + 2706;
  v12 = (*(int (__fastcall **)(_DWORD, const char *, int))(**(_DWORD **)(v11 + 12) + 48))(
          FIELD_U32(v11, 12),
          "N_PageIndicator_00",
          1);
  v13 = v10;
  result = (int *)sub_6085768C(*v10, "Pa_PageIndicator_00");
  v15 = *v4;
  v16 = result;
  if ( *v4 )
  {
    v17 = *(v10 - 5);
    v18 = 0;
    do
    {
      if ( v18 )
      {
        v19 = (int *)sub_6098F408(v16, *v13, 0);
        sub_608589FC(v12, (int)v19);
        v20 = sub_604ED25C();
        for ( i = (int *)(*(int (__fastcall **)(int *))(*v19 + 8))(v19); i != v20; i = (int *)*i )
          ;
      }
      else
      {
        v22 = sub_604ED25C();
        for ( j = (int *)(*(int (__fastcall **)(int *))(*v16 + 8))(v16); j != v22; j = (int *)*j )
          ;
        v19 = v16;
      }
      result = (int *)sub_604ED8D0((_DWORD *)(v17 + 3540 * v18++), v19[45]);
    }
    while ( v18 != v15 );
  }
  return result;
}
