/* ColliderNode_ctor
 * address: 0x6015DF90   size: 48   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall ColliderNode_ctor(ColliderNode *this)
{
  FIELD_U32(this, 0x0) = 8;
  ColliderNodeUnk1_ctor(&FIELD_U32(this, 0x4));
  FIELD_U32(this, 0x14) = 0;
  FIELD_U32(this, 0x18) = 0;
  FIELD_U32(this, 0x1C) = 0;
}
