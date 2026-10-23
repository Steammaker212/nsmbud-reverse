/* sub_60982E14
 * address: 0x60982E14   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60982E14(_DWORD *a1)
{
  _DWORD *v2; // r6
  _DWORD *v3; // r7
  int v4; // r5
  _DWORD *v5; // r7
  int v6; // r5
  void *v7; // r0

  v2 = a1 + 7;
  *a1 = off_60C5F850;
  v3 = (_DWORD *)a1[8];
  if ( v3 != a1 + 7 )
  {
    v4 = a1[8];
    do
    {
      v3 = (_DWORD *)v3[1];
      sub_60855BF0(FIELD_U32(v4, 32));
      sub_60855BF0(v4);
      v4 = (int)v3;
    }
    while ( v3 != v2 );
  }
  v5 = (_DWORD *)a1[6];
  if ( v5 != a1 + 5 )
  {
    v6 = a1[6];
    do
    {
      v5 = (_DWORD *)v5[1];
      nullsub_93();
      sub_60855BF0(v6);
      v6 = (int)v5;
    }
    while ( v5 != a1 + 5 );
  }
  nullsub_2415();
  nullsub_2266();
  operator_delete(v7);
}
