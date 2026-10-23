/* sub_608D5470
 * address: 0x608D5470   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_608D5470(int a1, unsigned int a2)
{
  unsigned int *v2; // r2
  char *result; // r0
  unsigned int *v4; // r12

  v2 = (unsigned int *)(a1 + FIELD_U32(a1, 12));
  result = 0;
  v4 = &v2[2 * a2];
  if ( *((_WORD *)v4 + 2) == 22784 && *v2 > a2 )
    return (char *)v2 + v4[2];
  return result;
}
