/* sub_60989920
 * address: 0x60989920   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60989920(_DWORD *a1, int a2, int a3, int a4, unsigned int a5, int a6)
{
  unsigned int result; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0

  result = sub_60851D10(a2);
  if ( result > a5 )
  {
    v11 = sub_60851D24(a2);
    v12 = sub_60855AD8(a4, v11 + 36 * a5);
    (*(void (__fastcall **)(_DWORD *, int))(*a1 + 44))(a1, v12);
    v13 = sub_60851CF8(a2);
    a1[13] = a3;
    a1[14] = v13;
    return (*(int (__fastcall **)(_DWORD *, int))(*a1 + 16))(a1, a6);
  }
  return result;
}
