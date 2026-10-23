/* sub_6068091C
 * address: 0x6068091C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int8 *__fastcall sub_6068091C(unsigned __int8 *result)
{
  int v1; // r1
  int v2; // lr
  unsigned int v3; // r2
  int v4; // r1

  v1 = result[539];
  if ( result[539] )
  {
    v2 = v1 - 33;
    v3 = 1u >> (33 - v1);
    v4 = 1 << (v1 - 1);
    if ( v2 >= 0 )
    {
      v3 = 1 << v2;
      v4 = 0;
    }
    if ( FIELD_U32(EventMgr__instance, 16) & v4 | FIELD_U32(EventMgr__instance, 20) & v3 )
      return (unsigned __int8 *)(*(int (__fastcall **)(unsigned __int8 *, int *))(*(_DWORD *)result + 192))(
                                  result,
                                  &dword_60CB8138);
  }
  return result;
}
