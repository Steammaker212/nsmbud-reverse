/* sub_6027A6F0
 * address: 0x6027A6F0   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_6027A6F0(int a1)
{
  int v2; // r0
  _DWORD *v3; // r1
  float v4; // s0
  int v5; // r0
  int *v6; // r1

  v3 = (_DWORD *)(a1 + 8964);
  v2 = FIELD_U32(a1, 8964);
  *v3 = v2 + 1;
  if ( v2 >= 40 )
    FIELD_U8(a1, 8960) = 0;
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  v4 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v4);
  v5 = FIELD_U32(a1, 2872);
  if ( (v5 & 0x440000) != 0 && (v5 & 0x10000000) == 0 || (v5 & 0x880000) != 0 && (v5 & 0x20000000) == 0 )
    FIELD_U32(a1, 120) = 0;
  if ( (v5 & 1) != 0 )
  {
    SE_EMY_CHOROPU_LAND_ref(a1, 1.4, FIELD_F32(a1, 108), FIELD_F32(a1, 112), 4500.0);
    FIELD_U32(a1, 124) = 0;
    if ( FIELD_U8(a1, 8976) )
      v6 = &dword_60C8EE98;
    else
      v6 = &dword_60C8EEF8;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v6);
  }
  if ( sub_60001B14((StageActor *)a1, a1 + 648) == 1 )
    sub_600020C4(a1, a1 + 648);
  return ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
}
