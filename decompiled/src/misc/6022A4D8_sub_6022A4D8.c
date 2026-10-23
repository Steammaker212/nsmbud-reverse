/* sub_6022A4D8
 * address: 0x6022A4D8   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6022A4D8(int a1)
{
  if ( FIELD_U8(a1, 48) )
    return FIELD_F32(a1, 36) > (float)((float)(FIELD_F32(a1, 40) * -22.0) + -0.8);
  else
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
}
