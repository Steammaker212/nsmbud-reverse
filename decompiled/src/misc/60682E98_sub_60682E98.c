/* sub_60682E98
 * address: 0x60682E98   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60682E98(int a1)
{
  _BYTE *v2; // r6

  FIELD_U32(a1, 7456) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 7508) = 1;
  FIELD_U32(a1, 7496) = 60;
  FIELD_U32(a1, 7460) = 0;
  FIELD_U32(a1, 7464) = 0x40000000;
  FIELD_U32(a1, 7476) = -1038090240;
  FIELD_U32(a1, 7468) = 1090519040;
  FIELD_U32(a1, 7472) = 1075838976;
  FIELD_U32(a1, 7504) = 120;
  FIELD_U32(a1, 7500) = 45;
  FIELD_U32(a1, 7432) = 0;
  FIELD_U32(a1, 7436) = -1031798784;
  FIELD_U32(a1, 508) = 1132462080;
  FIELD_U32(a1, 512) = 1149239296;
  v2 = (_BYTE *)(a1 + 7517);
  if ( Actor__getProfileId((Actor *)a1) == 330 )
  {
    *v2 = 1;
    FIELD_U8(a1, 7516) = 1;
  }
  sub_60681908(a1);
  FIELD_U32(a1, 116) = 1161936896;
  sub_60682FDC(a1);
  wrist0_ref(a1);
  sub_606832F0(a1);
  if ( *v2 )
    ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C16DA4, 0);
  return 1;
}
