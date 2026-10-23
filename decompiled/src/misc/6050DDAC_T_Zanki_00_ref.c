/* T_Zanki_00_ref
 * address: 0x6050DDAC   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int T_Zanki_00_ref()
{
  dword_60CA804C = ++CurrentStateID;
  dword_60CA8048 = (int)&off_60BFF6D4;
  dword_60CA8050 = (int)nullsub_4219;
  dword_60CA8054 = 0;
  dword_60CA8058 = (int)CourseSelectScene_Zanki1P_00_ref;
  dword_60CA805C = 0;
  dword_60CA8060 = (int)nullsub_4220;
  dword_60CA8064 = 0;
  dword_60CA8070 = (int)&sead__SafeStringBase__vtable;
  dword_60CA8074 = (int)"CharaSet";
  sub_60000288();
  dword_60CA8078 = (int)&sead__SafeStringBase__vtable;
  dword_60CA807C = (int)"G_Icon_00";
  sub_60000288();
  dword_60CA8080 = (int)&sead__SafeStringBase__vtable;
  dword_60CA8084 = (int)"T_Zanki_00";
  return sub_60000288();
}
