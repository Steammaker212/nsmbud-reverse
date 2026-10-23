/* sub_605D00B8
 * address: 0x605D00B8   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D00B8(int a1, float a2, float a3)
{
  return sub_60716838(
           TileMgr_instance,
           (unsigned int)FIELD_F32(a1, 6980),
           (unsigned int)(float)-FIELD_F32(a1, 6984),
           FIELD_U8(a1, 86),
           COERCE_FLOAT((unsigned int)(float)-FIELD_F32(a1, 6984)),
           a3,
           COERCE_FLOAT((unsigned int)FIELD_F32(a1, 6980)));
}
