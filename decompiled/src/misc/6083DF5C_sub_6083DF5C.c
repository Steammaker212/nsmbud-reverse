/* sub_6083DF5C
 * address: 0x6083DF5C   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083DF5C(_DWORD *a1, void *a2, unsigned int a3, int a4, int a5, int a6, int a7)
{
  int v9; // r7
  int v10; // r0
  int v11; // r5
  _BYTE v13[16]; // [sp+4h] [bp-34h] BYREF
  _DWORD v14[9]; // [sp+14h] [bp-24h] BYREF

  nn__mii__detail__BufferAllocator__ctor((nn__mii__detail__BufferAllocator *)v14, a2, a3);
  sub_6084780C(v13, a5, a6, a7);
  nn__mii__detail__BufferAllocator__AlignUp((nn__mii__detail__BufferAllocator *)v14, 8u);
  v9 = v14[0];
  nn__mii__detail__BufferAllocator__Advance((nn__mii__detail__BufferAllocator *)v14, 0x1D0u);
  v10 = sub_60842410(v9);
  *a1 = v9;
  v11 = sub_60842588(v10, a4, v13);
  if ( v11 )
  {
    sub_60842470(*a1);
    *a1 = 0;
  }
  nullsub_83(v13);
  nn__mii__detail__BufferAllocator__dtor((nn__mii__detail__BufferAllocator *)v14);
  return v11;
}
