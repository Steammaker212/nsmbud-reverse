/* sub_605D128C
 * address: 0x605D128C   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D128C(int a1)
{
  ModelWrapper *v2; // r0
  ModelWrapper **v3; // r5
  unsigned int animations; // r3
  void **v5; // r1
  int result; // r0
  float v7; // s0
  int *v8; // r1

  v3 = (ModelWrapper **)(a1 + 6100);
  v2 = *(ModelWrapper **)(a1 + 6100);
  animations = (unsigned int)FIELD_U32(v2 + (1) * 48, 0x14);
  v5 = FIELD_U32(v2, 0xC);
  if ( FIELD_U32(v2, 0x8) > animations )
    v5 += animations;
  if ( (*((_BYTE *)*v5 + 28) & 0x20) != 0 )
  {
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB11C0);
    v2 = *v3;
  }
  j_ModelWrapper_updateAnims(v2);
  result = FIELD_U8(a1, 6517);
  if ( FIELD_U8(a1, 6517) )
  {
    CollisionActor__handleGravity((CollisionActor *)a1);
    v7 = FIELD_F32(a1, 124) + FIELD_F32(a1, 112);
    FIELD_F32(a1, 112) = v7;
    CollisionMgr_process((_BYTE *)(a1 + 648), v7);
    result = FIELD_U32(a1, 2872);
    if ( (result & 1) != 0 )
    {
      v8 = &dword_605D1338;
      if ( (result & 8) != 0 )
        v8 = &dword_605D133C;
      FIELD_U32(a1, 124) = *v8;
    }
  }
  return result;
}
