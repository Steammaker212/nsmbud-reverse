/* sub_602BB74C
 * address: 0x602BB74C   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_602BB74C(CollisionActor *a1)
{
  ActiveColliderNode **p_prev; // r0
  ActiveColliderNode *prev; // r1
  ActiveCollider *owner; // r2
  ActiveColliderNode *v5; // r3
  ActiveColliderNode *v6; // r1
  float v7; // s18

  if ( FIELD_U8(a1, 0x17A6) )
  {
    p_prev = &a1[1]._.aCollider.node3.prev;
    prev = a1[1]._.aCollider.node3.prev;
    owner = FIELD_U32(prev + (1) * 12, 0x0);
    v5 = FIELD_U32(prev, 0x8);
    v6 = FIELD_U32(prev + (5) * 12, 0x8);
    v7 = 2147500000.0 * 4.2;
    if ( v5 > v6 )
      owner = (ActiveCollider *)((char *)owner + 4 * (_DWORD)v6);
    *(_DWORD *)(FIELD_U32(owner, 0x0) + 24) = 1045220557;
  }
  else
  {
    p_prev = &a1[1]._.aCollider.node3.prev;
    v7 = 2147500000.0 * 11.25;
  }
  j_ModelWrapper_updateAnims(*p_prev);
  FIELD_U32(a1, 0x9C) += (int)(float)(v7 / 180.0);
  CollisionActor__handleGravity(a1);
  return CollisionActor__handleSpeed(a1);
}
