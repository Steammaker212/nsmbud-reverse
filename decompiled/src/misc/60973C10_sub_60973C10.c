/* sub_60973C10
 * address: 0x60973C10   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60973C10(int result, int a2, int a3, int a4)
{
  int v7; // r6

  v7 = result;
  if ( a2 >= 1 )
  {
    sead__PtrArrayImpl__allocBuffer(result + 20, a2, a4, 4);
    result = sead__PtrArrayImpl__allocBuffer(v7 + 32, a2, a4, 4);
  }
  if ( a3 >= 1 )
  {
    sead__PtrArrayImpl__allocBuffer(v7 + 44, a3, a4, 4);
    return sead__PtrArrayImpl__allocBuffer(v7 + 56, a3, a4, 4);
  }
  return result;
}
