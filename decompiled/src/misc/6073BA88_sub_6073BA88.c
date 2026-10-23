/* sub_6073BA88
 * address: 0x6073BA88   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6073BA88(int a1)
{
  unsigned int result; // r0
  unsigned __int8 *v3; // r6
  unsigned __int8 v4; // r7

  FIELD_U8(a1, 6115) = 1;
  v3 = (unsigned __int8 *)(a1 + 6108);
  result = FIELD_U8(a1, 6108);
  if ( result )
  {
    v4 = 0;
    do
    {
      *(_BYTE *)(sub_6073AFA4(a1, v4++) + 7461) = 1;
      result = *v3;
    }
    while ( v4 < result );
  }
  return result;
}
