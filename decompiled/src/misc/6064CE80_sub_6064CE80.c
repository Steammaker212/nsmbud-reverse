/* sub_6064CE80
 * address: 0x6064CE80   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6064CE80(int a1)
{
  int v2; // r6
  int v3; // r4
  _DWORD *v4; // r7
  int v5; // r0
  _BYTE v7[516]; // [sp+8h] [bp-220h] BYREF
  int v8; // [sp+20Ch] [bp-1Ch] BYREF

  v2 = 0;
  v8 = 0;
  memset(v7, 0, 512);
  v3 = a1 + 7456;
  v4 = *(_DWORD **)(a1 + 6360);
  if ( v4 )
  {
    v5 = 0;
    do
    {
      if ( *v4 )
        v5 = sub_606C5F4C(v3, *(_DWORD *)(*v4 + 2196), &v8, v7, v5);
      v4 = (_DWORD *)v4[1];
    }
    while ( v4 );
    v2 = v8;
  }
  return sub_606C5F0C(v3) + v2;
}
