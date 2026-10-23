/* sub_60150BDC
 * address: 0x60150BDC   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60150BDC(_DWORD *a1, unsigned int a2)
{
  int result; // r0
  int v4; // r1
  _DWORD *v5; // r0
  int v6; // r1
  _DWORD *v7; // r2
  int v8; // r1

  result = 0;
  if ( a2 < 2 )
  {
    if ( ((a1[((int)(a2 + 18) >> 5) + 556] & (1 << ((a2 + 18) & 0x1F))) != 0
       || (a1[((int)(a2 + 22) >> 5) + 556] & (1 << ((a2 + 22) & 0x1F))) != 0)
      && (a1[((int)(a2 + 28) >> 5) + 556] & (1 << ((a2 + 28) & 0x1F))) == 0 )
    {
      v5 = &a1[84 * a2];
      v6 = a1[a2 + 640];
      v7 = &v5[14 * v6];
      result = 0;
      if ( v6 < 6 )
        return (int)(v7 + 648);
    }
  }
  else if ( a2 == 2 )
  {
    if ( (a1[556] & 0x10400) == 0x400 )
    {
      v8 = a1[642];
      result = 0;
      if ( v8 < 6 )
        return (int)&a1[14 * v8 + 816];
    }
  }
  else if ( a2 == 3 && (a1[556] & 1) != 0 )
  {
    v4 = a1[643];
    result = 0;
    if ( v4 < 6 )
      return (int)&a1[14 * v4 + 900];
  }
  return result;
}
