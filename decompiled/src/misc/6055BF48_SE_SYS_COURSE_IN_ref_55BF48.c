/* SE_SYS_COURSE_IN_ref_55BF48
 * address: 0x6055BF48   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_COURSE_IN_ref_55BF48(int a1)
{
  int v2; // r5
  int v3; // r0

  v2 = 0;
  if ( !FIELD_U8(a1, 4651) )
    return v2;
  v3 = FIELD_U32(a1, 4636);
  switch ( v3 )
  {
    case 2:
      v2 = 1;
      sub_60807EF0(SoundSystem_instance, "SE_SYS_COURSE_IN", 0, 1);
      FIELD_U32(a1, 13312) = 2;
LABEL_8:
      StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60CADC54);
      return v2;
    case 1:
      v2 = 1;
      sub_60807EF0(SoundSystem_instance, "SE_SYS_COURSE_IN", 0, 1);
      FIELD_U32(a1, 13312) = 1;
      goto LABEL_8;
    case 0:
      FIELD_U32(a1, 13312) = 0;
      StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60CADC54);
      return 1;
  }
  return v2;
}
