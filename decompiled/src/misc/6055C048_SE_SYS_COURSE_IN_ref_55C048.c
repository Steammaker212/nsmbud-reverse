/* SE_SYS_COURSE_IN_ref_55C048
 * address: 0x6055C048   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_COURSE_IN_ref_55C048(int a1)
{
  int v2; // r1
  int result; // r0
  int v4; // r0
  int v5; // r1
  int *v6; // r4
  int v7; // t1
  int v8; // r1
  int v9; // r0
  int v10; // r6
  int v11; // t1

  v2 = FIELD_U8(a1, 4650);
  result = 0;
  if ( !v2 )
  {
    FIELD_U8(a1, 4651) = 0;
    v4 = FIELD_U32(a1, 5692);
    if ( (v4 & 0x2000) == 0 )
    {
      if ( (v4 & 0x4000) == 0 )
      {
        v5 = FIELD_U32(a1, 5700) | v4;
        if ( (v5 & 0x80) != 0 )
        {
          v11 = FIELD_U32(a1, 4636);
          v6 = (int *)(a1 + 4636);
          result = 0;
          if ( v11 != 2 )
            return result;
          v8 = 1;
        }
        else
        {
          result = 0;
          if ( (v5 & 0x40) == 0 )
            return result;
          v7 = FIELD_U32(a1, 4636);
          v6 = (int *)(a1 + 4636);
          if ( v7 != 1 )
            return result;
          v8 = 2;
        }
        *v6 = v8;
        return result;
      }
      FIELD_U32(a1, 13312) = 0;
      FIELD_U32(a1, 4636) = 0;
      sub_60502694(a1 + 3608);
LABEL_16:
      StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60CADC54);
      return 1;
    }
    v9 = FIELD_U32(a1, 4636);
    if ( v9 == 2 )
    {
      sub_60807EF0(SoundSystem_instance, "SE_SYS_COURSE_IN", 0, 1);
      v10 = 2;
    }
    else
    {
      if ( v9 != 1 )
      {
LABEL_15:
        sub_60502694(a1 + 3608);
        goto LABEL_16;
      }
      v10 = 1;
      sub_60807EF0(SoundSystem_instance, "SE_SYS_COURSE_IN", 0, 1);
    }
    FIELD_U32(a1, 13312) = v10;
    goto LABEL_15;
  }
  return result;
}
