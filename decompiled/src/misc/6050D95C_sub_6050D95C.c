/* sub_6050D95C
 * address: 0x6050D95C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050D95C(int a1)
{
  int v3; // [sp+4h] [bp-Ch] BYREF

  sub_6050D99C();
  v3 = 1;
  return sub_604753A8(a1 + 60, a1 + 3600, &dword_60CA8080, &v3);
}
