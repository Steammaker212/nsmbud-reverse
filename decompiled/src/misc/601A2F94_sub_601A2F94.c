/* sub_601A2F94
 * address: 0x601A2F94   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A2F94(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 2840);
  if ( !result )
  {
    memset((void *)(a1 + 172), 0, 2160);
    sub_601A33F8(a1, 0);
    sub_601A33F8(a1, 1);
    sub_601A33F8(a1, 2);
    sub_601A33F8(a1, 3);
    sub_601A33F8(a1, 4);
    sub_601A33F8(a1, 5);
    sub_601A33F8(a1, 6);
    sub_601A33F8(a1, 7);
    return sub_601A33F8(a1, 8);
  }
  return result;
}
