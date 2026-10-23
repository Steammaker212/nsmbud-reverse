/* sub_606F77AC
 * address: 0x606F77AC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606F77AC(int a1)
{
  char v2; // [sp+4h] [bp-Ch] BYREF

  FIELD_U32(a1, 6508) = 0;
  FIELD_U32(a1, 6504) = 958220626;
  FIELD_U16(a1, 6148) = 120;
  FIELD_U32(a1, 6512) = 1;
  return ((int (__fastcall *)(char *, int, int, _DWORD))checkLiquidCollisions)(
           &v2,
           a1 + 6124,
           a1 + 108,
           FIELD_U8(a1, 86));
}
