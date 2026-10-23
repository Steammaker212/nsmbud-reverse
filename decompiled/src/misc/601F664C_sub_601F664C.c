/* sub_601F664C
 * address: 0x601F664C   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F664C(int a1, unsigned __int8 *a2)
{
  int *v3; // r1
  int v4; // s0

  sub_601F0180(a1, a2);
  *(_DWORD *)a1 = off_60BD75C4;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 732));
  FIELD_U32(a1, 732) = off_60BC6E38;
  FIELD_U32(a1, 828) = 0;
  FIELD_U32(a1, 772) = 0;
  FIELD_U32(a1, 768) = 0;
  FIELD_U32(a1, 764) = 0;
  FIELD_U32(a1, 760) = 0;
  FIELD_U32(a1, 756) = 0;
  FIELD_U32(a1, 752) = 0;
  FIELD_U32(a1, 748) = 0;
  FIELD_U32(a1, 832) = -1;
  EffectData_ctor((EffectData *)(a1 + 776));
  FIELD_U32(a1, 860) = 0;
  FIELD_U32(a1, 856) = 0;
  FIELD_U32(a1, 852) = 0;
  FIELD_U32(a1, 848) = 0;
  FIELD_U32(a1, 844) = 0;
  FIELD_U32(a1, 840) = 0;
  FIELD_U32(a1, 876) = 0;
  FIELD_U32(a1, 880) = 0;
  FIELD_U32(a1, 884) = 0;
  FIELD_U32(a1, 888) = 0;
  FIELD_U32(a1, 892) = 0;
  FIELD_U32(a1, 896) = 1094713344;
  FIELD_U32(a1, 900) = sead__Random__getU32((void *)sead__GlobalRandom__sInstance) & 0x7FFFFFFF;
  FIELD_U32(a1, 904) = 0;
  FIELD_U32(a1, 908) = 0;
  FIELD_U32(a1, 912) = 0;
  FIELD_U32(a1, 916) = 0;
  FIELD_U32(a1, 920) = 0;
  FIELD_U32(a1, 924) = 0;
  FIELD_U32(a1, 928) = 0;
  FIELD_U8(a1, 932) = 1;
  FIELD_U8(a1, 933) = 0;
  FIELD_U32(a1, 624) = 1200;
  FIELD_U32(a1, 628) = 1120403456;
  if ( FIELD_S32(dword_60CC6D78, 124) < 4 )
  {
    v4 = 1143930880;
  }
  else
  {
    v3 = dword_601F67BC;
    if ( (FIELD_U8(dword_60CC6D78, 521) & 1) != 0 )
      v3 = &dword_601F67BC[1];
    v4 = *v3;
  }
  FIELD_U32(a1, 632) = v4;
  FIELD_U32(a1, 636) = 1061997773;
  FIELD_U32(a1, 640) = 1141473280;
  return a1;
}
