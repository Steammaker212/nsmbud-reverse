/* sub_6083DE50
 * address: 0x6083DE50   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083DE50(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  nn__mii__ParamCharInfoAccessor *v14; // r0
  int IsValid_const; // r1
  int result; // r0
  _BYTE v17[16]; // [sp+Ch] [bp-84h] BYREF
  _BYTE v18[116]; // [sp+1Ch] [bp-74h] BYREF

  v14 = (nn__mii__ParamCharInfoAccessor *)nn__mii__ParamCharInfoAccessor__ctor(v18, a10);
  IsValid_const = nn__mii__ParamCharInfoAccessor__IsValid_const(v14);
  result = 54910;
  if ( IsValid_const == 1 )
  {
    sub_60842BC0(a2);
    *a1 = a2;
    sub_6084780C(v17, a5, a6, a7);
    ((void (__fastcall *)(_DWORD, int, _BYTE *, int, int, _BYTE *, int))loc_60842DF8)(*a1, a4, v17, a8, a9, v18, a11);
    nullsub_83(v17);
    return 0;
  }
  return result;
}
