/* sub_6083E098
 * address: 0x6083E098   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083E098(_DWORD *a1, void *a2, unsigned int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v11; // r7
  int v12; // r5
  _BYTE v14[16]; // [sp+Ch] [bp-34h] BYREF
  _DWORD v15[9]; // [sp+1Ch] [bp-24h] BYREF

  nn__mii__detail__BufferAllocator__ctor((nn__mii__detail__BufferAllocator *)v15, a2, a3);
  sub_6084780C(v14, a5, a6, a7);
  nn__mii__detail__BufferAllocator__AlignUp((nn__mii__detail__BufferAllocator *)v15, 8u);
  v11 = v15[0];
  nn__mii__detail__BufferAllocator__Advance((nn__mii__detail__BufferAllocator *)v15, 0x250u);
  sub_60843F04(v11);
  *a1 = v11;
  v12 = sub_6084409C(v11, v15, a4, v14, a8, a9);
  if ( v12 )
  {
    sub_60843F58(*a1);
    *a1 = 0;
  }
  nullsub_83(v14);
  nn__mii__detail__BufferAllocator__dtor((nn__mii__detail__BufferAllocator *)v15);
  return v12;
}
