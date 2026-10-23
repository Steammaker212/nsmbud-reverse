/* sub_604B5230
 * address: 0x604B5230   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B5230(int result)
{
  _BYTE *v1; // r4

  v1 = (_BYTE *)(result + 14937);
  if ( FIELD_U8(result, 14937) )
  {
    result = sub_604741D8(*(_DWORD **)(result + 4), 4u, &dword_60CA1B74, 0);
    *v1 = 0;
  }
  return result;
}
