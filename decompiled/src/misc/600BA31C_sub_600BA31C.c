/* sub_600BA31C
 * address: 0x600BA31C   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600BA31C(int result, unsigned int a2)
{
  if ( a2 <= 2 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 276))(result);
  return result;
}
