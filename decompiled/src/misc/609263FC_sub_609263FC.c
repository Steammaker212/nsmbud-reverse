/* sub_609263FC
 * address: 0x609263FC   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609263FC(_DWORD *a1)
{
  int v2; // r0
  int v3; // r1
  void *v4; // r8
  _DWORD *v5; // r6
  int v6; // r7
  int v7; // r4
  int v8; // r5

  *a1 = off_60C5DA1C;
  a1[17] = &off_60C5DA84;
  a1[7] = off_60C5DA48;
  a1[8] = off_60C5DA58;
  v2 = a1[50];
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 - 4);
    v4 = (void *)(v2 - 8);
    if ( v3 )
    {
      v5 = (_DWORD *)(v2 + 164 * v3 - 164);
      v6 = -164 * v3;
      do
      {
        *v5 = off_60C5DA90;
        v5[27] = &off_60C5E40C;
        v5[7] = off_60C5D7C4;
        sub_609407C0(v5 + 7);
        *v5 = &off_60C5D81C;
        v6 += 164;
        v5 -= 41;
      }
      while ( v6 );
    }
    operator_delete_8DE3FC(v4);
    a1[49] = 0;
    a1[50] = 0;
    a1[41] = 0;
  }
  else
  {
    v7 = a1[49];
    a1[41] = 0;
    if ( v7 )
    {
      v8 = 28;
      do
      {
        sub_6094083C(v8, 0);
        v8 += 164;
        --v7;
      }
      while ( v7 );
    }
  }
  a1[42] = &off_60C5D81C;
  a1[32] = &off_60C5D9F0;
  a1[18] = &off_60C5E40C;
  a1[8] = &off_60C5D9F0;
  return sub_60923BC0(a1);
}
