/* sub_603592A8
 * address: 0x603592A8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603592A8(int a1)
{
  float v2; // s0
  int v3; // r0
  int *v4; // r5
  int result; // r0

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6820));
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v4 = (int *)(a1 + 7488);
  v3 = FIELD_U32(a1, 7488);
  if ( v3 <= 8 )
  {
    sub_6015907C((ActiveCollider *)(a1 + 188), 64);
    sub_6015907C((ActiveCollider *)(a1 + 6868), 64);
    v3 = *v4;
    if ( !*v4 )
      return (*(int (__fastcall **)(int, State *, float))(*(_DWORD *)a1 + 192))(a1, &KoopaTroopa_StateID_Walk, v2);
  }
  result = v3 - 1;
  *v4 = result;
  if ( !result )
    return (*(int (__fastcall **)(int, State *, float))(*(_DWORD *)a1 + 192))(a1, &KoopaTroopa_StateID_Walk, v2);
  return result;
}
