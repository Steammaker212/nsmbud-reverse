/* sub_609507F4
 * address: 0x609507F4   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609507F4(_DWORD *a1)
{
  int v2; // r7
  _DWORD *v3; // r0
  int v4; // r6
  void *v5; // r0
  _DWORD v7[9]; // [sp+4h] [bp-24h] BYREF

  v2 = 5;
  *a1 = off_60C5E8B0;
  do
  {
    v3 = (_DWORD *)a1[v2];
    v7[0] = v3[4];
    v7[1] = v3[5];
    v7[2] = v3[6];
    sub_60913ABC((int)v7);
    v4 = a1[v2];
    if ( v4 )
    {
      sub_609175E4(v4 + 80);
      v5 = (void *)sub_60917AE4(v4);
      operator_delete(v5);
    }
    a1[v2++] = 0;
  }
  while ( v2 != 31 );
  a1[31] = off_60BF9C4C;
  a1[35] = &off_60BF9C5C;
  nullsub_124();
  sead__IDisposer__dtor(a1 + 31);
  return a1;
}
