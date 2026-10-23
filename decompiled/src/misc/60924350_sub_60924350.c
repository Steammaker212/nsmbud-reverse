/* sub_60924350
 * address: 0x60924350   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60924350(_DWORD *a1)
{
  int v2; // r6
  _DWORD *v3; // r7
  int v4; // r1
  int v5; // r2
  void *v6; // r0
  int v7; // r1
  int v8; // r2
  void *v9; // r0

  *a1 = off_60C5D920;
  a1[7] = off_60C5D954;
  a1[22] = off_60C5D97C;
  v2 = a1[5];
  if ( v2 )
  {
    v3 = (_DWORD *)a1[6];
    do
    {
      if ( *v3 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v3 + 4))(*v3);
      --v2;
      ++v3;
    }
    while ( v2 );
  }
  sub_608DEB70(a1 + 122);
  v4 = a1[194];
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 - 4);
    v6 = (void *)(v4 - 8);
    if ( v5 )
    {
      v7 = v4 - 48;
      v8 = 48 * v5;
      do
      {
        *(_DWORD *)(v7 + v8) = &off_60C5D9F0;
        v8 -= 48;
      }
      while ( v8 );
    }
    operator_delete_8DE3FC(v6);
    a1[193] = 0;
    a1[194] = 0;
  }
  v9 = (void *)a1[126];
  if ( v9 )
  {
    operator_delete_8DE3FC(v9);
    a1[125] = 0;
    a1[126] = 0;
  }
  sub_60923D84(a1 + 137);
  sub_609263FC(a1 + 137);
  sead__CriticalSection__dtor(a1 + 128);
  a1[22] = &off_60C5D9F0;
  sub_60940C28(a1 + 7);
  return sub_60923BC0(a1);
}
