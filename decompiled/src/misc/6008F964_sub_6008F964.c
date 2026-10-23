/* sub_6008F964
 * address: 0x6008F964   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008F964(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r1
  unsigned int v4; // r0
  int result; // r0

  v2 = a1 + 1576;
  j_ModelWrapper_updateAnims(a1[1576]);
  CollisionMgr_process((_BYTE *)v2 - 5656);
  v3 = *(_DWORD *)(*v2 + 12);
  v4 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v4 )
    v3 += 4 * v4;
  result = *(unsigned __int8 *)(*(_DWORD *)v3 + 28);
  if ( (result & 0x20) != 0 )
    return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C82080);
  return result;
}
