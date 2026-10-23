/* sub_60473DA4
 * address: 0x60473DA4   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_60473DA4(int a1)
{
  int v1; // r0

  v1 = FIELD_U32(a1, 16);
  if ( v1 )
    return *(char **)(v1 + 28);
  (*((void (__cdecl **)())off_60BFCA68 + 3))();
  return off_60BFCA6C;
}
