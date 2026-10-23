/* ColliderList_clear
 * address: 0x601540F4   size: 44   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ColliderList_clear(int result)
{
  _DWORD *i; // r4

  for ( i = (_DWORD *)result; i[1]; result = (*(int (__fastcall **)(_DWORD *))(*i + 4))(i) )
    ;
  return result;
}
