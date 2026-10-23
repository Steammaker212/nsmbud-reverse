/* sub_608E5EAC
 * address: 0x608E5EAC   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E5EAC(int a1, _DWORD *a2)
{
  if ( FIELD_U32(a1, 80) && ((*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2), a2[1]) )
    return (*(int (__fastcall **)(_DWORD, _DWORD *))(**(_DWORD **)(a1 + 80) + 36))(FIELD_U32(a1, 80), a2);
  else
    return 0;
}
