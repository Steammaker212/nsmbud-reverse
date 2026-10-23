/* sub_606A1F24
 * address: 0x606A1F24   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A1F24(int a1, ActorBuildInfo *a2)
{
  StateActor_ctor((StateActor *)a1, a2);
  *(_DWORD *)a1 = off_60C18EB8;
  memset((void *)(a1 + 6100), 0, 145);
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 6248));
  FIELD_U32(a1, 6248) = off_60BC6E38;
  FIELD_U32(a1, 6264) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 6268));
  FIELD_U32(a1, 6268) = off_60BC6E38;
  FIELD_U32(a1, 6284) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 6288));
  FIELD_U32(a1, 6288) = off_60BC6E38;
  FIELD_U32(a1, 6304) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 6308));
  FIELD_U32(a1, 6308) = off_60BC6E38;
  memset((void *)(a1 + 6324), 0, 870);
  FIELD_U8(a1, 7196) = 0;
  RectCollider_ctor((RectCollider *)(a1 + 7200));
  FIELD_U32(a1, 7200) = off_60BC30D8;
  sub_606BB7B8(a1 + 7896);
  FIELD_U8(a1, 8010) = 0;
  FIELD_U16(a1, 8008) = 0;
  FIELD_U32(a1, 8004) = 0;
  FIELD_U32(a1, 8000) = 0;
  FIELD_U32(a1, 7996) = 0;
  FIELD_U32(a1, 7992) = 0;
  return a1;
}
