/* sub_605BF5E0
 * address: 0x605BF5E0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BF5E0(int a1)
{
  int v2; // r5
  _DWORD *v3; // r7
  int v4; // r0
  _BYTE v6[516]; // [sp+8h] [bp-220h] BYREF
  int v7; // [sp+20Ch] [bp-1Ch] BYREF

  v2 = 0;
  v7 = 0;
  memset(v6, 0, 512);
  v3 = *(_DWORD **)(a1 + 1280);
  if ( v3 )
  {
    v4 = 0;
    do
    {
      if ( *v3 )
        v4 = sub_606C5F4C(a1, *(_DWORD *)(*v3 + 2196), &v7, v6, v4);
      v3 = (_DWORD *)v3[1];
    }
    while ( v3 );
    v2 = v7;
  }
  return sub_606C5F0C(a1) + v2;
}
