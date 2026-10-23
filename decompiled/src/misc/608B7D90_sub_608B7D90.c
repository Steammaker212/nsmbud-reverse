/* sub_608B7D90
 * address: 0x608B7D90   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B7D90(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r5
  int v5; // r7
  int result; // r0

  v2 = FIELD_U8(a1, 458);
  if ( v2 )
  {
    v3 = sub_608C3C60(v2);
    sub_608C411C(v3, a1 + 176);
    FIELD_U8(a1, 458) = 0;
  }
  v4 = a1 + 244;
  v5 = 0;
  if ( FIELD_U8(a1, 37) )
    FIELD_U8(a1, 37) = 0;
  do
  {
    result = *(_DWORD *)(v4 + 4 * v5);
    if ( result )
    {
      sub_608BB040();
      result = (*(int (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 232) + 12))(
                 FIELD_U32(a1, 232),
                 *(_DWORD *)(v4 + 4 * v5));
      *(_DWORD *)(v4 + 4 * v5) = 0;
    }
    ++v5;
  }
  while ( v5 != 16 );
  return result;
}
