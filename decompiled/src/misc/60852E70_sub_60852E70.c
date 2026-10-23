/* sub_60852E70
 * address: 0x60852E70   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60852E70(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int result; // r0

  v2 = a1[12];
  if ( v2 )
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v2 + 16))(v2, 0);
  v3 = a1[13];
  if ( v3 )
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v3 + 16))(v3, 0);
  v4 = a1[14];
  if ( v4 )
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v4 + 16))(v4, 0);
  result = a1[15];
  if ( result )
    return (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)result + 16))(result, 0);
  return result;
}
