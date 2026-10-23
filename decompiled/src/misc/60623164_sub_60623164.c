/* sub_60623164
 * address: 0x60623164   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60623164(CollisionActor *a1)
{
  ActiveColliderNode *next; // r1
  int v3; // r0
  int v4; // r3
  bool v5; // zf
  int v6; // r1

  next = a1[1]._.aCollider.createNode.next;
  v3 = -dword_60CB3A70;
  v4 = dword_60CB3A70;
  if ( !next )
  {
    v4 = -dword_60CB3A70;
    v3 = dword_60CB3A70;
  }
  v5 = FIELD_U32(a1, 0x50) == (_DWORD)next;
  v6 = -100663296;
  if ( v5 )
  {
    v3 = v4;
    v6 = 100663296;
  }
  if ( FIELD_U8(a1, 0x17A6) )
    v6 = (int)(float)((float)v6 * 0.5);
  FIELD_U32(a1, 0x9C) += v6;
  FIELD_U32(a1, 0xA0) += v3;
  CollisionActor__handleGravity(a1);
  return CollisionActor__handleSpeed(a1);
}
