/* sub_600D9E20
 * address: 0x600D9E20   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D9E20(int a1)
{
  unsigned int v2; // r1
  _DWORD *v3; // r1

  v2 = FIELD_U32(a1, 7136);
  if ( v2 )
    v3 = (_DWORD *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
  else
    v3 = 0;
  sub_600B3444((_DWORD *)a1, v3);
  if ( FIELD_U8(a1, 8160) )
    return KoopalingBase__vf5A4(a1);
  else
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C84438);
}
