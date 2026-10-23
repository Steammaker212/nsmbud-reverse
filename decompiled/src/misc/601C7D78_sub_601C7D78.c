/* sub_601C7D78
 * address: 0x601C7D78   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C7D78(int a1)
{
  int result; // r0

  if ( FIELD_F32(a1, 84) < FIELD_F32(a1, 96) )
    (*(void (__fastcall **)(int, int, int, float))(*(_DWORD *)a1 + 336))(a1, 8, -1, 0.0);
  result = sub_601860F8(a1);
  if ( result == 1 )
  {
    sub_601C6044(a1, (_DWORD *)(a1 + 1032));
    (*(void (__fastcall **)(int, _DWORD, int, float))(*(_DWORD *)a1 + 336))(a1, 0, -1, 0.0);
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  }
  return result;
}
