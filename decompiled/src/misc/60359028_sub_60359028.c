/* sub_60359028
 * address: 0x60359028   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60359028(int a1)
{
  float v2; // s0
  int result; // r0
  int *v4; // r5
  int v5; // r0
  int v6; // r0
  int target; // [sp+4h] [bp-14h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6820));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  sub_6039F328(a1, 0);
  ((void (__fastcall *)(int))loc_603A2F84)(a1);
  v4 = (int *)(a1 + 6856);
  result = FIELD_U32(a1, 6856);
  if ( result )
  {
    *v4 = result - 1;
    v5 = dword_60AF20E0[FIELD_U32(a1, 7476)];
    if ( FIELD_U32(a1, 80) )
      v5 = -v5;
    target = v5;
    moveValueTo((int *)(a1 + 160), &target, (int *)(a1 + 6860));
    result = *v4;
    if ( !*v4 )
    {
      v6 = dword_60AF20E0[FIELD_U32(a1, 7476)];
      if ( FIELD_U32(a1, 80) )
        v6 = -v6;
      FIELD_U32(a1, 160) = v6;
      return (*(int (__fastcall **)(int, State *))(*(_DWORD *)a1 + 192))(a1, &KoopaTroopa_StateID_Walk);
    }
  }
  return result;
}
