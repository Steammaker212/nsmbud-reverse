/* sub_6047F7AC
 * address: 0x6047F7AC   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047F7AC(int a1)
{
  int v2; // r5
  _DWORD *v3; // r6
  int result; // r0

  v2 = 1;
  v3 = (_DWORD *)(dword_60C99DD4 + 272);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    v2 = 2;
  if ( *(_DWORD *)(a1 + 4 * v2 + 64) == -1 )
    sub_603FCBD8((_DWORD *)(dword_60C99DD4 + 272), v2);
  if ( *(_DWORD *)(a1 + 4 * (v2 + 1) + 64) == -1 )
    sub_603FCBD8(v3, v2 + 1);
  result = *(_DWORD *)(a1 + 4 * (v2 + 2) + 64);
  if ( result == -1 )
    return sub_603FCBD8(v3, v2 + 2);
  return result;
}
