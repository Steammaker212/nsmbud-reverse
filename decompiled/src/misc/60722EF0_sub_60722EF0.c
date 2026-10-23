/* sub_60722EF0
 * address: 0x60722EF0   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60722EF0(void *a1, unsigned int a2, unsigned int a3)
{
  int v6; // r6
  int v7; // r0

  v6 = operator_new_8DE25C(0x2420u, a1, 4);
  FIELD_U32(v6, 9240) = a3;
  FIELD_U32(v6, 9244) = a2;
  FIELD_U32(v6, 9236) = -1;
  FIELD_U32(v6, 9232) = -1;
  FIELD_U32(v6, 9228) = -1;
  FIELD_U32(v6, 9224) = -1;
  memset((void *)(v6 + 1028), 255, 0x2000u);
  memset((void *)v6, 0, 1028);
  FIELD_U16(v6, 9220) = 0;
  sub_607231A8(v6, a1);
  v7 = sub_6071B2AC(TilesetMgr_instance, a2, a3);
  sub_60722FB4(v6, v7, a1);
  return v6;
}
