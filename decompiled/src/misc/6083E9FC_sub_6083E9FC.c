/* sub_6083E9FC
 * address: 0x6083E9FC   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083E9FC(
        nn__util__BinaryFileHeader *a1,
        void *a2,
        unsigned int a3,
        int a4,
        nn__util__BinaryFileHeader *a5,
        int a6,
        int *a7)
{
  nn__mii__detail__BufferAllocator *v9; // r0
  int v10; // r7
  int v11; // r1
  int v12; // r2
  int v13; // r5
  int v15; // [sp+8h] [bp-28h] BYREF
  int v16; // [sp+Ch] [bp-24h]
  int v17; // [sp+10h] [bp-20h]
  _DWORD v18[7]; // [sp+14h] [bp-1Ch] BYREF

  v9 = (nn__mii__detail__BufferAllocator *)nn__mii__detail__BufferAllocator__ctor(
                                             (nn__mii__detail__BufferAllocator *)v18,
                                             a2,
                                             a3);
  nn__mii__detail__BufferAllocator__AlignUp(v9, 4u);
  v10 = v18[0];
  nn__mii__detail__BufferAllocator__Advance((nn__mii__detail__BufferAllocator *)v18, 0x2Cu);
  sub_60848278(v10);
  *(_DWORD *)a1 = v10;
  v11 = *a7;
  v12 = a7[1];
  v17 = a7[2];
  v16 = v12;
  v15 = sub_6083DC5C(v11);
  v16 = sub_6083DC5C(v16);
  v13 = u_Modulate_ref(*(_DWORD *)a1, (int)v18, a4, a5, a6, (int)&v15);
  if ( v13 )
  {
    nullsub_86(*(_DWORD *)a1);
    *(_DWORD *)a1 = 0;
  }
  nn__mii__detail__BufferAllocator__dtor((nn__mii__detail__BufferAllocator *)v18);
  return v13;
}
