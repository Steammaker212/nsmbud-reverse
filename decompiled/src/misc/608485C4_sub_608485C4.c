/* sub_608485C4
 * address: 0x608485C4   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608485C4(_DWORD *a1, int a2, nn__mii__detail__BufferAllocator *this, int a4, int a5, int a6, int a7)
{
  int v7; // r7
  _DWORD *v11; // r5
  int v12; // r4
  int v13; // r2
  int v14; // r0
  int v15; // r2
  int v16; // r0
  int v17; // r2
  int v18; // r0
  int v19; // r2
  int v20; // r0
  _BYTE v23[760]; // [sp+8h] [bp-2F8h] BYREF

  v7 = a5;
  if ( a5 >= 1 )
  {
    v11 = a1;
    do
    {
      nn__mii__detail__BufferAllocator__AlignUp(this, 8u);
      v12 = *(_DWORD *)this;
      nn__mii__detail__BufferAllocator__Advance(this, 0xC0u);
      sub_60998CAC(v12);
      *v11++ = v12;
      --v7;
    }
    while ( v7 );
  }
  memset(v23, 0, 728);
  ((void (__fastcall *)(_BYTE *, int, int, int))loc_60849684)(v23, a7, a4, a6);
  v13 = sub_60998C88(&v23[656]);
  v14 = *a1;
  *(_DWORD *)this = ((*(_DWORD *)this + 7) & 0xFFFFFFF8) + v13;
  sub_60998CC4(v14);
  sub_60998CD0(*a1, a2, &v23[656]);
  ((void (__fastcall *)(_BYTE *, int, int, int))loc_60849684)(v23, a7, a4 + 32, a6);
  v15 = sub_60998C88(&v23[656]);
  v16 = a1[1];
  *(_DWORD *)this = ((*(_DWORD *)this + 7) & 0xFFFFFFF8) + v15;
  sub_60998CC4(v16);
  sub_60998CD0(a1[1], a2, &v23[656]);
  ((void (__fastcall *)(_BYTE *, int, int, int))loc_60849684)(v23, a7, a4 + 64, a6);
  v17 = sub_60998C88(&v23[656]);
  v18 = a1[2];
  *(_DWORD *)this = ((*(_DWORD *)this + 7) & 0xFFFFFFF8) + v17;
  sub_60998CC4(v18);
  sub_60998CD0(a1[2], a2, &v23[656]);
  ((void (__fastcall *)(_BYTE *, int, int, int))loc_60849684)(v23, a7, a4 + 96, a6);
  v19 = sub_60998C88(&v23[656]);
  v20 = a1[3];
  *(_DWORD *)this = ((*(_DWORD *)this + 7) & 0xFFFFFFF8) + v19;
  sub_60998CC4(v20);
  return sub_60998CD0(a1[3], a2, &v23[656]);
}
