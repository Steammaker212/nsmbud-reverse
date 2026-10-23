/* RectCollider_ctor
 * address: 0x6004B764   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

RectCollider *__fastcall RectCollider_ctor(RectCollider *this)
{
  int v2; // r0
  int v3; // r1

  ShapedCollider_ctor(&FIELD_U32(this, 0x0));
  FIELD_U32(this, 0x0)._._.vtable = (int)RectCollider_vtable;
  FIELD_U32(this, 0x170) = 0;
  FIELD_U32(this, 0x174) = 0;
  FIELD_U32(this, 0x178) = 0;
  FIELD_U32(this, 0x17C) = 0;
  FIELD_U32(this, 0x180) = 0;
  FIELD_U32(this, 0x184) = 0;
  FIELD_U32(this, 0x188) = 0;
  FIELD_U32(this, 0x16C) = 0;
  memset(FIELD_U32(this, 0x190), 0, 0x80);
  ColliderNode_ctor(FIELD_U32(this, 0x190));
  ColliderNode_ctor(&FIELD_U32(this, 0x190)[1]);
  ColliderNode_ctor(&FIELD_U32(this, 0x190)[2]);
  ColliderNode_ctor(&FIELD_U32(this, 0x190)[3]);
  memset(&FIELD_U32(this, 0x190)[4], 0, 0x80);
  ColliderNode_ctor(&FIELD_U32(this, 0x190)[4]);
  ColliderNode_ctor(&FIELD_U32(this, 0x190)[5]);
  ColliderNode_ctor(&FIELD_U32(this, 0x190)[6]);
  ColliderNode_ctor(&FIELD_U32(this, 0x190)[7]);
  FIELD_U32(this, 0x188) = 0;
  FIELD_U32(this, 0x184) = 0;
  FIELD_U32(this, 0x180) = 0;
  FIELD_U32(this, 0x17C) = 0;
  FIELD_U32(this, 0x178) = 0;
  FIELD_U32(this, 0x174) = 0;
  FIELD_U32(this, 0x170) = 0;
  FIELD_U32(this, 0x16C) = 0;
  v2 = FIELD_U32(this, 0x0)._.field_130;
  v3 = FIELD_U32(this, 0x0)._.field_134;
  FIELD_U32(this, 0x190)[0].field_1C = v3;
  FIELD_U32(this, 0x190)[0].field_18 = v2;
  FIELD_U32(this, 0x190)[4].field_1C = v3;
  FIELD_U32(this, 0x190)[4].field_18 = v2;
  FIELD_U32(this, 0x190)[1].field_1C = v3;
  FIELD_U32(this, 0x190)[1].field_18 = v2;
  FIELD_U32(this, 0x190)[5].field_1C = v3;
  FIELD_U32(this, 0x190)[5].field_18 = v2;
  FIELD_U32(this, 0x190)[2].field_1C = v3;
  FIELD_U32(this, 0x190)[2].field_18 = v2;
  FIELD_U32(this, 0x190)[6].field_1C = v3;
  FIELD_U32(this, 0x190)[6].field_18 = v2;
  FIELD_U32(this, 0x190)[3].field_1C = v3;
  FIELD_U32(this, 0x190)[3].field_18 = v2;
  FIELD_U32(this, 0x190)[7].field_18 = v2;
  FIELD_U32(this, 0x190)[7].field_1C = v3;
  ShapedCollider_linkNodes(&FIELD_U32(this, 0x0), 4, (ColliderNode *)&FIELD_U32(this, 0x16C), FIELD_U32(this, 0x190), &FIELD_U32(this, 0x190)[4]);
  return this;
}
