/* sub_6048EB10
 * address: 0x6048EB10   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048EB10(int a1)
{
  int v2; // r7
  int v3; // r0
  int v4; // r5
  int result; // r0

  v2 = 0;
  do
  {
    v3 = v2;
    if ( (unsigned int)v2 >= 4 )
      v3 = 0;
    v4 = *(_DWORD *)(a1 + 4 * v3 + 47800);
    sub_60505324(FIELD_U32(v4, 68), 0, FIELD_U32(v4, 44));
    sub_60505324(FIELD_U32(v4, 68), 1, FIELD_U32(v4, 44) + 1);
    sub_60505324(FIELD_U32(v4, 68), 2, FIELD_U32(v4, 44) + 2);
    sub_60505324(FIELD_U32(v4, 68), 3, FIELD_U32(v4, 44) + 3);
    sub_60505324(FIELD_U32(v4, 68), 4, FIELD_U32(v4, 44) + 4);
    sub_60505324(FIELD_U32(v4, 68), 5, FIELD_U32(v4, 44) + 5);
    result = v2 + 1;
    if ( v2 > 3 )
      result = 4;
    v2 = result;
  }
  while ( result != 4 );
  return result;
}
