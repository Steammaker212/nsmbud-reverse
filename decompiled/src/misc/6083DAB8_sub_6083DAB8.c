/* sub_6083DAB8
 * address: 0x6083DAB8   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083DAB8(
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
        int a12,
        int a13,
        int a14)
{
  nn__mii__ParamCharInfoAccessor *v18; // r0
  int IsValid_const; // r1
  int result; // r0
  int v21; // r7
  _BYTE v22[16]; // [sp+10h] [bp-A0h] BYREF
  _BYTE v23[16]; // [sp+20h] [bp-90h] BYREF
  _DWORD v24[3]; // [sp+30h] [bp-80h] BYREF
  _BYTE v25[116]; // [sp+3Ch] [bp-74h] BYREF

  v18 = (nn__mii__ParamCharInfoAccessor *)nn__mii__ParamCharInfoAccessor__ctor(v25, a14);
  IsValid_const = nn__mii__ParamCharInfoAccessor__IsValid_const(v18);
  result = 54910;
  if ( IsValid_const == 1 )
  {
    nn__mii__detail__BufferAllocator__ctor((nn__mii__detail__BufferAllocator *)v24, a2, a3);
    sub_6084780C(v23, a5, a6, a7);
    sub_6084780C(v22, a8, a9, a10);
    nn__mii__detail__BufferAllocator__AlignUp((nn__mii__detail__BufferAllocator *)v24, 8u);
    v21 = v24[0];
    nn__mii__detail__BufferAllocator__Advance((nn__mii__detail__BufferAllocator *)v24, 0x3EB0u);
    sub_6083EBA8(v21);
    *a1 = v21;
    ((void (__fastcall *)(int, _BYTE *, _BYTE *, int, int, int, int, _BYTE *))loc_6083F5B8)(
      v21,
      v23,
      v22,
      a4,
      a11,
      a12,
      a13,
      v25);
    nullsub_83(v22);
    nullsub_83(v23);
    nn__mii__detail__BufferAllocator__dtor((nn__mii__detail__BufferAllocator *)v24);
    return 0;
  }
  return result;
}
