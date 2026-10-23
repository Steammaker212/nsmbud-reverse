/* sub_600563D0
 * address: 0x600563D0   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600563D0(int a1)
{
  if ( FIELD_U16(a1, 6278) || !FIELD_U32(a1, 7956) )
    JUMPOUT(0x6004ECC8);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C809C8);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1276))(a1);
}
