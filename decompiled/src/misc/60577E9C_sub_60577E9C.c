/* sub_60577E9C
 * address: 0x60577E9C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60577E9C(int result)
{
  int v1; // r4
  int v2; // r1
  int v3; // r3
  unsigned int v4; // r2
  int v5; // r1

  v1 = result;
  v2 = FIELD_U8(result, 539);
  if ( FIELD_U8(result, 539) )
  {
    v3 = v2 - 33;
    v4 = 1u >> (33 - v2);
    v5 = 1 << (v2 - 1);
    if ( v3 >= 0 )
    {
      v4 = 1 << v3;
      v5 = 0;
    }
    result = *(_DWORD *)(EventMgr__instance + 16) & v5 | *(_DWORD *)(EventMgr__instance + 20) & v4;
    if ( result )
    {
      FIELD_U8(v1, 535) = 1;
      ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(v1 + 6120));
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)v1 + 192))(v1, &dword_60CB10FC);
    }
  }
  return result;
}
