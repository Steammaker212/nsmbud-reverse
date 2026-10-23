/* sub_60023CB0
 * address: 0x60023CB0   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60023CB0(int *a1)
{
  int result; // r0
  bool v3; // zf
  int v4; // r2
  int (*v5)(); // r0
  sead_IDisposer *(__fastcall *v6)(int); // r1
  bool v7; // zf
  int v8; // r5
  int v9; // r0
  int v10; // r0
  int v11; // r0
  unsigned int v12; // r0
  int v13; // r0
  bool v14; // zf

  result = *a1;
  v3 = result == 0;
  if ( result )
    v3 = dword_60C7F558 == 0;
  if ( !v3 )
  {
    v4 = 4;
    if ( result == 2 )
    {
      v5 = (int (*)())a1[1];
      v6 = (sead_IDisposer *(__fastcall *)(int))sub_600246FC;
      v7 = v5 == sub_600246FC;
      if ( v5 != sub_600246FC )
      {
        v6 = AreaTask_create;
        v7 = (char *)v5 == (char *)AreaTask_create;
      }
      if ( v7 )
      {
        v8 = FIELD_U8(LevelInfo_instance, 29);
        v9 = sub_6040E4FC(v8, v6, 4);
        v4 = 24;
        if ( !v9 )
        {
          v10 = sub_6040E524(v8);
          v4 = 3;
          if ( !v10 )
          {
            v11 = sub_6040C0DC(dword_60C9A230);
            v4 = 17;
            if ( v11 )
              v4 = 3;
          }
        }
      }
      else if ( (char *)v5 == (char *)BootScene_create )
      {
        v4 = 0;
      }
      else if ( (char *)v5 == (char *)TitleScene_create )
      {
        v4 = 3;
      }
      else if ( (char *)v5 == (char *)DemoScene_create )
      {
        v4 = 22;
        v13 = FIELD_U16(dword_60CC6D78, 109048);
        v14 = v13 == 10;
        if ( v13 != 10 )
          v14 = v13 == 138;
        if ( !v14 && v13 != 32906 )
          v4 = 21;
      }
      else if ( (char *)v5 == (char *)ChallengeRetryScene_create )
      {
        v4 = 25;
      }
      else if ( (char *)v5 == (char *)ChallengeResultScene_create )
      {
        v4 = 26;
      }
      else if ( (char *)v5 == (char *)GameOverScene_create )
      {
        v4 = 18;
      }
      else
      {
        v4 = 5;
        if ( (char *)v5 != (char *)GameSetupScene_create )
        {
          if ( (char *)v5 == (char *)MultiPlayCourseSelectScene_create )
          {
            v4 = 6;
          }
          else if ( (char *)v5 == (char *)ResultScene_create )
          {
            v4 = 19;
          }
          else if ( (char *)v5 == (char *)DarkCloudDemoScene_create )
          {
            v4 = 15;
          }
          else if ( v5 != sub_600248BC )
          {
            v4 = 4;
            if ( (char *)v5 == (char *)CourseSelectTask_create )
            {
              v12 = FIELD_U8(dword_60CC6D78, 412);
              if ( v12 >= 8 )
                v12 = 8;
              v4 = dword_60AF50E8[v12];
            }
          }
        }
      }
    }
    return sub_60022CC0(dword_60C7F558, a1, v4);
  }
  return result;
}
