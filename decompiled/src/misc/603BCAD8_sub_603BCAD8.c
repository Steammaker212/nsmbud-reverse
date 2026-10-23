/* sub_603BCAD8
 * address: 0x603BCAD8   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BCAD8(int a1)
{
  float v2; // s0
  int *v3; // r1

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  sub_6039F328(a1, 0);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    v3 = &dword_603BCB84;
    if ( (FIELD_U8(dword_60C9CF0C, 1361) & 1) != 0 )
      v3 = &dword_603BCB88;
    FIELD_U32(a1, 124) = *v3;
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 724))(a1) == 1 )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C982F0);
  return Animation_update(**(_DWORD **)(FIELD_U32(a1, 6824) + 12));
}
