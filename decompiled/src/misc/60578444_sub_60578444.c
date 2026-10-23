/* sub_60578444
 * address: 0x60578444   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60578444(int a1)
{
  int result; // r0
  int v3; // r3
  unsigned int v4; // r1
  int v5; // r0

  result = FIELD_U8(a1, 539);
  if ( result )
  {
    v3 = result - 33;
    v4 = 1u >> (33 - result);
    v5 = 1 << (result - 1);
    if ( v3 >= 0 )
    {
      v4 = 1 << v3;
      v5 = 0;
    }
    result = *(_DWORD *)(EventMgr__instance + 16) & v5 | *(_DWORD *)(EventMgr__instance + 20) & v4;
    if ( !result )
    {
      FIELD_U8(a1, 535) = 0;
      ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAEC7C);
    }
  }
  return result;
}
