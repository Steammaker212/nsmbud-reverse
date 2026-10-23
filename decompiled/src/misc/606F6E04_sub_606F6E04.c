/* sub_606F6E04
 * address: 0x606F6E04   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606F6E04(int a1)
{
  _DWORD *v1; // r2
  char v3; // [sp+4h] [bp-Ch] BYREF

  FIELD_U32(a1, 6520) = 0;
  v1 = (_DWORD *)(a1 + 6524);
  do
  {
    *v1 = 0;
    v1[4] = 0;
    v1[5] = 0x40000000;
    v1 += 9;
  }
  while ( (unsigned int)v1 <= a1 + 6848 );
  FIELD_U32(a1, 148) = 0;
  FIELD_U32(a1, 6116) = 0;
  return ((int (__fastcall *)(char *, int, int, _DWORD))checkLiquidCollisions)(
           &v3,
           a1 + 6124,
           a1 + 108,
           FIELD_U8(a1, 86));
}
