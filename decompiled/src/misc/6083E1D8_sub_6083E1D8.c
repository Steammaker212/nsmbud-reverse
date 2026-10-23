/* sub_6083E1D8
 * address: 0x6083E1D8   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083E1D8(
        _DWORD *a1,
        void *a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  nn__mii__ParamCharInfoAccessor *v16; // r0
  int IsValid_const; // r1
  int result; // r0
  int v19; // r4
  int v20; // r0
  _BYTE v21[16]; // [sp+10h] [bp-90h] BYREF
  _DWORD v22[3]; // [sp+20h] [bp-80h] BYREF
  _BYTE v23[116]; // [sp+2Ch] [bp-74h] BYREF

  v16 = (nn__mii__ParamCharInfoAccessor *)nn__mii__ParamCharInfoAccessor__ctor(v23, a10);
  IsValid_const = nn__mii__ParamCharInfoAccessor__IsValid_const(v16);
  result = 54910;
  if ( IsValid_const == 1 )
  {
    nn__mii__detail__BufferAllocator__ctor((nn__mii__detail__BufferAllocator *)v22, a2, a3);
    sub_6084780C(v21, a5, a6, a7);
    nn__mii__detail__BufferAllocator__AlignUp((nn__mii__detail__BufferAllocator *)v22, 8u);
    v19 = v22[0];
    nn__mii__detail__BufferAllocator__Advance((nn__mii__detail__BufferAllocator *)v22, 0x4B48u);
    sub_6084495C(v19);
    *a1 = v19;
    v20 = sub_6083E70C(a9);
    ((void (__fastcall *)(int, _BYTE *, int, int, int, _BYTE *, int, int))loc_60845640)(
      v19,
      v21,
      a8,
      a4,
      v20,
      v23,
      a11,
      a12);
    nullsub_83(v21);
    nn__mii__detail__BufferAllocator__dtor((nn__mii__detail__BufferAllocator *)v22);
    return 0;
  }
  return result;
}
