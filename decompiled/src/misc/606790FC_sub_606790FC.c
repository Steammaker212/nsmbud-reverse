/* sub_606790FC
 * address: 0x606790FC   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606790FC(_DWORD *a1)
{
  int result; // r0

  sub_605E6758((int)a1);
  a1[1565] &= ~0x40000u;
  a1[2033] = 1128792064;
  a1[2035] = 0;
  a1[2034] = 0;
  a1[2008] = 1;
  a1[2012] = 1065353216;
  a1[2011] = 1065353216;
  a1[2010] = 1065353216;
  a1[2133] = 1065353216;
  result = a1[2032];
  if ( result == 1 )
  {
    a1[2032] = 0;
    return sub_6040F4B8(a1[2009], (int)&dword_60CB7D68, dword_60CB7D70, 1.0, 0.0);
  }
  return result;
}
