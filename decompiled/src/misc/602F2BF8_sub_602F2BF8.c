/* sub_602F2BF8
 * address: 0x602F2BF8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F2BF8(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  int v6; // lr
  int v7; // r5
  int v8; // r0

  if ( a5 )
  {
    v6 = a5[1];
    v7 = a5[2];
    FIELD_U32(a1, 8) = *a5;
    v8 = a1 + 8;
    FIELD_U32(a1, 12) = v6;
    FIELD_U32(a1, 16) = v7;
  }
  else
  {
    v8 = 0;
  }
  FIELD_U32(a1, 4) = v8;
  (**(void (__fastcall ***)(int))a1)(a1);
  FIELD_U8(a1, 20) = 1;
  return 1;
}
