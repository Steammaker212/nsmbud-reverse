/* sub_607EBF2C
 * address: 0x607EBF2C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607EBF2C(int a1)
{
  int v2; // r4
  int v3; // r0
  sead_IDisposer *(__fastcall *v4)(int); // r0
  int v5; // r1
  int v6; // r3
  int v8; // [sp+8h] [bp-18h] BYREF
  sead_IDisposer *(__fastcall *v9)(int); // [sp+Ch] [bp-14h]

  v2 = dword_60CC62E4;
  v3 = FIELD_U32(dword_60C99DEC, 508);
  if ( v3 == 1 )
  {
    v8 = 2;
    v4 = (sead_IDisposer *(__fastcall *)(int))sub_603EA668;
    goto LABEL_8;
  }
  if ( v3 == 2 )
  {
    v8 = 2;
    v4 = (sead_IDisposer *(__fastcall *)(int))MultiPlayCourseSelectScene_create;
LABEL_8:
    v9 = v4;
    v5 = a1;
    v6 = 0;
    goto LABEL_9;
  }
  if ( sub_603FAD88() != 1 )
  {
    v8 = 2;
    v4 = CourseSelectTask_create;
    goto LABEL_8;
  }
  v5 = a1;
  v6 = 2;
  v8 = 2;
  v9 = DarkCloudDemoScene_create;
LABEL_9:
  SceneMgr_doSceneChange(v2, v5, (int)&v8, v6, 0);
  FIELD_U32(v2, 108) = 2;
  return 2;
}
