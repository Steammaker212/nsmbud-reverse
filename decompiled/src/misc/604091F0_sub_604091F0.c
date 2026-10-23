/* sub_604091F0
 * address: 0x604091F0   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604091F0(int a1)
{
  int v1; // r1
  int v2; // r1
  int *v3; // r2
  int v4; // r1

  v1 = 0;
  if ( (unsigned __int8)(FIELD_U8(a1, 6559) - 1) <= 2u )
  {
    v2 = FIELD_U32(a1, 6472);
    if ( v2 )
    {
      v3 = (int *)(v2 + 56);
      if ( !FIELD_U8(a1, 6476) )
        v3 = (int *)(v2 + 84);
      v4 = *v3;
    }
    else
    {
      LOWORD(v4) = 500;
    }
    sub_603FC56C(dword_60C99DE4, (unsigned __int16)v4);
    return 1;
  }
  return v1;
}
