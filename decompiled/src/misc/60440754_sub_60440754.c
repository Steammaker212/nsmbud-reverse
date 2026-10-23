/* sub_60440754
 * address: 0x60440754   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60440754(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0
  void *v6; // r0
  void *v7; // r0

  *a1 = off_60BFAC14;
  a1[5] = 0;
  sub_60913ABC(a1 + 11);
  v2 = (void *)a1[14];
  if ( v2 )
  {
    operator_delete(v2);
    a1[14] = 0;
  }
  v3 = (void *)a1[16];
  if ( v3 )
  {
    operator_delete(v3);
    a1[16] = 0;
  }
  sub_60913ABC(a1 + 24);
  v4 = (void *)a1[27];
  if ( v4 )
  {
    operator_delete(v4);
    a1[27] = 0;
  }
  v5 = (void *)a1[29];
  if ( v5 )
  {
    operator_delete(v5);
    a1[29] = 0;
  }
  sub_60913ABC(a1 + 37);
  v6 = (void *)a1[40];
  if ( v6 )
  {
    operator_delete(v6);
    a1[40] = 0;
  }
  v7 = (void *)a1[42];
  if ( v7 )
  {
    operator_delete(v7);
    a1[42] = 0;
  }
  sead__CriticalSection__dtor(a1 + 47);
  return a1;
}
