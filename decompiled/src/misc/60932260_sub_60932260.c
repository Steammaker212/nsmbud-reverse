/* sub_60932260
 * address: 0x60932260   size: 588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60932260(_DWORD *a1)
{
  int v2; // r0
  int v3; // r6
  int i; // r7
  _DWORD *v5; // r5
  int v6; // r0
  int v7; // r1
  void *v8; // r8
  int v9; // r5
  int v10; // r7

  *a1 = off_60C5E1D0;
  a1[99] = &off_60C5E20C;
  if ( (a1[708] || a1[711]) && (a1[701] || a1[704]) )
  {
    sub_60913CF0((int)(a1 + 707));
    sub_60913CF0((int)(a1 + 700));
  }
  v2 = a1[390];
  if ( v2 >= 1 )
  {
    v3 = 0;
    for ( i = 0; i < v2; ++i )
    {
      v5 = (_DWORD *)a1[391];
      if ( v2 > (unsigned int)i )
        v5 = (_DWORD *)((char *)v5 + v3);
      if ( v5[517] || v5[520] )
        sub_60913CF0((int)(v5 + 516));
      if ( v5[679] || v5[682] )
        sub_60913CF0((int)(v5 + 678));
      v5[686] = 0;
      v5[687] = 0;
      v3 += 3608;
      v2 = a1[390];
    }
  }
  v6 = a1[391];
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 - 4);
    v8 = (void *)(v6 - 8);
    if ( v7 )
    {
      v9 = 3608 * v7;
      v10 = v6 - 3608;
      do
      {
        sub_60938C28(v10 + v9);
        v9 -= 3608;
      }
      while ( v9 );
    }
    operator_delete_8DE3FC(v8);
    a1[390] = 0;
    a1[391] = 0;
  }
  nullsub_124(a1 + 714);
  a1[714] = off_60BF9C4C;
  a1[718] = &off_60BF9C5C;
  nullsub_124(a1 + 714);
  sead__IDisposer__dtor(a1 + 714);
  a1[707] = off_60BF9C2C;
  sub_60913C18((int)(a1 + 707));
  a1[700] = off_60BF9C2C;
  sub_60913C18((int)(a1 + 700));
  sub_609175E4((int)(a1 + 634));
  sub_60917AE4((int)(a1 + 614));
  sub_609175E4((int)(a1 + 548));
  sub_60917AE4((int)(a1 + 528));
  sub_609175E4((int)(a1 + 476));
  sub_609175E4((int)(a1 + 408));
  a1[342] = &off_60C5E40C;
  a1[338] = &off_60C5E40C;
  a1[334] = &off_60C5E40C;
  a1[330] = &off_60C5E40C;
  a1[326] = &off_60C5E40C;
  a1[322] = &off_60C5E40C;
  a1[318] = &off_60C5E40C;
  a1[314] = &off_60C5E40C;
  a1[310] = &off_60C5E40C;
  a1[306] = &off_60C5E40C;
  a1[302] = &off_60C5E40C;
  a1[298] = &off_60C5E40C;
  a1[294] = &off_60C5E40C;
  a1[290] = &off_60C5E40C;
  a1[286] = &off_60C5E40C;
  a1[282] = &off_60C5E40C;
  a1[278] = &off_60C5E40C;
  a1[274] = &off_60C5E40C;
  a1[270] = &off_60C5E40C;
  a1[263] = &off_60C5D81C;
  *a1 = &off_60C5D9F0;
  return a1;
}
