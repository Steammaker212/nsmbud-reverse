/* sub_6074A094
 * address: 0x6074A094   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074A094(int a1)
{
  int v2; // r1
  int v3; // r2

  if ( Actor__getProfileId((Actor *)a1) != 845 )
  {
    FIELD_U32(a1, 160) = sub_60748FA0(a1, FIELD_U32(a1, 80));
    FIELD_U32(a1, 572) = 0;
    FIELD_U32(a1, 576) = 1103101952;
    FIELD_U32(a1, 580) = 0;
    FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + (float)((float)byte_60B0A5B0[FIELD_U32(a1, 80)] * -128.0);
    v2 = FIELD_U32(a1, 112);
    v3 = FIELD_U32(a1, 116);
    FIELD_U32(a1, 660) = FIELD_U32(a1, 108);
    FIELD_U32(a1, 664) = v2;
    FIELD_U32(a1, 668) = v3;
  }
  StateMgr__changeState((StateMgr *)(a1 + 712), (StateBase *)&dword_60CBE81C);
  sub_60748D78(a1);
  return 1;
}
