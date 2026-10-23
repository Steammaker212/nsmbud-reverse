/* sub_6057AC54
 * address: 0x6057AC54   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057AC54(int a1)
{
  int result; // r0
  int v3; // [sp+0h] [bp-10h] BYREF
  char v4; // [sp+4h] [bp-Ch] BYREF

  ((void (__fastcall *)(int *, char *, int, _DWORD))checkLiquidCollisions)(
    &v3,
    &v4,
    a1 + 108,
    FIELD_U8(a1, 86));
  result = 0;
  if ( (unsigned int)(v3 - 3) <= 2 )
  {
    FIELD_U8(a1, 19) = 1;
    return 1;
  }
  return result;
}
