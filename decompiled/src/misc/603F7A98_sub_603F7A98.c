/* sub_603F7A98
 * address: 0x603F7A98   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F7A98(int a1, int a2, int a3, unsigned int a4)
{
  int result; // r0
  int v5; // r4
  unsigned int v6; // r0

  result = FIELD_U32(dword_60C99DD4, 764);
  if ( result == 2 )
  {
    v5 = dword_60B01634[a3];
    v6 = 0;
    if ( a4 < 6 )
      v6 = a4;
    *(_DWORD *)(dword_60C99DD4 + 72 * v6 + 356) += v5;
    return sub_6040806C(dword_60C9A1E8, a2, 33, a4, 0, v5);
  }
  return result;
}
