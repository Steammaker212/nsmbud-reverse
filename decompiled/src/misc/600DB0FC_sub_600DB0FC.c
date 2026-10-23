/* sub_600DB0FC
 * address: 0x600DB0FC   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_600DB0FC(int a1)
{
  signed int v2; // [sp+0h] [bp-10h] BYREF
  signed int v3; // [sp+4h] [bp-Ch] BYREF

  v3 = 0x8000000;
  v2 = 0x800000;
  return sub_608322C0((int *)(a1 + 7168), (int *)(a1 + 7172), &v3, &v2);
}
