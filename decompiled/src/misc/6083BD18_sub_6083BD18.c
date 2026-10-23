/* sub_6083BD18
 * address: 0x6083BD18   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall sub_6083BD18(int a1)
{
  void *result; // r0
  int v3; // r5
  void *v4; // r0

  result = (void *)dword_60CC73B4(FIELD_U32(a1, 8));
  FIELD_U32(a1, 8) = 0;
  v3 = FIELD_U32(a1, 216);
  if ( v3 )
  {
    if ( FIELD_U32(v3, 256) )
    {
      dword_60CC73E4(FIELD_U32(a1, 216));
      free(*(void **)(v3 + 256));
      FIELD_U32(v3, 256) = 0;
      FIELD_U32(v3, 260) = 0;
    }
    v4 = *(void **)(v3 + 264);
    if ( v4 )
    {
      free(v4);
      FIELD_U32(v3, 264) = 0;
    }
    FIELD_U32(v3, 376) = 0;
    result = free(*(void **)(a1 + 216));
    FIELD_U32(a1, 216) = 0;
  }
  *(_BYTE *)a1 = 0;
  return result;
}
