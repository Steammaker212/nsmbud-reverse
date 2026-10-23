/* sub_60904DB8
 * address: 0x60904DB8   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60904DB8(_DWORD *a1)
{
  int v2; // r0
  bool v3; // zf
  _BYTE *v4; // r0

  *a1 = off_60C5CC98;
  sub_609056F0(a1);
  a1[2] = 0;
  a1[4] = off_60C5CC70;
  v2 = *((unsigned __int8 *)a1 + 76);
  v3 = v2 == 0;
  if ( *((_BYTE *)a1 + 76) )
  {
    v2 = a1[5];
    v3 = v2 == 0;
  }
  if ( !v3 )
    sub_608E7A54(v2);
  a1[7] = &off_60BF9CF0;
  v4 = (_BYTE *)a1[9];
  if ( v4 )
    sub_608E6738(v4, (int)(a1 + 7));
  *a1 = &off_60C5CC60;
  if ( a1[2] )
    sub_609056F0(a1);
  operator_delete(a1);
}
